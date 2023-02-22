#include "res.h"
#include "QtDebug"
#include "QFileDialog"
Res::Res()
{
   //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
   QString path = "../NTPSC//lib/res.ntp";
     //QFile file(path);
   // QString path = "c:\\s.txt";
    ReadAndWriteFile(path);//读取文件
    qDebug()<<LineList;
    this->setFixedSize(60,60);



}

void Res::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawRect(RectList.at(0));

}
