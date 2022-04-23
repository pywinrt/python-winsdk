# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.data.xml.dom
except Exception:
    pass

class XsltProcessor(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> XsltProcessor: ...
    def __init__(self, document: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]) -> None: ...
    def transform_to_document(self, input_node: typing.Optional[winsdk.windows.data.xml.dom.IXmlNode]) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...
    def transform_to_string(self, input_node: typing.Optional[winsdk.windows.data.xml.dom.IXmlNode]) -> str: ...

