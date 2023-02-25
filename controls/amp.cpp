#include "amp.h"
#include "QtDebug"
#include "QFileDialog"
amp::amp()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "D:\\qt\\NTPSC/lib/amp.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(100,100);

}

void amp::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawEllipse(QPoint(50,50),10,10);
    p.drawText(QRect(10,60,100,100),"电流表");


}
