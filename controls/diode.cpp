#include "diode.h"

Diode::Diode()
{
    QString path = "..\\NTPSC\\lib/dio.ntp";
    ReadAndWriteFile(path);//读取文件
    qDebug()<<LineList;
    this->setFixedSize(60,60);
}
void Diode::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawLine(LineList.at(3));
    p.drawLine(LineList.at(4));
}
