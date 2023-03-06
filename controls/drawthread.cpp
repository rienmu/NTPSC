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
    QFile file;
    file.setFileName(path);
    //QRegExp REGLINE("(.*\\n)");

    qDebug()<<file.exists();
    bool isopened= file.open(QIODevice::ReadWrite | QIODevice::Text);
    if(!isopened){

        sendMessageBOX("器件文件打开失败，请确认器件文件是否存在");
    }
    else{
        UserDef *read = new UserDef(10,10,QImage::Format_ARGB32);
        read->ReadAndWriteFile(path);
        UserDef* image = new UserDef(read->AeroW,read->AeroH,QImage::Format_ARGB32);
        image->ReadAndWriteFile(path);//为这一步浪费了半小时👍👍👍👍👍
        QPainter p(image);
        if(!image->LineList.isEmpty()){
            for(int i =0; i<image->LineList.count();i++){
                p.drawLine(image->LineList.at(i));
            }

        }
        if(!image->RectList.isEmpty()){
            for(int i =0 ;i<image->RectList.count();i++){
                p.drawRect(image->RectList.at(i));
            }

        }
        if(!image->PinList.isEmpty()){
            Pin pin;
            int count = image->PinList.count();
            for(int i = 0;i<count;i++)
            {
                pin = image->PinList.at(i);
                p.drawRect(pin);
            }
        }
        if(!image->CircleList.isEmpty()){
            RCircle a;
            int count = image->CircleList.count();
            for(int i = 0;i<count;i++)
            {
                a = image->CircleList.at(i);
                p.drawEllipse(a);
            }
        }
        if(!image->TextList.isEmpty()){
            for(int i = 0;i<image->TextList.count();i++)
            {

                //Text text = TextList.
            }
        }
        file.close();
        qDebug()<<image->LineList;
        emit sendiamge(image);
    }
}






