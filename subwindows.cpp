#include "subwindows.h"
#include "ui_subwindows.h"

SubWindows::SubWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubWindows)
{
    ui->setupUi(this);

    UserDef *res = new UserDef("../NTPSC//lib//vol.ntp");

    res->setParent(this);
    res->move(100,300);

    UserDef *dcp = new UserDef("../NTPSC//lib//power.ntp");
        dcp->setParent(this);
        dcp->move(200,300);


}

SubWindows::~SubWindows()
{
    delete ui;
}
