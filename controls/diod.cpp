#include "diod.h"
#include "QtDebug"
#include "QFileDialog"
diod::diod()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "..\\NTPSC/lib/diod.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(100,100);
}

void diod::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawLine(LineList.at(3));
    p.drawLine(LineList.at(4));
    p.drawText(QRect(0,35,150,50),"普通二极管");



}
