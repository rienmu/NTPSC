#include "subwindows.h"
#include "ui_subwindows.h"

SubWindows::SubWindows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubWindows)
{
    ui->setupUi(this);
//    Resistor *r = new Resistor();
//    r->setParent(this);
//    r->Draw();
//    r->setGeometry(11,11,72,16);
//    r->move(0,100);
//    Resister_pianter *rp = new Resister_pianter();
//    rp->setParent(this);

//    rp->move(0,200);
//    rp->move(100,200);

//    //Pin *pi = new pin();
//    //pi->setParent(this);
//    //pi->move(0,300);

////    Res *res = new Res();
////    res->setParent(this);
////    res->move(100,300);

//    diod *dio = new diod();
//    dio->setParent(this);
//    dio->move(250,300);

//    pnp *pn = new pnp();
//    pn->setParent(this);
//    dio->move(200 ,100);

//    gro *gr = new gro();
//    gr->setParent(this);
//    dio->move(250 ,100);

//    DCPower *dcp = new DCPower();
//    dcp->setParent(this);
//    dcp->move(200,300);

//    Capacitance *cap = new Capacitance();
//    cap->setParent(this);
//    cap->move(300,300);

//    amp *am = new amp();
//    am->setParent(this);
//    am->move(250,300);

//    Voltmeter *vol = new Voltmeter();
//    vol->setParent(this);
//    vol->move(300,200);

    UserDef *res = new UserDef("../NTPSC//lib//vol.ntp");
    res->setParent(this);
    res->move(300,300);
}

SubWindows::~SubWindows()
{
    delete ui;
}
