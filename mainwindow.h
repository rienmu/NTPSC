﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMdiArea>
#include <QMainWindow>
#include <QMessageBox>
#include <QThread>
#include "controls/drawthread.h"
#include "controls/guiitem.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void AddSubWindows();
   // void AddDevice(UserDef* image);
    void AddDevice(GuiItem* item);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMdiArea *mainMdiArea;
    void doSomething(){

    }

    void getMessageBox(QString msg);
    void connections();
    void myinit();
    void delAllThread();
    QString ElementPath;
    DrawThread *drawT;
    QThread *drawThead;
    // QObject interface
public:

    QString getElementPath() const;
    void setElementPath(const QString &value);
public slots:
    void getAddResSignal();
<<<<<<< HEAD
    void getAddAmmSignal();
    void getAddPowerSignal();
    void getAddCapSignal();
    void getAddInductanceSignal();
    void getAddLandingSignal();
=======
    void getADdDiodSignal();
>>>>>>> fc61124e94cad2b63e5d574d567c408eddcb3e32
signals:
    void sendAddDeviceSignal(GuiItem *item);
};

#endif // MAINWINDOW_H
