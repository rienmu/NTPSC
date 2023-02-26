#include "npntriode.h"

Npntriode::Npntriode()
{
    QString path = "..\\NTPSC\\lib/npn.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(60,60);
}
void Npntriode::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawLine(LineList.at(3));
    p.drawLine(LineList.at(4));
    p.drawLine(LineList.at(5));
    p.drawLine(LineList.at(6));
    p.drawLine(LineList.at(7));
}
