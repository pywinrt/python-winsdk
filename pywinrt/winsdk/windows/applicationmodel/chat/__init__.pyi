# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.media.mediaproperties
except Exception:
    pass

try:
    import winsdk.windows.security.credentials
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class ChatConversationThreadingKind(enum.IntEnum):
    PARTICIPANTS = 0
    CONTACT_ID = 1
    CONVERSATION_ID = 2
    CUSTOM = 3

class ChatItemKind(enum.IntEnum):
    MESSAGE = 0
    CONVERSATION = 1

class ChatMessageChangeType(enum.IntEnum):
    MESSAGE_CREATED = 0
    MESSAGE_MODIFIED = 1
    MESSAGE_DELETED = 2
    CHANGE_TRACKING_LOST = 3

class ChatMessageKind(enum.IntEnum):
    STANDARD = 0
    FILE_TRANSFER_REQUEST = 1
    TRANSPORT_CUSTOM = 2
    JOINED_CONVERSATION = 3
    LEFT_CONVERSATION = 4
    OTHER_PARTICIPANT_JOINED_CONVERSATION = 5
    OTHER_PARTICIPANT_LEFT_CONVERSATION = 6

class ChatMessageOperatorKind(enum.IntEnum):
    UNSPECIFIED = 0
    SMS = 1
    MMS = 2
    RCS = 3

class ChatMessageStatus(enum.IntEnum):
    DRAFT = 0
    SENDING = 1
    SENT = 2
    SEND_RETRY_NEEDED = 3
    SEND_FAILED = 4
    RECEIVED = 5
    RECEIVE_DOWNLOAD_NEEDED = 6
    RECEIVE_DOWNLOAD_FAILED = 7
    RECEIVE_DOWNLOADING = 8
    DELETED = 9
    DECLINED = 10
    CANCELLED = 11
    RECALLED = 12
    RECEIVE_RETRY_NEEDED = 13

class ChatMessageTransportKind(enum.IntEnum):
    TEXT = 0
    UNTRIAGED = 1
    BLOCKED = 2
    CUSTOM = 3

class ChatMessageValidationStatus(enum.IntEnum):
    VALID = 0
    NO_RECIPIENTS = 1
    INVALID_DATA = 2
    MESSAGE_TOO_LARGE = 3
    TOO_MANY_RECIPIENTS = 4
    TRANSPORT_INACTIVE = 5
    TRANSPORT_NOT_FOUND = 6
    TOO_MANY_ATTACHMENTS = 7
    INVALID_RECIPIENTS = 8
    INVALID_BODY = 9
    INVALID_OTHER = 10
    VALID_WITH_LARGE_MESSAGE = 11
    VOICE_ROAMING_RESTRICTION = 12
    DATA_ROAMING_RESTRICTION = 13

class ChatRestoreHistorySpan(enum.IntEnum):
    LAST_MONTH = 0
    LAST_YEAR = 1
    ANY_TIME = 2

class ChatStoreChangedEventKind(enum.IntEnum):
    NOTIFICATIONS_MISSED = 0
    STORE_MODIFIED = 1
    MESSAGE_CREATED = 2
    MESSAGE_MODIFIED = 3
    MESSAGE_DELETED = 4
    CONVERSATION_MODIFIED = 5
    CONVERSATION_DELETED = 6
    CONVERSATION_TRANSPORT_DELETED = 7

class ChatTransportErrorCodeCategory(enum.IntEnum):
    NONE = 0
    HTTP = 1
    NETWORK = 2
    MMS_SERVER = 3

class ChatTransportInterpretedErrorCode(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    INVALID_RECIPIENT_ADDRESS = 2
    NETWORK_CONNECTIVITY = 3
    SERVICE_DENIED = 4
    TIMEOUT = 5

class RcsServiceKind(enum.IntEnum):
    CHAT = 0
    GROUP_CHAT = 1
    FILE_TRANSFER = 2
    CAPABILITY = 3

class ChatCapabilities(_winrt.Object):
    is_chat_capable: _winrt.Boolean
    is_file_transfer_capable: _winrt.Boolean
    is_geo_location_push_capable: _winrt.Boolean
    is_integrated_messaging_capable: _winrt.Boolean
    is_online: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatCapabilities: ...

class ChatCapabilitiesManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatCapabilitiesManager: ...
    @typing.overload
    @staticmethod
    def get_cached_capabilities_async(address: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatCapabilities]]: ...
    @typing.overload
    @staticmethod
    def get_cached_capabilities_async(address: str, transport_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatCapabilities]]: ...
    @typing.overload
    @staticmethod
    def get_capabilities_from_network_async(address: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatCapabilities]]: ...
    @typing.overload
    @staticmethod
    def get_capabilities_from_network_async(address: str, transport_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatCapabilities]]: ...

class ChatConversation(IChatItem, _winrt.Object):
    subject: str
    is_conversation_muted: _winrt.Boolean
    has_unread_messages: _winrt.Boolean
    id: str
    most_recent_message_id: str
    participants: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    threading_info: typing.Optional[ChatConversationThreadingInfo]
    can_modify_participants: _winrt.Boolean
    item_kind: ChatItemKind
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatConversation: ...
    def delete_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def get_message_reader(self) -> typing.Optional[ChatMessageReader]: ...
    @typing.overload
    def mark_messages_as_read_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def mark_messages_as_read_async(self, value: winsdk.windows.foundation.DateTime) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def notify_local_participant_composing(self, transport_id: str, participant_address: str, is_composing: _winrt.Boolean) -> None: ...
    def notify_remote_participant_composing(self, transport_id: str, participant_address: str, is_composing: _winrt.Boolean) -> None: ...
    def save_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def add_remote_participant_composing_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ChatConversation, RemoteParticipantComposingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_remote_participant_composing_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ChatConversationReader(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatConversationReader: ...
    @typing.overload
    def read_batch_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatConversation]]]: ...
    @typing.overload
    def read_batch_async(self, count: _winrt.Int32) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatConversation]]]: ...

class ChatConversationThreadingInfo(_winrt.Object):
    kind: ChatConversationThreadingKind
    custom: str
    conversation_id: str
    contact_id: str
    participants: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatConversationThreadingInfo: ...
    def __init__(self) -> None: ...

class ChatMessage(IChatItem, _winrt.Object):
    item_kind: ChatItemKind
    is_incoming: _winrt.Boolean
    is_forwarding_disabled: _winrt.Boolean
    transport_id: str
    status: ChatMessageStatus
    from_: str
    body: str
    subject: str
    is_read: _winrt.Boolean
    network_timestamp: winsdk.windows.foundation.DateTime
    local_timestamp: winsdk.windows.foundation.DateTime
    recipient_send_statuses: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ChatMessageStatus]]
    recipients: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    transport_friendly_name: str
    attachments: typing.Optional[winsdk.windows.foundation.collections.IVector[ChatMessageAttachment]]
    id: str
    is_seen: _winrt.Boolean
    message_kind: ChatMessageKind
    is_received_during_quiet_hours: _winrt.Boolean
    is_auto_reply: _winrt.Boolean
    estimated_download_size: _winrt.UInt64
    threading_info: typing.Optional[ChatConversationThreadingInfo]
    should_suppress_notification: _winrt.Boolean
    remote_id: str
    message_operator_kind: ChatMessageOperatorKind
    is_reply_disabled: _winrt.Boolean
    is_sim_message: _winrt.Boolean
    recipients_delivery_infos: typing.Optional[winsdk.windows.foundation.collections.IVector[ChatRecipientDeliveryInfo]]
    sync_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessage: ...
    def __init__(self) -> None: ...

class ChatMessageAttachment(_winrt.Object):
    text: str
    mime_type: str
    group_id: _winrt.UInt32
    data_stream_reference: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    transfer_progress: _winrt.Double
    thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    original_file_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageAttachment: ...
    def __init__(self, mime_type: str, data_stream_reference: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> None: ...

class ChatMessageBlocking(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageBlocking: ...
    @staticmethod
    def mark_message_as_blocked_async(local_chat_message_id: str, blocked: _winrt.Boolean) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ChatMessageChange(_winrt.Object):
    change_type: ChatMessageChangeType
    message: typing.Optional[ChatMessage]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageChange: ...

class ChatMessageChangeReader(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageChangeReader: ...
    def accept_changes(self) -> None: ...
    def accept_changes_through(self, last_change_to_acknowledge: typing.Optional[ChatMessageChange]) -> None: ...
    def read_batch_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatMessageChange]]]: ...

class ChatMessageChangeTracker(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageChangeTracker: ...
    def enable(self) -> None: ...
    def get_change_reader(self) -> typing.Optional[ChatMessageChangeReader]: ...
    def reset(self) -> None: ...

class ChatMessageChangedDeferral(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageChangedDeferral: ...
    def complete(self) -> None: ...

class ChatMessageChangedEventArgs(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[ChatMessageChangedDeferral]: ...

class ChatMessageManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageManager: ...
    @staticmethod
    def get_transport_async(transport_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessageTransport]]: ...
    @staticmethod
    def get_transports_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatMessageTransport]]]: ...
    @staticmethod
    def register_transport_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[str]]: ...
    @staticmethod
    def request_store_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessageStore]]: ...
    @staticmethod
    def request_sync_manager_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatSyncManager]]: ...
    @staticmethod
    def show_compose_sms_message_async(message: typing.Optional[ChatMessage]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def show_sms_settings() -> None: ...

class ChatMessageNotificationTriggerDetails(_winrt.Object):
    chat_message: typing.Optional[ChatMessage]
    should_display_toast: _winrt.Boolean
    should_update_action_center: _winrt.Boolean
    should_update_badge: _winrt.Boolean
    should_update_detail_text: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageNotificationTriggerDetails: ...

class ChatMessageReader(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageReader: ...
    @typing.overload
    def read_batch_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatMessage]]]: ...
    @typing.overload
    def read_batch_async(self, count: _winrt.Int32) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ChatMessage]]]: ...

class ChatMessageStore(_winrt.Object):
    change_tracker: typing.Optional[ChatMessageChangeTracker]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageStore: ...
    def delete_message_async(self, local_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def download_message_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def forward_message_async(self, local_chat_message_id: str, addresses: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessage]]: ...
    @typing.overload
    def get_conversation_async(self, conversation_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatConversation]]: ...
    @typing.overload
    def get_conversation_async(self, conversation_id: str, transport_ids: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatConversation]]: ...
    def get_conversation_from_threading_info_async(self, threading_info: typing.Optional[ChatConversationThreadingInfo]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatConversation]]: ...
    @typing.overload
    def get_conversation_reader(self) -> typing.Optional[ChatConversationReader]: ...
    @typing.overload
    def get_conversation_reader(self, transport_ids: typing.Iterable[str]) -> typing.Optional[ChatConversationReader]: ...
    def get_message_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessage]]: ...
    def get_message_by_remote_id_async(self, transport_id: str, remote_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessage]]: ...
    def get_message_by_sync_id_async(self, sync_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ChatMessage]]: ...
    @typing.overload
    def get_message_reader(self) -> typing.Optional[ChatMessageReader]: ...
    @typing.overload
    def get_message_reader(self, recent_time_limit: winsdk.windows.foundation.TimeSpan) -> typing.Optional[ChatMessageReader]: ...
    def get_search_reader(self, value: typing.Optional[ChatQueryOptions]) -> typing.Optional[ChatSearchReader]: ...
    @typing.overload
    def get_unseen_count_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Int32]]: ...
    @typing.overload
    def get_unseen_count_async(self, transport_ids: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Int32]]: ...
    @typing.overload
    def mark_as_seen_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def mark_as_seen_async(self, transport_ids: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def mark_message_read_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def retry_send_message_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def save_message_async(self, chat_message: typing.Optional[ChatMessage]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def send_message_async(self, chat_message: typing.Optional[ChatMessage]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def try_cancel_download_message_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...
    def try_cancel_send_message_async(self, local_chat_message_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...
    def validate_message(self, chat_message: typing.Optional[ChatMessage]) -> typing.Optional[ChatMessageValidationResult]: ...
    def add_message_changed(self, value: winsdk.windows.foundation.TypedEventHandler[ChatMessageStore, ChatMessageChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_message_changed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_store_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ChatMessageStore, ChatMessageStoreChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_store_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ChatMessageStoreChangedEventArgs(_winrt.Object):
    id: str
    kind: ChatStoreChangedEventKind
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageStoreChangedEventArgs: ...

class ChatMessageTransport(_winrt.Object):
    is_active: _winrt.Boolean
    is_app_set_as_notification_provider: _winrt.Boolean
    transport_friendly_name: str
    transport_id: str
    configuration: typing.Optional[ChatMessageTransportConfiguration]
    transport_kind: ChatMessageTransportKind
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageTransport: ...
    def request_set_as_notification_provider_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ChatMessageTransportConfiguration(_winrt.Object):
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    max_attachment_count: _winrt.Int32
    max_message_size_in_kilobytes: _winrt.Int32
    max_recipient_count: _winrt.Int32
    supported_video_format: typing.Optional[winsdk.windows.media.mediaproperties.MediaEncodingProfile]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageTransportConfiguration: ...

class ChatMessageValidationResult(_winrt.Object):
    max_part_count: typing.Optional[typing.Optional[_winrt.UInt32]]
    part_count: typing.Optional[typing.Optional[_winrt.UInt32]]
    remaining_character_count_in_part: typing.Optional[typing.Optional[_winrt.UInt32]]
    status: ChatMessageValidationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatMessageValidationResult: ...

class ChatQueryOptions(_winrt.Object):
    search_string: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatQueryOptions: ...
    def __init__(self) -> None: ...

class ChatRecipientDeliveryInfo(_winrt.Object):
    transport_address: str
    read_time: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    delivery_time: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    is_error_permanent: _winrt.Boolean
    status: ChatMessageStatus
    transport_error_code: _winrt.Int32
    transport_error_code_category: ChatTransportErrorCodeCategory
    transport_interpreted_error_code: ChatTransportInterpretedErrorCode
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatRecipientDeliveryInfo: ...
    def __init__(self) -> None: ...

class ChatSearchReader(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatSearchReader: ...
    @typing.overload
    def read_batch_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[IChatItem]]]: ...
    @typing.overload
    def read_batch_async(self, count: _winrt.Int32) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[IChatItem]]]: ...

class ChatSyncConfiguration(_winrt.Object):
    restore_history_span: ChatRestoreHistorySpan
    is_sync_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatSyncConfiguration: ...

class ChatSyncManager(_winrt.Object):
    configuration: typing.Optional[ChatSyncConfiguration]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChatSyncManager: ...
    def associate_account_async(self, web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def is_account_associated(self, web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]) -> _winrt.Boolean: ...
    def set_configuration_async(self, configuration: typing.Optional[ChatSyncConfiguration]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def start_sync(self) -> None: ...
    def unassociate_account_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class RcsEndUserMessage(_winrt.Object):
    actions: typing.Optional[winsdk.windows.foundation.collections.IVectorView[RcsEndUserMessageAction]]
    is_pin_required: _winrt.Boolean
    text: str
    title: str
    transport_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsEndUserMessage: ...
    def send_response_async(self, action: typing.Optional[RcsEndUserMessageAction]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def send_response_with_pin_async(self, action: typing.Optional[RcsEndUserMessageAction], pin: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class RcsEndUserMessageAction(_winrt.Object):
    label: str
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsEndUserMessageAction: ...

class RcsEndUserMessageAvailableEventArgs(_winrt.Object):
    is_message_available: _winrt.Boolean
    message: typing.Optional[RcsEndUserMessage]
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsEndUserMessageAvailableEventArgs: ...

class RcsEndUserMessageAvailableTriggerDetails(_winrt.Object):
    text: str
    title: str
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsEndUserMessageAvailableTriggerDetails: ...

class RcsEndUserMessageManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsEndUserMessageManager: ...
    def add_message_available_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[RcsEndUserMessageManager, RcsEndUserMessageAvailableEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_message_available_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RcsManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsManager: ...
    @staticmethod
    def get_end_user_message_manager() -> typing.Optional[RcsEndUserMessageManager]: ...
    @staticmethod
    def get_transport_async(transport_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[RcsTransport]]: ...
    @staticmethod
    def get_transports_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[RcsTransport]]]: ...
    @staticmethod
    def leave_conversation_async(conversation: typing.Optional[ChatConversation]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def add_transport_list_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_transport_list_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RcsServiceKindSupportedChangedEventArgs(_winrt.Object):
    service_kind: RcsServiceKind
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsServiceKindSupportedChangedEventArgs: ...

class RcsTransport(_winrt.Object):
    configuration: typing.Optional[RcsTransportConfiguration]
    extended_properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    is_active: _winrt.Boolean
    transport_friendly_name: str
    transport_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsTransport: ...
    def is_service_kind_supported(self, service_kind: RcsServiceKind) -> _winrt.Boolean: ...
    def is_store_and_forward_enabled(self, service_kind: RcsServiceKind) -> _winrt.Boolean: ...
    def add_service_kind_supported_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[RcsTransport, RcsServiceKindSupportedChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_service_kind_supported_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RcsTransportConfiguration(_winrt.Object):
    max_attachment_count: _winrt.Int32
    max_file_size_in_kilobytes: _winrt.Int32
    max_group_message_size_in_kilobytes: _winrt.Int32
    max_message_size_in_kilobytes: _winrt.Int32
    max_recipient_count: _winrt.Int32
    warning_file_size_in_kilobytes: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> RcsTransportConfiguration: ...

class RemoteParticipantComposingChangedEventArgs(_winrt.Object):
    is_composing: _winrt.Boolean
    participant_address: str
    transport_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> RemoteParticipantComposingChangedEventArgs: ...

class IChatItem(_winrt.Object):
    item_kind: ChatItemKind
    @staticmethod
    def _from(obj: _winrt.Object) -> IChatItem: ...

