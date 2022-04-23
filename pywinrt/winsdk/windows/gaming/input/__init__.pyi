# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.devices.haptics
except Exception:
    pass

try:
    import winsdk.windows.devices.power
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.gaming.input.forcefeedback
except Exception:
    pass

try:
    import winsdk.windows.system
except Exception:
    pass

class ArcadeStickButtons(enum.IntFlag):
    NONE = 0
    STICK_UP = 0x1
    STICK_DOWN = 0x2
    STICK_LEFT = 0x4
    STICK_RIGHT = 0x8
    ACTION1 = 0x10
    ACTION2 = 0x20
    ACTION3 = 0x40
    ACTION4 = 0x80
    ACTION5 = 0x100
    ACTION6 = 0x200
    SPECIAL1 = 0x400
    SPECIAL2 = 0x800

class FlightStickButtons(enum.IntFlag):
    NONE = 0
    FIRE_PRIMARY = 0x1
    FIRE_SECONDARY = 0x2

class GameControllerButtonLabel(enum.IntEnum):
    NONE = 0
    XBOX_BACK = 1
    XBOX_START = 2
    XBOX_MENU = 3
    XBOX_VIEW = 4
    XBOX_UP = 5
    XBOX_DOWN = 6
    XBOX_LEFT = 7
    XBOX_RIGHT = 8
    XBOX_A = 9
    XBOX_B = 10
    XBOX_X = 11
    XBOX_Y = 12
    XBOX_LEFT_BUMPER = 13
    XBOX_LEFT_TRIGGER = 14
    XBOX_LEFT_STICK_BUTTON = 15
    XBOX_RIGHT_BUMPER = 16
    XBOX_RIGHT_TRIGGER = 17
    XBOX_RIGHT_STICK_BUTTON = 18
    XBOX_PADDLE1 = 19
    XBOX_PADDLE2 = 20
    XBOX_PADDLE3 = 21
    XBOX_PADDLE4 = 22
    MODE = 23
    SELECT = 24
    MENU = 25
    VIEW = 26
    BACK = 27
    START = 28
    OPTIONS = 29
    SHARE = 30
    UP = 31
    DOWN = 32
    LEFT = 33
    RIGHT = 34
    LETTER_A = 35
    LETTER_B = 36
    LETTER_C = 37
    LETTER_L = 38
    LETTER_R = 39
    LETTER_X = 40
    LETTER_Y = 41
    LETTER_Z = 42
    CROSS = 43
    CIRCLE = 44
    SQUARE = 45
    TRIANGLE = 46
    LEFT_BUMPER = 47
    LEFT_TRIGGER = 48
    LEFT_STICK_BUTTON = 49
    LEFT1 = 50
    LEFT2 = 51
    LEFT3 = 52
    RIGHT_BUMPER = 53
    RIGHT_TRIGGER = 54
    RIGHT_STICK_BUTTON = 55
    RIGHT1 = 56
    RIGHT2 = 57
    RIGHT3 = 58
    PADDLE1 = 59
    PADDLE2 = 60
    PADDLE3 = 61
    PADDLE4 = 62
    PLUS = 63
    MINUS = 64
    DOWN_LEFT_ARROW = 65
    DIAL_LEFT = 66
    DIAL_RIGHT = 67
    SUSPENSION = 68

class GameControllerSwitchKind(enum.IntEnum):
    TWO_WAY = 0
    FOUR_WAY = 1
    EIGHT_WAY = 2

class GameControllerSwitchPosition(enum.IntEnum):
    CENTER = 0
    UP = 1
    UP_RIGHT = 2
    RIGHT = 3
    DOWN_RIGHT = 4
    DOWN = 5
    DOWN_LEFT = 6
    LEFT = 7
    UP_LEFT = 8

class GamepadButtons(enum.IntFlag):
    NONE = 0
    MENU = 0x1
    VIEW = 0x2
    A = 0x4
    B = 0x8
    X = 0x10
    Y = 0x20
    D_PAD_UP = 0x40
    D_PAD_DOWN = 0x80
    D_PAD_LEFT = 0x100
    D_PAD_RIGHT = 0x200
    LEFT_SHOULDER = 0x400
    RIGHT_SHOULDER = 0x800
    LEFT_THUMBSTICK = 0x1000
    RIGHT_THUMBSTICK = 0x2000
    PADDLE1 = 0x4000
    PADDLE2 = 0x8000
    PADDLE3 = 0x10000
    PADDLE4 = 0x20000

class OptionalUINavigationButtons(enum.IntFlag):
    NONE = 0
    CONTEXT1 = 0x1
    CONTEXT2 = 0x2
    CONTEXT3 = 0x4
    CONTEXT4 = 0x8
    PAGE_UP = 0x10
    PAGE_DOWN = 0x20
    PAGE_LEFT = 0x40
    PAGE_RIGHT = 0x80
    SCROLL_UP = 0x100
    SCROLL_DOWN = 0x200
    SCROLL_LEFT = 0x400
    SCROLL_RIGHT = 0x800

class RacingWheelButtons(enum.IntFlag):
    NONE = 0
    PREVIOUS_GEAR = 0x1
    NEXT_GEAR = 0x2
    D_PAD_UP = 0x4
    D_PAD_DOWN = 0x8
    D_PAD_LEFT = 0x10
    D_PAD_RIGHT = 0x20
    BUTTON1 = 0x40
    BUTTON2 = 0x80
    BUTTON3 = 0x100
    BUTTON4 = 0x200
    BUTTON5 = 0x400
    BUTTON6 = 0x800
    BUTTON7 = 0x1000
    BUTTON8 = 0x2000
    BUTTON9 = 0x4000
    BUTTON10 = 0x8000
    BUTTON11 = 0x10000
    BUTTON12 = 0x20000
    BUTTON13 = 0x40000
    BUTTON14 = 0x80000
    BUTTON15 = 0x100000
    BUTTON16 = 0x200000

class RequiredUINavigationButtons(enum.IntFlag):
    NONE = 0
    MENU = 0x1
    VIEW = 0x2
    ACCEPT = 0x4
    CANCEL = 0x8
    UP = 0x10
    DOWN = 0x20
    LEFT = 0x40
    RIGHT = 0x80

class ArcadeStickReading:
    timestamp: _winrt.UInt64
    buttons: ArcadeStickButtons
    def __init__(self, timestamp: _winrt.UInt64, buttons: ArcadeStickButtons) -> None: ...

class FlightStickReading:
    timestamp: _winrt.UInt64
    buttons: FlightStickButtons
    hat_switch: GameControllerSwitchPosition
    roll: _winrt.Double
    pitch: _winrt.Double
    yaw: _winrt.Double
    throttle: _winrt.Double
    def __init__(self, timestamp: _winrt.UInt64, buttons: FlightStickButtons, hat_switch: GameControllerSwitchPosition, roll: _winrt.Double, pitch: _winrt.Double, yaw: _winrt.Double, throttle: _winrt.Double) -> None: ...

class GamepadReading:
    timestamp: _winrt.UInt64
    buttons: GamepadButtons
    left_trigger: _winrt.Double
    right_trigger: _winrt.Double
    left_thumbstick_x: _winrt.Double
    left_thumbstick_y: _winrt.Double
    right_thumbstick_x: _winrt.Double
    right_thumbstick_y: _winrt.Double
    def __init__(self, timestamp: _winrt.UInt64, buttons: GamepadButtons, left_trigger: _winrt.Double, right_trigger: _winrt.Double, left_thumbstick_x: _winrt.Double, left_thumbstick_y: _winrt.Double, right_thumbstick_x: _winrt.Double, right_thumbstick_y: _winrt.Double) -> None: ...

class GamepadVibration:
    left_motor: _winrt.Double
    right_motor: _winrt.Double
    left_trigger: _winrt.Double
    right_trigger: _winrt.Double
    def __init__(self, left_motor: _winrt.Double, right_motor: _winrt.Double, left_trigger: _winrt.Double, right_trigger: _winrt.Double) -> None: ...

class RacingWheelReading:
    timestamp: _winrt.UInt64
    buttons: RacingWheelButtons
    pattern_shifter_gear: _winrt.Int32
    wheel: _winrt.Double
    throttle: _winrt.Double
    brake: _winrt.Double
    clutch: _winrt.Double
    handbrake: _winrt.Double
    def __init__(self, timestamp: _winrt.UInt64, buttons: RacingWheelButtons, pattern_shifter_gear: _winrt.Int32, wheel: _winrt.Double, throttle: _winrt.Double, brake: _winrt.Double, clutch: _winrt.Double, handbrake: _winrt.Double) -> None: ...

class UINavigationReading:
    timestamp: _winrt.UInt64
    required_buttons: RequiredUINavigationButtons
    optional_buttons: OptionalUINavigationButtons
    def __init__(self, timestamp: _winrt.UInt64, required_buttons: RequiredUINavigationButtons, optional_buttons: OptionalUINavigationButtons) -> None: ...

class ArcadeStick(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    arcade_sticks: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ArcadeStick]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ArcadeStick: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[ArcadeStick]: ...
    def get_button_label(self, button: ArcadeStickButtons) -> GameControllerButtonLabel: ...
    def get_current_reading(self) -> ArcadeStickReading: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_arcade_stick_added(value: winsdk.windows.foundation.EventHandler[ArcadeStick]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_arcade_stick_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_arcade_stick_removed(value: winsdk.windows.foundation.EventHandler[ArcadeStick]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_arcade_stick_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class FlightStick(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    hat_switch_kind: GameControllerSwitchKind
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    flight_sticks: typing.Optional[winsdk.windows.foundation.collections.IVectorView[FlightStick]]
    @staticmethod
    def _from(obj: _winrt.Object) -> FlightStick: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[FlightStick]: ...
    def get_button_label(self, button: FlightStickButtons) -> GameControllerButtonLabel: ...
    def get_current_reading(self) -> FlightStickReading: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_flight_stick_added(value: winsdk.windows.foundation.EventHandler[FlightStick]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_flight_stick_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_flight_stick_removed(value: winsdk.windows.foundation.EventHandler[FlightStick]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_flight_stick_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class Gamepad(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    vibration: GamepadVibration
    gamepads: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Gamepad]]
    @staticmethod
    def _from(obj: _winrt.Object) -> Gamepad: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[Gamepad]: ...
    def get_button_label(self, button: GamepadButtons) -> GameControllerButtonLabel: ...
    def get_current_reading(self) -> GamepadReading: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_gamepad_added(value: winsdk.windows.foundation.EventHandler[Gamepad]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_gamepad_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_gamepad_removed(value: winsdk.windows.foundation.EventHandler[Gamepad]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_gamepad_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class Headset(_winrt.Object, interfaces=[IGameControllerBatteryInfo]):
    capture_device_id: str
    render_device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Headset: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...

class RacingWheel(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    has_clutch: _winrt.Boolean
    has_handbrake: _winrt.Boolean
    has_pattern_shifter: _winrt.Boolean
    max_pattern_shifter_gear: _winrt.Int32
    max_wheel_angle: _winrt.Double
    wheel_motor: typing.Optional[winsdk.windows.gaming.input.forcefeedback.ForceFeedbackMotor]
    racing_wheels: typing.Optional[winsdk.windows.foundation.collections.IVectorView[RacingWheel]]
    @staticmethod
    def _from(obj: _winrt.Object) -> RacingWheel: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[RacingWheel]: ...
    def get_button_label(self, button: RacingWheelButtons) -> GameControllerButtonLabel: ...
    def get_current_reading(self) -> RacingWheelReading: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_racing_wheel_added(value: winsdk.windows.foundation.EventHandler[RacingWheel]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_racing_wheel_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_racing_wheel_removed(value: winsdk.windows.foundation.EventHandler[RacingWheel]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_racing_wheel_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RawGameController(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    axis_count: _winrt.Int32
    button_count: _winrt.Int32
    force_feedback_motors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.gaming.input.forcefeedback.ForceFeedbackMotor]]
    hardware_product_id: _winrt.UInt16
    hardware_vendor_id: _winrt.UInt16
    switch_count: _winrt.Int32
    display_name: str
    non_roamable_id: str
    simple_haptics_controllers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.devices.haptics.SimpleHapticsController]]
    raw_game_controllers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[RawGameController]]
    @staticmethod
    def _from(obj: _winrt.Object) -> RawGameController: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[RawGameController]: ...
    def get_button_label(self, button_index: _winrt.Int32) -> GameControllerButtonLabel: ...
    def get_current_reading(self, button_array_size: _winrt.UInt32, switch_array_size: _winrt.UInt32, axis_array_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt64, typing.List[_winrt.Boolean], typing.List[GameControllerSwitchPosition], typing.List[_winrt.Double]]: ...
    def get_switch_kind(self, switch_index: _winrt.Int32) -> GameControllerSwitchKind: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_raw_game_controller_added(value: winsdk.windows.foundation.EventHandler[RawGameController]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_raw_game_controller_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_raw_game_controller_removed(value: winsdk.windows.foundation.EventHandler[RawGameController]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_raw_game_controller_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UINavigationController(_winrt.Object, interfaces=[IGameController, IGameControllerBatteryInfo]):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    u_i_navigation_controllers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UINavigationController]]
    @staticmethod
    def _from(obj: _winrt.Object) -> UINavigationController: ...
    @staticmethod
    def from_game_controller(game_controller: typing.Optional[IGameController]) -> typing.Optional[UINavigationController]: ...
    def get_current_reading(self) -> UINavigationReading: ...
    def get_optional_button_label(self, button: OptionalUINavigationButtons) -> GameControllerButtonLabel: ...
    def get_required_button_label(self, button: RequiredUINavigationButtons) -> GameControllerButtonLabel: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_u_i_navigation_controller_added(value: winsdk.windows.foundation.EventHandler[UINavigationController]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_u_i_navigation_controller_added(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_u_i_navigation_controller_removed(value: winsdk.windows.foundation.EventHandler[UINavigationController]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_u_i_navigation_controller_removed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IGameController(typing.Protocol):
    headset: typing.Optional[Headset]
    is_wireless: _winrt.Boolean
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> IGameController: ...
    def add_headset_connected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_connected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_headset_disconnected(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, Headset]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_headset_disconnected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_changed(self, value: winsdk.windows.foundation.TypedEventHandler[IGameController, winsdk.windows.system.UserChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IGameControllerBatteryInfo(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IGameControllerBatteryInfo: ...
    def try_get_battery_report(self) -> typing.Optional[winsdk.windows.devices.power.BatteryReport]: ...

