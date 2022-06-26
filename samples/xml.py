from winsdk.windows.data.xml.dom import XmlDocument

if __name__ == "__main__":
    xml = """<html>Hello world</html>"""

    doc = XmlDocument()
    doc.load_xml(xml)
    root = doc.document_element
    assert root.node_name == "html"
    print(root.inner_text)
