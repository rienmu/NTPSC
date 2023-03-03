#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMdiArea>
#include <QMainWindow>
#include <QThread>
#include "./controls/guibase.h"
#include "controls/drawthread.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void AddSubWindows();
    void AddDevice(QImage image);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMdiArea *mainMdiArea;
    void doSomething(){

    }
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
};

#endif // MAINWINDOW_H
