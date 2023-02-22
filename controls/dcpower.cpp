#include "dcpower.h"

DCPower::DCPower()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "../NTPSC//lib/power.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(60,60);
}

void DCPower::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
}
