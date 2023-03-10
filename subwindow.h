#ifndef SUBWINDOW_H
#define SUBWINDOW_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <controls/guiitem.h>
#include <QGraphicsItem>
#include <QList>
#include <guibackground.h>
#include <QMdiSubWindow>
#include <controls/userdef.h>
#include "datastruct.h"
typedef struct PerElement
{
    PerElement(int x, int y, UserDef *image)
    {
        this->x= x;
        this->y = y;
        this->image = image;
    }
    int x,y;
    UserDef *image;
}PerElement;
class SubWindow : public QMdiSubWindow
{

public:
    SubWindow();
    void AddDevice(UserDef* image);

private:
    QGraphicsView backView;
    QGraphicsScene backScene;

    GUIBackGround *guiback;
    QList<PerElement> ElementList;

    // QObject interface
public:
    bool eventFilter(QObject *watched, QEvent *event);

    // QWidget interface
protected:
    void resizeEvent(QResizeEvent *event);
};

#endif // SUBWINDOW_H
