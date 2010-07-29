// quake-copyright

#include "homepagebookmarkitem.h"

HomePageBookmarkItem::HomePageBookmarkItem(BookmarkNode *bookmarkNode)
{
    url = bookmarkNode->url;
    title = bookmarkNode->title;
    stared = true;
    action = QString(QLatin1String("location.href='%1';")).arg(bookmarkNode->url);
}

HomePageBookmarkItem::~HomePageBookmarkItem() {}

