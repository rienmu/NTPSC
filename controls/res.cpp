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
    this->setFixedSize(AeroH,AeroW);



}

void Res::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    if(!LineList.isEmpty()){
        p.drawLine(LineList.at(0));
        p.drawLine(LineList.at(1));
    }
    if(!RectList.isEmpty()){
        p.drawRect(RectList.at(0));
    }
    if(!PinList.isEmpty()){
        Pin pin;
        int count = PinList.count();
        for(int i = 0;i<count;i++)
        {
            pin = PinList.at(i);
            p.drawRect(pin);
        }
    }



}
