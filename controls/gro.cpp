#include "gro.h"
#include "QtDebug"
#include "QFileDialog"
gro::gro()
{

    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "..\\NTPSC/lib/gro.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(100,200);
}
void gro::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawLine(LineList.at(3));
    p.drawLine(LineList.at(4));
    p.drawLine(LineList.at(5));
    p.drawText(QRect(20,160,150,50),"pnp三极管");

}
