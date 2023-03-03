#include "drawthread.h"

DrawThread::DrawThread(QObject *parent) : QObject(parent)
{

}

void DrawThread::drawres()
{

    path = "../NTPSC//lib//res.ntp";
    /*设计上的缺陷，之前没想到要用QImage类做画板
      而画板大小又存在文件里面(或许可以固定每个画板大小？)
      所以在创建image时需要先读取画板大小*/



 qDebug()<<"drawing thread started1";
    UserDef read(path);
 qDebug()<<"drawing thread started";
    QImage image(read.AeroW,read.AeroH,QImage::Format_ARGB32);

    QPainter p(&image);
    if(!read.LineList.isEmpty()){
        for(int i =0; i<read.LineList.count();i++){
            p.drawLine(read.LineList.at(i));
        }

    }
    if(!read.RectList.isEmpty()){
        for(int i =0 ;i<read.RectList.count();i++){
            p.drawRect(read.RectList.at(i));
        }

    }
    if(!read.PinList.isEmpty()){
        Pin pin;
        int count = read.PinList.count();
        for(int i = 0;i<count;i++)
        {
            pin = read.PinList.at(i);
            p.drawRect(pin);
        }
    }
    if(!read.CircleList.isEmpty()){
        RCircle a;
        int count = read.CircleList.count();
        for(int i = 0;i<count;i++)
        {
            a = read.CircleList.at(i);
            p.drawEllipse(a);
        }
    }
    if(!read.TextList.isEmpty()){
        for(int i = 0;i<read.TextList.count();i++)
        {

            //Text text = TextList.
        }
    }
    emit sendiamge(image);
}






