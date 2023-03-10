#ifndef GUIBACKGROUND_H
#define GUIBACKGROUND_H
#include "controls/userdef.h"
#include <QWidget>
class GUIBackGround : public QWidget
{
public:
    GUIBackGround();

    // QWidget interface
    QImage getImage() const;

    void setImage(QImage value);

protected:
    QImage image;




    void paintEvent(QPaintEvent *event);
};

#endif // GUIBACKGROUND_H
