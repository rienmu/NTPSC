#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QList>
#include <guibackground.h>
#include <QMdiSubWindow>

struct PerElment
{
    int x,y;
    QImage image;
};
class SubWindow : public QMdiSubWindow
{
public:
    SubWindow();
    void AddDevice(QImage image);

private:
    GUIBackGround *guiback;
    QList<PerElment> ElementList;

    // QObject interface
public:
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // SUBWINDOW_H
