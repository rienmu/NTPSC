#include "userdef.h"



UserDef::UserDef(QString path)
{
    // path = "../NTPSC//lib/res.ntp";
    ReadAndWriteFile(path);//读取文件
    qDebug()<<LineList;

}


void UserDef::paintEvent(QPaintEvent *e)
{

//    QPainter p(this);
//    if(!LineList.isEmpty()){
//        for(int i =0; i<LineList.count();i++){
//            p.drawLine(LineList.at(i));
//        }

//    }
//    if(!RectList.isEmpty()){
//        for(int i =0 ;i<RectList.count();i++){
//            p.drawRect(RectList.at(i));
//        }

//    }
//    if(!PinList.isEmpty()){
//        Pin pin;
//        int count = PinList.count();
//        for(int i = 0;i<count;i++)
//        {
//            pin = PinList.at(i);
//            p.drawRect(pin);
//        }
//    }
//    if(!CircleList.isEmpty()){
//        RCircle a;
//        int count = CircleList.count();
//        for(int i = 0;i<count;i++)
//        {
//            a = CircleList.at(i);
//            p.drawEllipse(a);
//        }
//    }
//    if(!TextList.isEmpty()){
//        for(int i = 0;i<TextList.count();i++)
//        {

//            //Text text = TextList.
//        }
//    }
}

QString UserDef::getPath() const
{
    return path;
}

void UserDef::setPath(const QString &value)
{
    path = value;
}
