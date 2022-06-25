import asyncio
import threading
from tkinter import Button, Tk

from winsdk._winrt import initialize_with_window
from winsdk.windows.storage.pickers import FolderPicker


class Pickers:
    def __init__(self) -> None:
        self.last_folder_picked = None

    async def store_folder(self, hwnd: int):
        folder_picker = FolderPicker()
        initialize_with_window(folder_picker, hwnd)
        folder_picker.file_type_filter.append("*")
        folder = await folder_picker.pick_single_folder_async()
        print(f"User picked the following folder: {folder.path}")
        self.last_folder_picked = folder


class App(Tk):
    def __init__(self, pickers: Pickers, async_loop: asyncio.ProactorEventLoop) -> None:
        super(App, self).__init__()
        self.minsize(100, 40)
        hwnd = self.winfo_id()
        folder_picker_button = Button(
            self,
            text="Folder Picker",
            command=lambda: asyncio.run_coroutine_threadsafe(
                loop=async_loop, coro=pickers.store_folder(hwnd)
            ),
        )
        folder_picker_button.pack()

if __name__ == "__main__":
    async_loop = asyncio.get_event_loop()
    threading.Thread(daemon=True, target=async_loop.run_forever).start()
    pickers = Pickers()
    app = App(pickers=pickers, async_loop=async_loop)
    app.mainloop()
    print(f"Last folder picked: {pickers.last_folder_picked}")
