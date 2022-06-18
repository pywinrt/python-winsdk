import asyncio

from winsdk.windows.foundation import Uri
from winsdk.windows.web.syndication import SyndicationClient, SyndicationFeed


async def get_feed(uri: Uri) -> SyndicationFeed:
    client = SyndicationClient()
    feed = await client.retrieve_feed_async(uri)
    return feed


if __name__ == "__main__":
    uri = Uri("https://blogs.windows.com/feed")
    result = asyncio.run(get_feed(uri))
    for item in result.items:
        print(item.title.text)
