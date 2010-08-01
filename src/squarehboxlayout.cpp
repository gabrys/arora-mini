// quake-copyright

#include "squarehboxlayout.h"
#include <QPoint>

SquareHBoxLayout::SquareHBoxLayout(QWidget* parent)
    : QHBoxLayout(parent)
{
}

QSize SquareHBoxLayout::sizeHint() const
{
    return QSize(100, 100);
}

Qt::Orientations SquareHBoxLayout::expandingDirections() const
{
    return Qt::Horizontal;
}
