// quake-copyright

#include "squarehboxlayout.h"

SquareHBoxLayout::SquareHBoxLayout(QWidget* parent)
    : QHBoxLayout(parent)
{
}

bool SquareHBoxLayout::hasHeightForWidth() const
{
    return true;
}

int SquareHBoxLayout::heightForWidth(int w) const
{
    return qMin(100, w / 4);
}

