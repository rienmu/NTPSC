#ifndef SUBWINDOWS_H
#define SUBWINDOWS_H

#include <QWidget>
#include "./controls/resistor.h"
#include "./controls/resister_pianter.h"
#include "./controls/pin.h"
#include "./controls/res.h"
#include "./controls/dcpower.h"
#include "./controls/capacitance.h"
#include "./controls/voltmeter.h"
namespace Ui {
class SubWindows;
}

class SubWindows : public QWidget
{
    Q_OBJECT

public:
    explicit SubWindows(QWidget *parent = 0);
    ~SubWindows();

private:
    Ui::SubWindows *ui;
};

#endif // SUBWINDOWS_H
