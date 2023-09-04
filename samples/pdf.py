import asyncio
from pathlib import Path
from typing import Optional

from winsdk.windows.data.pdf import PdfDocument
from winsdk.windows.storage import StorageFile


async def load_pdf(file: Path, password: Optional[str] = None) -> PdfDocument:
    pdf_file = await StorageFile.get_file_from_path_async(str(file))
    if password is not None:
        document = await PdfDocument.load_from_file_async(pdf_file, password)
    else:
        document = await PdfDocument.load_from_file_async(pdf_file)

    return document


if __name__ == "__main__":
    file = Path(input("Provide the pdf file path: ").strip())
    if not file.exists():
        raise FileNotFoundError(f"{str(file)} does not exist!")
    document = asyncio.run(load_pdf(file))
    print(f"{file} contains {document.page_count} pages.")
