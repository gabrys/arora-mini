// quake-copyright

#ifndef HOMEPAGEBOOKMARKITEM_H
#define HOMEPAGEBOOKMARKITEM_H

#include "homepageitem.h"
#include "bookmarknode.h"
#include "tabwidget.h"

class HomePageBookmarkItem: public HomePageItem
{
public:
    HomePageBookmarkItem(BookmarkNode *bookmarkNode);
    ~HomePageBookmarkItem();
};

#endif // HOMEPAGEBOOKMARKITEM_H

