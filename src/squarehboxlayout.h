// quake-copyright

#ifndef SQUAREHBOXLAYOUT_H
#define SQUAREHBOXLAYOUT_H

#include <QHBoxLayout>

class SquareHBoxLayout : public QHBoxLayout
{
    Q_OBJECT

public:
    SquareHBoxLayout(QWidget* parent = 0);
    virtual bool hasHeightForWidth() const;
    virtual int heightForWidth(int w) const;
};

#endif // SQUAREHBOXLAYOUT_H
