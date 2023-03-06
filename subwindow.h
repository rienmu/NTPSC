#ifndef SUBWINDOW_H
#define SUBWINDOW_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>
#include <guibackground.h>
#include <QMdiSubWindow>

struct PerElment
{
    int x,y;
    UserDef* image;
};
class SubWindow : public QMdiSubWindow
{
public:
    SubWindow();
    void AddDevice(UserDef* image);

private:
    QGraphicsView backView;
    QGraphicsScene backScene;

    GUIBackGround *guiback;
    QList<PerElment> ElementList;

    // QObject interface
public:
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // SUBWINDOW_H
