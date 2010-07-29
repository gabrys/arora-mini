// quake-copyright

#ifndef HOMEPAGEITEM_H
#define HOMEPAGEITEM_H

#include <qobject.h>
#include <qurl.h>
#include <qstring.h>

class HomePageItem
{
public:
    QString url;
    QString title;
    bool stared;
    QString action;
};

#endif // HOMEPAGEITEM_H

