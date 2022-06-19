import asyncio

from winsdk.windows.data.xml.dom import XmlDocument
from winsdk.windows.foundation import IPropertyValue
from winsdk.windows.ui.notifications import (
    ToastActivatedEventArgs,
    ToastNotification,
    ToastNotificationManager,
)


def get_text_only_toast_dom() -> XmlDocument:
    toast_dom = XmlDocument()
    toast_xml_string = """<toast>
    <visual>
        <binding template="ToastGeneric">
            <text>Hello World</text>
            <text>This is a simple toast message</text>
        </binding>
    </visual>
</toast>"""
    toast_dom.load_xml(toast_xml_string)
    return toast_dom


def get_text_with_image_toast_dom() -> XmlDocument:
    toast_dom = XmlDocument()
    toast_xml_string = f"""<toast>
    <visual>
        <binding template='ToastGeneric'>
            <image placement="appLogoOverride" hint-crop="circle" src="https://i.pinimg.com/474x/50/70/10/5070101ae7cc267a1ba03d30abdd38e9.jpg"/>
            <text>Expedition completed</text>
            <text>An expedition has completed, don't forget to stop by the Adventures' Guild.</text>
            <image src="https://images.wallpapersden.com/image/download/genshin-impact-2019_a2prbGyUmZqaraWkpJRmbmdlrWZlbWU.jpg" />
        </binding>
    </visual>
</toast>"""
    toast_dom.load_xml(toast_xml_string)
    return toast_dom


def get_alarm_toast_dom() -> XmlDocument:
    toast_dom = XmlDocument()
    toast_xml_string = """<toast launch="action=viewAlarm&amp;alarmId=3" scenario="alarm">
    <visual>
        <binding template="ToastGeneric">
            <text>Time to wake up!</text>
            <text>To prove you're awake, select which of the following fruits is yellow...</text>
        </binding>
    </visual>
    <actions>
        <input id="answer" type="selection" defaultInput="wrongDefault">
            <selection id="wrong" content="Orange"/>
            <selection id="wrongDefault" content="Blueberry"/>
            <selection id="right" content="Banana"/>
            <selection id="wrong" content="Avacado"/>
            <selection id="wrong" content="Cherry"/>
        </input>
        <action
      activationType="system"
      arguments="snooze"
      content=""/>
        <action
      activationType="background"
      arguments="dismiss"
      content="Dismiss"/>
    </actions>
</toast>"""
    toast_dom.load_xml(toast_xml_string)
    return toast_dom


def get_action_toast_dom() -> XmlDocument:
    toast_dom = XmlDocument()
    toast_xml_string = f"""<toast>
    <visual>
        <binding template='ToastGeneric'>
            <text>Another Message from Tim!</text>
            <text>Hi there!</text>
        </binding>
    </visual>
    <actions>
        <input id="textBox1" type="text" placeHolderContent="Type a reply"/>
        <input id="textBox2" type="text" placeHolderContent="Type a comment"/>
        <action
            content="Send"
            arguments="action=reply&amp;convId=01"
            activationType="background"
            hint-inputId="textBox1"/>
        <action
            content="Button 1"
            arguments="action=viewdetails&amp;contentId=02"
            activationType="foreground"/>
        <action
            content="Comment"
            arguments="action=comment&amp;convId=03"
            activationType="background"
            hint-inputId="textBox2"/>
    </actions>
</toast>"""
    toast_dom.load_xml(toast_xml_string)
    return toast_dom


def main() -> None:
    # For desktip apps it is mendatory to send an AppUserModelID to create_toast_notifier.
    # We can use Get-StartApps powershell command to get list of all app with thier AppUserModelID
    notifier = ToastNotificationManager.create_toast_notifier(
        r"Microsoft.Windows.Photos_8wekyb3d8bbwe!App"
    )

    # We can use existing template from winsdk.windows.ui.notifications: https://docs.microsoft.com/en-us/uwp/api/windows.ui.notifications.toastnotification?view=winrt-22621
    # We can use Notifications Visualizer to design your own toast template: https://docs.microsoft.com/en-us/windows/apps/design/shell/tiles-and-notifications/notifications-visualizer
    # toast_dom = get_text_only_toast_dom()
    toast_dom = get_text_with_image_toast_dom()

    toast = ToastNotification(toast_dom)
    notifier.show(toast)


async def async_main() -> None:
    notifier = ToastNotificationManager.create_toast_notifier(
        r"Microsoft.Windows.Photos_8wekyb3d8bbwe!App"
    )
    # toast_dom = get_alarm_toast_dom()
    toast_dom = get_action_toast_dom()

    toast = ToastNotification(toast_dom)

    event_loop = asyncio.get_running_loop()
    activated_future = event_loop.create_future()

    def handle_activated(sender, event_args):
        activated_future.set_result(event_args)

    activated_token = toast.add_activated(
        lambda s, e: event_loop.call_soon_threadsafe(handle_activated, s, e)
    )

    try:
        notifier.show(toast)

        async def print_received():
            event_args = await activated_future
            activated_event_args = ToastActivatedEventArgs._from(event_args)
            if hasattr(activated_event_args.user_input, "items"):
                for key, value in activated_event_args.user_input.items():
                    value = IPropertyValue._from(value).get_string()
                    print(f"{key}: {value}")
            print(f"event argument: {activated_event_args.arguments}")

        printer_task = asyncio.create_task(print_received())
        await asyncio.wait(
            [printer_task], timeout=10, return_when=asyncio.FIRST_COMPLETED
        )
    finally:
        toast.remove_activated(activated_token)


if __name__ == "__main__":
    main()
    asyncio.run(async_main())
