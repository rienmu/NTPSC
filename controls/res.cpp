#include "res.h"
#include "QtDebug"
#include "QFileDialog"
Res::Res()
{
   //QString path = QFileDialog::getOpenFileName(this, "open", "../QtNTPSC/", "txt(*.txt)");
   QString path = "../QtNTPSC//lib/res.ntp";
     //QFile file(path);
   // QString path = "c:\\s.txt";
    ReadAndWriteFile(path);//读取文件
    //qDebug()<<CellStr;
    this->setFixedSize(60,60);



}

void Res::paintEvent(QPaintEvent *e){
    QString str ="hj";
    QPainter p(this);
    QRect rec(0,0,50,50);
}
