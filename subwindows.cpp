#include "subwindows.h"
#include "ui_subwindows.h"

SubWindows::SubWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubWindows)
{
    ui->setupUi(this);

    UserDef *res = new UserDef("../NTPSC//lib//vol.ntp");

<<<<<<< HEAD
//    pin *pi = new pin();
//    pi->setParent(this);
//    pi->move(0,300);


=======
    res->setParent(this);
    res->move(100,300);

    UserDef *dcp = new UserDef("../NTPSC//lib//power.ntp");
        dcp->setParent(this);
        dcp->move(200,300);


>>>>>>> 8a980470ba9c7b03ee49d61d8ca1ea4898523cf7
}

SubWindows::~SubWindows()
{
    delete ui;
}
