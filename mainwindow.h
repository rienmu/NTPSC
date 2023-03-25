#ifndef MAINWINDOW_H
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

    void getAddVolSignal();
    void getAddliSignal();
    void getAddDiodSignal();
    void getAddGroSignal();
     void getAddAmpSignal();
    void getADdDiodSignal();
signals:
    void sendAddDeviceSignal(GuiItem *item);
};

#endif // MAINWINDOW_H
