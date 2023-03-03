#ifndef SUBWINDOWS_H
#define SUBWINDOWS_H

#include <QWidget>
#include <QMdiSubWindow>
#include "./controls/pin.h"

#include "./controls/userdef.h"

//#include "./controls/ammeter.h"

#include "./controls/switch.h"

namespace Ui {
class SubWindows;
}

class SubWindows : public QWidget
{
    Q_OBJECT

public:
    explicit SubWindows(QWidget *parent = 0);
    void AddDevice();
    ~SubWindows();

private:
    Ui::SubWindows *ui;

};

#endif // SUBWINDOWS_H
