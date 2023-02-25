#include "pnp.h"
#include "QtDebug"
#include "QFileDialog"
pnp::pnp()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "D:\\qt\\NTPSC/lib/pnp.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(200,100);
}

void pnp::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    p.drawLine(LineList.at(0));
    p.drawLine(LineList.at(1));
    p.drawLine(LineList.at(2));
    p.drawLine(LineList.at(3));
    p.drawText(QRect(85,35,150,50),"接地");
}
