// quake-copyright

#ifndef SQUAREHBOXLAYOUT_H
#define SQUAREHBOXLAYOUT_H

#include <QHBoxLayout>

class SquareHBoxLayout : public QHBoxLayout
{
    Q_OBJECT

public:
    SquareHBoxLayout(QWidget* parent = 0);
    virtual QSize sizeHint() const;
    virtual Qt::Orientations expandingDirections() const;
};

#endif // SQUAREHBOXLAYOUT_H
