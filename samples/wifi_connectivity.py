import asyncio
from typing import Iterable, Optional

from winsdk.windows.devices.wifi import (
    WiFiAdapter,
    WiFiAvailableNetwork,
    WiFiConnectionStatus,
    WiFiPhyKind,
    WiFiReconnectionKind,
)
from winsdk.windows.networking.connectivity import (
    NetworkAuthenticationType,
    NetworkEncryptionType,
)
from winsdk.windows.security.credentials import PasswordCredential


def log_network_details(network: WiFiAvailableNetwork) -> None:
    print(f"SSID: {network.ssid}")
    print(f"MAC address: {network.bssid}")
    print(f"Frequency: {network.channel_center_frequency_in_kilohertz} kHz")
    print(f"RSSI: {network.network_rssi_in_decibel_milliwatts} dBm (lower is better)")
    # TODO: Need to update below three print statement, once issue #1 is closed
    print(
        f"Authentication: {NetworkAuthenticationType(network.security_settings.network_authentication_type).name}"
    )
    print(
        f"Encryption: {NetworkEncryptionType(network.security_settings.network_encryption_type).name}"
    )
    print(f"PHY: {WiFiPhyKind(network.phy_kind).name}")
    print(f"Signal: {network.signal_bars} bars (higher is better)")
    print(f"Uptime: {network.uptime.duration}")


async def get_wifi_networks() -> Iterable[WiFiAvailableNetwork]:
    wifi_networks = []
    wifi_adapters = await WiFiAdapter.find_all_adapters_async()
    for wifi_adapter in wifi_adapters:
        await wifi_adapter.scan_async()
        for network in wifi_adapter.network_report.available_networks:
            wifi_networks.append(network)
    return wifi_networks


async def get_connected_wifi_network() -> Optional[WiFiAvailableNetwork]:
    wifi_adapters = await WiFiAdapter.find_all_adapters_async()
    connected_ssid = None

    for wifi_adapter in wifi_adapters:
        connected_profile = (
            await wifi_adapter.network_adapter.get_connected_profile_async()
        )
        if (
            connected_profile is not None
            and connected_profile.is_wlan_connection_profile
            and connected_profile.wlan_connection_profile_details is not None
        ):
            connected_ssid = (
                connected_profile.wlan_connection_profile_details.get_connected_ssid()
            )

        await wifi_adapter.scan_async()
        for network in wifi_adapter.network_report.available_networks:
            if network.ssid == connected_ssid:
                return network
    return None


async def connect_to_network(
    ssid: str,
    password: str = "",
    reconnection_type: WiFiReconnectionKind = WiFiReconnectionKind.MANUAL,
) -> bool:
    wifi_adapters = await WiFiAdapter.find_all_adapters_async()

    for wifi_adapter in wifi_adapters:
        await wifi_adapter.scan_async()
        for network in wifi_adapter.network_report.available_networks:
            if network.ssid == ssid:
                if (
                    network.security_settings.network_authentication_type
                    == NetworkAuthenticationType.OPEN80211
                    and network.security_settings.network_encryption_type
                    == NetworkEncryptionType.NONE
                ):
                    result = await wifi_adapter.connect_async(
                        network, reconnection_type
                    )
                else:
                    credential = PasswordCredential()
                    if password:
                        credential.password = password
                    result = await wifi_adapter.connect_async(
                        network,
                        reconnection_type,
                        credential,
                    )
                if result.connection_status == WiFiConnectionStatus.SUCCESS:
                    print(f"Successfully connected to {network.ssid}.")
                    return True
                else:
                    print(
                        # TODO: Need to update once issue #1 is closed
                        f"Could not connect to {network.ssid}. Error: {WiFiConnectionStatus(result.connection_status).name}."
                    )
                    return False
    print(f"Could not find network with SSID: {ssid}!")
    return False


if __name__ == "__main__":
    # Scan example
    wifi_networks = asyncio.run(get_wifi_networks())
    for network in wifi_networks:
        print("=" * 30)
        log_network_details(network)

    # Connect example
    # Replace with correct network ssid and password
    is_connected = asyncio.run(connect_to_network("network_ssid", "network_password"))

    # Scan connected example
    connected_network = asyncio.run(get_connected_wifi_network())
    if connected_network is not None:
        print("=" * 30)
        print("Connected WiFi Network:")
        log_network_details(connected_network)
