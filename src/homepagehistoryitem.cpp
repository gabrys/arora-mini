// quake-copyright

#include "homepagehistoryitem.h"

HomePageHistoryItem::HomePageHistoryItem(int historyGoArgument, const QWebHistoryItem &historyItem)
{
    url = historyItem.url().toString();
    title = historyItem.title();
    stared = false;
    action = QString(QLatin1String("history.go(%1)")).arg(historyGoArgument);
}

HomePageHistoryItem::~HomePageHistoryItem() {}

