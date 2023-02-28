#include "subwindows.h"
#include "ui_subwindows.h"

SubWindows::SubWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubWindows)
{
    ui->setupUi(this);
    Resistor *r = new Resistor();
    r->setParent(this);
    r->Draw();
    r->setGeometry(11,11,72,16);
    r->move(0,100);
    Resister_pianter *rp = new Resister_pianter();
    rp->setParent(this);

    rp->move(0,200);
    rp->move(100,200);

//    pin *pi = new pin();
//    pi->setParent(this);
//    pi->move(0,300);


}

SubWindows::~SubWindows()
{
    delete ui;
}
