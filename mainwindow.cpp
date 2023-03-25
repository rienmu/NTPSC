#include "mainwindow.h"
#include "ui_mainwindow.h"
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

void MainWindow::getMessageBox(QString msg)
{
    qDebug()<<"get messagebox";
    QMessageBox megToclient;
    megToclient.setWindowTitle("警告");
    megToclient.setText(msg);
    megToclient.exec();
}

void MainWindow::connections()
{
    connect(ui->actionNew,&QAction::triggered,this,&MainWindow::AddSubWindows);
    //电阻按钮连接
     /*第一个参数是发送者
     * 第二个参数是发送者发送的信号函数
     * 第三个参数是接收者
     * 第四个参数是接受者的嘈函数
     */
    connect(ui->actionRes,&QAction::triggered,this,&MainWindow::getAddResSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);
    //connect(ui->actionRes,&QAction::triggered,drawT,&DrawThread::drawres);
    //connect(ui->actionRes,&QAction::triggered,drawT,&DrawThread::drawres);
<<<<<<< HEAD
    connect(ui->actionAmm,&QAction::triggered,this,&MainWindow::getAddAmmSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);

    connect(ui->actionPower,&QAction::triggered,this,&MainWindow::getAddPowerSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);

    connect(ui->actionCap,&QAction::triggered,this,&MainWindow::getAddCapSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);


    connect(ui->actionLanding,&QAction::triggered,this,&MainWindow::getAddLandingSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);

    connect(ui->actionInductance,&QAction::triggered,this,&MainWindow::getAddInductanceSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);

=======
    //二极管
    connect(ui->actionDiod,&QAction::triggered,this,&MainWindow::getADdDiodSignal);
    connect(this,&MainWindow::sendAddDeviceSignal,this,&MainWindow::AddDevice);
>>>>>>> fc61124e94cad2b63e5d574d567c408eddcb3e32
    //绘画线程连接
   // connect(drawT,DrawThread::sendiamge,this,&MainWindow::AddDevice);
   // connect(this,&MainWindow::destroyed,this,&MainWindow::delAllThread);
   // connect(drawT,DrawThread::sendMessageBOX,this,&MainWindow::getMessageBox);


    //提示框



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

void MainWindow::getAddResSignal()
{
    GuiItem *item = new GuiItem();
    item->setPath("../NTPSC//lib//res.ntp");
    item->ReadAndWriteFile(item->getPath());
    emit sendAddDeviceSignal(item);
}

void MainWindow::getADdDiodSignal()
{
    GuiItem *item = new GuiItem();
    item->setPath("../NTPSC//lib//diod.ntp");
    item->ReadAndWriteFile(item->getPath());
    emit sendAddDeviceSignal(item);
}

void MainWindow::getAddAmmSignal()
{
    GuiItem *amm = new GuiItem();
    amm->setPath("../NTPSC//lib//amm.ntp");
    amm->ReadAndWriteFile(amm->getPath());
    emit sendAddDeviceSignal(amm);
    QPainter painter(this);
    painter.drawText(20,5,"A");//
}

void MainWindow::getAddPowerSignal()
{
    GuiItem *amm = new GuiItem();
    amm->setPath("../NTPSC//lib//power.ntp");
    amm->ReadAndWriteFile(amm->getPath());
    emit sendAddDeviceSignal(amm);
}

void MainWindow::getAddInductanceSignal()
{
    GuiItem *amm = new GuiItem();
    amm->setPath("../NTPSC//lib//inductance.ntp");
    amm->ReadAndWriteFile(amm->getPath());
    emit sendAddDeviceSignal(amm);
}

void MainWindow::getAddCapSignal()
{
    GuiItem *amm = new GuiItem();
    amm->setPath("../NTPSC//lib//cap.ntp");
    amm->ReadAndWriteFile(amm->getPath());
    emit sendAddDeviceSignal(amm);
}

void MainWindow::getAddLandingSignal()
{
    GuiItem *amm = new GuiItem();
    amm->setPath("../NTPSC//lib//landing.ntp");
    amm->ReadAndWriteFile(amm->getPath());
    emit sendAddDeviceSignal(amm);
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

//void MainWindow::AddDevice(UserDef* image)
//{
//    //int nType = device.getnType();
//    int i = MainWindow::ui->mian_mdiArea->subWindowList().count();
//    qDebug()<<i;
//    const QMdiSubWindow *sub = ui->mian_mdiArea->activeSubWindow();
//    SubWindow *s = (SubWindow*) sub;
//    s->AddDevice(image);


//    switch (nType) {
//    case NTYPE_RES:
//        Res *res = new Res();

//        break;
//    default:
//        break;
//    //    }
//}

void MainWindow::AddDevice(GuiItem *item)
{
    //int nType = device.getnType();
    int i = MainWindow::ui->mian_mdiArea->subWindowList().count();
    qDebug()<<i;
    const QMdiSubWindow *sub = ui->mian_mdiArea->activeSubWindow();
    SubWindow *s = (SubWindow*) sub;
    s->AddDevice(item);
}

