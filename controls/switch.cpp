#include "switch.h"
#include "QPainter"

Switch::Switch()
{
    QString path = "D:\\qt\\NTPSC\\lib/swi.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(60,60);
}
void Switch::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawEllipse(CircleList.at(0));

}
