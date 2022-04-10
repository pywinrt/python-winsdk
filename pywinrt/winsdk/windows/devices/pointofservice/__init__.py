# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.PointOfService")

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.graphics.imaging
except Exception:
    pass

try:
    import winsdk.windows.storage
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class BarcodeScannerStatus(enum.IntEnum):
    ONLINE = 0
    OFF = 1
    OFFLINE = 2
    OFF_OR_OFFLINE = 3
    EXTENDED = 4

class BarcodeSymbologyDecodeLengthKind(enum.IntEnum):
    ANY_LENGTH = 0
    DISCRETE = 1
    RANGE = 2

class CashDrawerStatusKind(enum.IntEnum):
    ONLINE = 0
    OFF = 1
    OFFLINE = 2
    OFF_OR_OFFLINE = 3
    EXTENDED = 4

class LineDisplayCursorType(enum.IntEnum):
    NONE = 0
    BLOCK = 1
    HALF_BLOCK = 2
    UNDERLINE = 3
    REVERSE = 4
    OTHER = 5

class LineDisplayDescriptorState(enum.IntEnum):
    OFF = 0
    ON = 1
    BLINK = 2

class LineDisplayHorizontalAlignment(enum.IntEnum):
    LEFT = 0
    CENTER = 1
    RIGHT = 2

class LineDisplayMarqueeFormat(enum.IntEnum):
    NONE = 0
    WALK = 1
    PLACE = 2

class LineDisplayPowerStatus(enum.IntEnum):
    UNKNOWN = 0
    ONLINE = 1
    OFF = 2
    OFFLINE = 3
    OFF_OR_OFFLINE = 4

class LineDisplayScrollDirection(enum.IntEnum):
    UP = 0
    DOWN = 1
    LEFT = 2
    RIGHT = 3

class LineDisplayTextAttribute(enum.IntEnum):
    NORMAL = 0
    BLINK = 1
    REVERSE = 2
    REVERSE_BLINK = 3

class LineDisplayTextAttributeGranularity(enum.IntEnum):
    NOT_SUPPORTED = 0
    ENTIRE_DISPLAY = 1
    PER_CHARACTER = 2

class LineDisplayVerticalAlignment(enum.IntEnum):
    TOP = 0
    CENTER = 1
    BOTTOM = 2

class MagneticStripeReaderAuthenticationLevel(enum.IntEnum):
    NOT_SUPPORTED = 0
    OPTIONAL = 1
    REQUIRED = 2

class MagneticStripeReaderAuthenticationProtocol(enum.IntEnum):
    NONE = 0
    CHALLENGE_RESPONSE = 1

class MagneticStripeReaderErrorReportingType(enum.IntEnum):
    CARD_LEVEL = 0
    TRACK_LEVEL = 1

class MagneticStripeReaderStatus(enum.IntEnum):
    UNAUTHENTICATED = 0
    AUTHENTICATED = 1
    EXTENDED = 2

class MagneticStripeReaderTrackErrorType(enum.IntEnum):
    NONE = 0
    START_SENTINEL_ERROR = 1
    END_SENTINEL_ERROR = 2
    PARITY_ERROR = 3
    LRC_ERROR = 4
    UNKNOWN = -1

class MagneticStripeReaderTrackIds(enum.IntEnum):
    NONE = 0
    TRACK1 = 1
    TRACK2 = 2
    TRACK3 = 4
    TRACK4 = 8

class PosConnectionTypes(enum.IntFlag):
    LOCAL = 0x1
    I_P = 0x2
    BLUETOOTH = 0x4
    ALL = 0xffffffff

class PosPrinterAlignment(enum.IntEnum):
    LEFT = 0
    CENTER = 1
    RIGHT = 2

class PosPrinterBarcodeTextPosition(enum.IntEnum):
    NONE = 0
    ABOVE = 1
    BELOW = 2

class PosPrinterCartridgeSensors(enum.IntFlag):
    NONE = 0
    REMOVED = 0x1
    EMPTY = 0x2
    HEAD_CLEANING = 0x4
    NEAR_END = 0x8

class PosPrinterColorCapabilities(enum.IntFlag):
    NONE = 0
    PRIMARY = 0x1
    CUSTOM1 = 0x2
    CUSTOM2 = 0x4
    CUSTOM3 = 0x8
    CUSTOM4 = 0x10
    CUSTOM5 = 0x20
    CUSTOM6 = 0x40
    CYAN = 0x80
    MAGENTA = 0x100
    YELLOW = 0x200
    FULL = 0x400

class PosPrinterColorCartridge(enum.IntEnum):
    UNKNOWN = 0
    PRIMARY = 1
    CUSTOM1 = 2
    CUSTOM2 = 3
    CUSTOM3 = 4
    CUSTOM4 = 5
    CUSTOM5 = 6
    CUSTOM6 = 7
    CYAN = 8
    MAGENTA = 9
    YELLOW = 10

class PosPrinterLineDirection(enum.IntEnum):
    HORIZONTAL = 0
    VERTICAL = 1

class PosPrinterLineStyle(enum.IntEnum):
    SINGLE_SOLID = 0
    DOUBLE_SOLID = 1
    BROKEN = 2
    CHAIN = 3

class PosPrinterMapMode(enum.IntEnum):
    DOTS = 0
    TWIPS = 1
    ENGLISH = 2
    METRIC = 3

class PosPrinterMarkFeedCapabilities(enum.IntFlag):
    NONE = 0
    TO_TAKE_UP = 0x1
    TO_CUTTER = 0x2
    TO_CURRENT_TOP_OF_FORM = 0x4
    TO_NEXT_TOP_OF_FORM = 0x8

class PosPrinterMarkFeedKind(enum.IntEnum):
    TO_TAKE_UP = 0
    TO_CUTTER = 1
    TO_CURRENT_TOP_OF_FORM = 2
    TO_NEXT_TOP_OF_FORM = 3

class PosPrinterPrintSide(enum.IntEnum):
    UNKNOWN = 0
    SIDE1 = 1
    SIDE2 = 2

class PosPrinterRotation(enum.IntEnum):
    NORMAL = 0
    RIGHT90 = 1
    LEFT90 = 2
    ROTATE180 = 3

class PosPrinterRuledLineCapabilities(enum.IntFlag):
    NONE = 0
    HORIZONTAL = 0x1
    VERTICAL = 0x2

class PosPrinterStatusKind(enum.IntEnum):
    ONLINE = 0
    OFF = 1
    OFFLINE = 2
    OFF_OR_OFFLINE = 3
    EXTENDED = 4

class UnifiedPosErrorReason(enum.IntEnum):
    UNKNOWN_ERROR_REASON = 0
    NO_SERVICE = 1
    DISABLED = 2
    ILLEGAL = 3
    NO_HARDWARE = 4
    CLOSED = 5
    OFFLINE = 6
    FAILURE = 7
    TIMEOUT = 8
    BUSY = 9
    EXTENDED = 10

class UnifiedPosErrorSeverity(enum.IntEnum):
    UNKNOWN_ERROR_SEVERITY = 0
    WARNING = 1
    RECOVERABLE = 2
    UNRECOVERABLE = 3
    ASSISTANCE_REQUIRED = 4
    FATAL = 5

class UnifiedPosHealthCheckLevel(enum.IntEnum):
    UNKNOWN_HEALTH_CHECK_LEVEL = 0
    P_O_S_INTERNAL = 1
    EXTERNAL = 2
    INTERACTIVE = 3

class UnifiedPosPowerReportingType(enum.IntEnum):
    UNKNOWN_POWER_REPORTING_TYPE = 0
    STANDARD = 1
    ADVANCED = 2

SizeUInt32 = _ns_module.SizeUInt32
BarcodeScanner = _ns_module.BarcodeScanner
BarcodeScannerCapabilities = _ns_module.BarcodeScannerCapabilities
BarcodeScannerDataReceivedEventArgs = _ns_module.BarcodeScannerDataReceivedEventArgs
BarcodeScannerErrorOccurredEventArgs = _ns_module.BarcodeScannerErrorOccurredEventArgs
BarcodeScannerImagePreviewReceivedEventArgs = _ns_module.BarcodeScannerImagePreviewReceivedEventArgs
BarcodeScannerReport = _ns_module.BarcodeScannerReport
BarcodeScannerStatusUpdatedEventArgs = _ns_module.BarcodeScannerStatusUpdatedEventArgs
BarcodeSymbologies = _ns_module.BarcodeSymbologies
BarcodeSymbologyAttributes = _ns_module.BarcodeSymbologyAttributes
CashDrawer = _ns_module.CashDrawer
CashDrawerCapabilities = _ns_module.CashDrawerCapabilities
CashDrawerCloseAlarm = _ns_module.CashDrawerCloseAlarm
CashDrawerClosedEventArgs = _ns_module.CashDrawerClosedEventArgs
CashDrawerEventSource = _ns_module.CashDrawerEventSource
CashDrawerOpenedEventArgs = _ns_module.CashDrawerOpenedEventArgs
CashDrawerStatus = _ns_module.CashDrawerStatus
CashDrawerStatusUpdatedEventArgs = _ns_module.CashDrawerStatusUpdatedEventArgs
ClaimedBarcodeScanner = _ns_module.ClaimedBarcodeScanner
ClaimedBarcodeScannerClosedEventArgs = _ns_module.ClaimedBarcodeScannerClosedEventArgs
ClaimedCashDrawer = _ns_module.ClaimedCashDrawer
ClaimedCashDrawerClosedEventArgs = _ns_module.ClaimedCashDrawerClosedEventArgs
ClaimedJournalPrinter = _ns_module.ClaimedJournalPrinter
ClaimedLineDisplay = _ns_module.ClaimedLineDisplay
ClaimedLineDisplayClosedEventArgs = _ns_module.ClaimedLineDisplayClosedEventArgs
ClaimedMagneticStripeReader = _ns_module.ClaimedMagneticStripeReader
ClaimedMagneticStripeReaderClosedEventArgs = _ns_module.ClaimedMagneticStripeReaderClosedEventArgs
ClaimedPosPrinter = _ns_module.ClaimedPosPrinter
ClaimedPosPrinterClosedEventArgs = _ns_module.ClaimedPosPrinterClosedEventArgs
ClaimedReceiptPrinter = _ns_module.ClaimedReceiptPrinter
ClaimedSlipPrinter = _ns_module.ClaimedSlipPrinter
JournalPrintJob = _ns_module.JournalPrintJob
JournalPrinterCapabilities = _ns_module.JournalPrinterCapabilities
LineDisplay = _ns_module.LineDisplay
LineDisplayAttributes = _ns_module.LineDisplayAttributes
LineDisplayCapabilities = _ns_module.LineDisplayCapabilities
LineDisplayCursor = _ns_module.LineDisplayCursor
LineDisplayCursorAttributes = _ns_module.LineDisplayCursorAttributes
LineDisplayCustomGlyphs = _ns_module.LineDisplayCustomGlyphs
LineDisplayMarquee = _ns_module.LineDisplayMarquee
LineDisplayStatisticsCategorySelector = _ns_module.LineDisplayStatisticsCategorySelector
LineDisplayStatusUpdatedEventArgs = _ns_module.LineDisplayStatusUpdatedEventArgs
LineDisplayStoredBitmap = _ns_module.LineDisplayStoredBitmap
LineDisplayWindow = _ns_module.LineDisplayWindow
MagneticStripeReader = _ns_module.MagneticStripeReader
MagneticStripeReaderAamvaCardDataReceivedEventArgs = _ns_module.MagneticStripeReaderAamvaCardDataReceivedEventArgs
MagneticStripeReaderBankCardDataReceivedEventArgs = _ns_module.MagneticStripeReaderBankCardDataReceivedEventArgs
MagneticStripeReaderCapabilities = _ns_module.MagneticStripeReaderCapabilities
MagneticStripeReaderCardTypes = _ns_module.MagneticStripeReaderCardTypes
MagneticStripeReaderEncryptionAlgorithms = _ns_module.MagneticStripeReaderEncryptionAlgorithms
MagneticStripeReaderErrorOccurredEventArgs = _ns_module.MagneticStripeReaderErrorOccurredEventArgs
MagneticStripeReaderReport = _ns_module.MagneticStripeReaderReport
MagneticStripeReaderStatusUpdatedEventArgs = _ns_module.MagneticStripeReaderStatusUpdatedEventArgs
MagneticStripeReaderTrackData = _ns_module.MagneticStripeReaderTrackData
MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs = _ns_module.MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs
PosPrinter = _ns_module.PosPrinter
PosPrinterCapabilities = _ns_module.PosPrinterCapabilities
PosPrinterCharacterSetIds = _ns_module.PosPrinterCharacterSetIds
PosPrinterFontProperty = _ns_module.PosPrinterFontProperty
PosPrinterPrintOptions = _ns_module.PosPrinterPrintOptions
PosPrinterReleaseDeviceRequestedEventArgs = _ns_module.PosPrinterReleaseDeviceRequestedEventArgs
PosPrinterStatus = _ns_module.PosPrinterStatus
PosPrinterStatusUpdatedEventArgs = _ns_module.PosPrinterStatusUpdatedEventArgs
ReceiptPrintJob = _ns_module.ReceiptPrintJob
ReceiptPrinterCapabilities = _ns_module.ReceiptPrinterCapabilities
SlipPrintJob = _ns_module.SlipPrintJob
SlipPrinterCapabilities = _ns_module.SlipPrinterCapabilities
UnifiedPosErrorData = _ns_module.UnifiedPosErrorData
ICashDrawerEventSourceEventArgs = _ns_module.ICashDrawerEventSourceEventArgs
ICommonClaimedPosPrinterStation = _ns_module.ICommonClaimedPosPrinterStation
ICommonPosPrintStationCapabilities = _ns_module.ICommonPosPrintStationCapabilities
ICommonReceiptSlipCapabilities = _ns_module.ICommonReceiptSlipCapabilities
IPosPrinterJob = _ns_module.IPosPrinterJob
IReceiptOrSlipJob = _ns_module.IReceiptOrSlipJob
