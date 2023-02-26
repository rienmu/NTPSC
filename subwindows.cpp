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

    Res *res = new Res();
    res->setParent(this);
    res->move(100,300);

    DCPower *dcp = new DCPower();
    dcp->setParent(this);
    dcp->move(200,300);

    Capacitance *cap = new Capacitance();
    cap->setParent(this);
    cap->move(300,300);

    Voltmeter *vol = new Voltmeter();
    vol->setParent(this);
    vol->move(300,200);

    Ammeter *amm = new Ammeter();
    amm->setParent(this);
    amm->move(200,200);

    Diode *dio = new Diode();
    dio->setParent(this);
    dio->move(250,200);

    Npntriode *npn = new Npntriode();
    npn->setParent(this);
    npn->move(250,100);

    Switch *swi = new Switch();
    swi->setParent(this);
    swi->move(100,100);
}

SubWindows::~SubWindows()
{
    delete ui;
}
