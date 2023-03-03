#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subwindows.h"
#include "subwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    myinit();
    connections();
    //标签 TabbedView 窗口 SubWindowView
    mainMdiArea->setViewMode(QMdiArea::SubWindowView);

    AddSubWindows();
  //  AddDevice();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connections()
{
    connect(ui->actionNew,&QAction::triggered,this,&MainWindow::AddSubWindows);
    connect(ui->actionRes,&QAction::triggered,drawT,&DrawThread::drawres);
    connect(drawT,DrawThread::sendiamge,this,&MainWindow::AddDevice);
    connect(this,&MainWindow::destroyed,this,&MainWindow::delAllThread);
}

void MainWindow::myinit()
{
    //初始化
    ui->setupUi(this);
    mainMdiArea = ui->mian_mdiArea;
    setCentralWidget(mainMdiArea);
    setElementPath("../NTPSC//lib//res.ntp");


    //绘画线程初始化
    drawT = new DrawThread();
    drawThead = new QThread(this);
    drawT->moveToThread(drawThead);
    drawThead->start();
}

void MainWindow::delAllThread()
{
    drawThead->quit();
    drawThead->wait();
    delete drawT;
}


QString MainWindow::getElementPath() const
{
    return ElementPath;
}

void MainWindow::setElementPath(const QString &value)
{
    ElementPath = value;
}
void MainWindow::AddSubWindows(){
    // SubWindows *w = new SubWindows();
    SubWindow *w = new SubWindow();
    w->setParent(this);
    w->move(50,50);
    int ww = mainMdiArea->size().width();
    int hh = mainMdiArea->size().height();
    w->resize(ww-200,hh-200);
    mainMdiArea->addSubWindow(w);
    w->show();
}

void MainWindow::AddDevice(QImage image)
{
    //int nType = device.getnType();
    int i = MainWindow::ui->mian_mdiArea->subWindowList().count();
    qDebug()<<i;
    const QMdiSubWindow *sub = ui->mian_mdiArea->activeSubWindow();
    SubWindow *s = (SubWindow*) sub;
    s->AddDevice(image);


//    switch (nType) {
//    case NTYPE_RES:
//        Res *res = new Res();

//        break;
//    default:
//        break;
//    }
}

