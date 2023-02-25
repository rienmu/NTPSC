#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subwindows.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //多文档窗口初始化
    QMdiArea *mainMdiArea = ui->mian_mdiArea;
    //标签 TabbedView 窗口 SubWindowView
    mainMdiArea->setViewMode(QMdiArea::SubWindowView);
    connect(ui->actionNew,&QAction::triggered,this,&MainWindow::AddSubWindows);
    connect(ui->actionnew,&QAction::triggered,this,&MainWindow::AddSubWindows);
    AddSubWindows();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::AddSubWindows(){
    SubWindows *w = new SubWindows();
    w->setFixedHeight(400);
    w->setFixedWidth(400);
    MainWindow::ui->mian_mdiArea->addSubWindow(w);
    w->show();
}

void MainWindow::AddDevice(GuiBase device)
{
//    int nType = device.getnType();
//    switch (nType) {
//    case NTYPE_RES:

//        break;
//    default:
//        break;
//    }
}
