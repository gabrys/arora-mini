// quake-copyright

#ifndef HOMEPAGEHISTORYITEM_H
#define HOMEPAGEHISTORYITEM_H

#include <QWebPage>
#include <QWebHistoryItem>
#include "homepageitem.h"

class HomePageHistoryItem: public HomePageItem
{
public:
    HomePageHistoryItem(int historyGoArgument, const QWebHistoryItem &historyItem);
    ~HomePageHistoryItem();
};

#endif // HOMEPAGEHISTORYITEM_H

