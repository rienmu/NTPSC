#include "guibackground.h"

GUIBackGround::GUIBackGround()
{
//    QString path = "../NTPSC//lib//res.ntp";
//    image = new UserDef(70,70,QImage::Format_ARGB32);
//    image->ReadAndWriteFile(path);

//    QPainter p(image);
//    if(!image->LineList.isEmpty()){
//        for(int i =0; i<image->LineList.count();i++){
//            p.drawLine(image->LineList.at(i));
//        }

//    }
//    if(!image->RectList.isEmpty()){
//        for(int i =0 ;i<image->RectList.count();i++){
//            p.drawRect(image->RectList.at(i));
//        }

//    }
//    if(!image->PinList.isEmpty()){
//        Pin pin;
//        int count = image->PinList.count();
//        for(int i = 0;i<count;i++)
//        {
//            pin = image->PinList.at(i);
//            p.drawRect(pin);
//        }
//    }
//    if(!image->CircleList.isEmpty()){
//        RCircle a;
//        int count = image->CircleList.count();
//        for(int i = 0;i<count;i++)
//        {
//            a = image->CircleList.at(i);
//            p.drawEllipse(a);
//        }
//    }
//    if(!image->TextList.isEmpty()){
//        for(int i = 0;i<image->TextList.count();i++)
//        {

//            //Text text = TextList.
//        }
//    }
//    qDebug()<<image->LineList.at(0);

}

QImage GUIBackGround::getImage() const
{
    return image;
}

void GUIBackGround::setImage(QImage value)
{
    image = value;
}

void GUIBackGround::paintEvent(QPaintEvent *event)
{
    qDebug()<<"i am drawing";
    QPainter p(this);
    QImage i = image;
    p.drawEllipse(100,200,30,30);
    p.drawImage(50,50,i);

}
