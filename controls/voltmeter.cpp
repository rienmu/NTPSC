﻿#include "voltmeter.h"

Voltmeter::Voltmeter()
{
    //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
    QString path = "../QtNTPSC//lib/vol.ntp";
      //QFile file(path);
    // QString path = "c:\\s.txt";
     ReadAndWriteFile(path);//读取文件
     qDebug()<<LineList;
     this->setFixedSize(60,60);

}

void Voltmeter::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    if(!CircleList.isEmpty())p.drawEllipse(CircleList.at(0));

    QFont font = p.font();
    font.setPixelSize(18);
    p.setFont(font);
    p.drawText(25,35,"A");

}