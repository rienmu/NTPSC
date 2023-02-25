#include "voltmeter.h"

Voltmeter::Voltmeter()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");

    QString path = "../NTPSC//lib/vol.ntp";

      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
    this->setFixedSize(AeroH,AeroW);

}

void Voltmeter::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    if(!CircleList.isEmpty())p.drawEllipse(CircleList.at(0));

    QFont font = p.font();
    font.setPixelSize(18);
    p.setFont(font);
    p.drawText(25,30,"A");

}
