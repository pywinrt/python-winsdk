from winsdk.windows.security.credentials import PasswordCredential, PasswordVault


def save_credential_to_resource(resource: str, username: str, password: str) -> None:
    vault = PasswordVault()
    cred = PasswordCredential(resource, username, password)
    vault.add(cred)


if __name__ == "__main__":
    VAULT_RESOURCE = "WinSDK Sample"
    # Uncomment this line to save a credential in resource
    # save_credential_to_resource(VAULT_RESOURCE, "dummy_username", "dummy_password")

    vault = PasswordVault()

    try:
        creds = vault.find_all_by_resource(VAULT_RESOURCE)
        if creds is not None:
            for cred in creds:
                print(
                    f"Username: {cred.user_name}, Password: {vault.retrieve(VAULT_RESOURCE, cred.user_name).password}"
                )
    except OSError as ex:
        print(f"Could not find any resource for {VAULT_RESOURCE}")
