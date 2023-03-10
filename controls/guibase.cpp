#include "guibase.h"



GuiBase::GuiBase()
{

}

void GuiBase::setnType(int nType){
    this->nType = nType;
}

void GuiBase::setValue(double value){
    this->value=value;
}
double GuiBase::getValue(){
    return this->value;
}
int GuiBase::getnType(){
    return this->nType;
}
bool GuiBase::IsSelected(){
    return n_isSelected;
}

/*读取文件数据*/
void GuiBase::ReadAndWriteFile(QString path){


    file.setFileName(path);
    QString st="";
    //QRegExp REGLINE("(.*\\n)");


    bool isopened= file.open(QIODevice::ReadWrite | QIODevice::Text);
    if(!isopened)  {
        qDebug()<<file.exists();
        //megToclient.setWindowTitle("警告");
       // megToclient.setText("器件文件打开失败，请确认器件文件是否存在");
       // megToclient.exec();

    }else{

        while(!file.atEnd()){
            QByteArray qb = file.readLine();
            CellList.append(qb);
        }
        qDebug()<<CellList;
        AnalysisText(CellList);
        //        megToclient.setText(CellList.at(1));
        //        megToclient.exec();
    }
}
void GuiBase::AnalysisText(QStringList CellList){
    while(!CellList.isEmpty()){
        QString temp = CellList.front();
        QTextStream qts(&temp);
        while (!qts.atEnd()) {
            QString str;
            qts>>str;
            //qDebug()<<str;
            if(str=="ELEMENTTYPE"){
                qts>>ElementType;
            }
//            if(str=="NTYPE")
//            {
//                int type;
//                qts>>type;
//                switch (type) {
//                case NTYPE_RES:
//                    nType = NTYPE_RES;
//                    break;
//                case NTYPE_CAPACITANCE:
//                    nType = NTYPE_CAPACITANCE;
//                    break;
//                case NTYPE_DCPOWER:
//                    nType = NTYPE_DCPOWER;
//                    break;
//                case NTYPE_VOLTMERTER:
//                    nType = NTYPE_VOLTMERTER;
//                    break;

//                case NTYPE_USERDEF:
//                    nType = NTYPE_USERDEF;
//                    break;
//                default:
//                    break;
//                }
//            }
            if(str=="AERO"){
                qts>>AeroH>>AeroW;
            }
            if(str=="LINE"){
                int x1,y1,x2,y2;
                QString type;
                qts>>type>>x1>>y1>>x2>>y2;
                Line line;
                line.setLine(x1,y1,x2,y2);
                line.SetType(type);
                // qDebug()<<line.GetType();
                LineList.append(line);
            }
            if(str=="RECT"){
                NRect rect;
                int x,y,h,w;
                QString type;
                qts>>type>>x>>y>>w>>h;
                rect.setRect(x,y,w,h);
                rect.SetLineType(type);
                RectList.append(rect);
            }
            if(str == "CIRCLE"){
                RCircle circle;
                int x,y,w,h;
                QString type;
                qts>>type>>x>>y>>w>>h;
                circle.setRect(x,y,w,h);
                circle.SetType(type);
                CircleList.append(circle);

            }
            if(str == "TEXT"){
                QString text;
                int x,y;
                qts>>x>>y>>text;
                NText *ntext = new NText(x,y,text);
                TextList.append(*ntext);

            }
            if(str=="PIN"){

                int x,y,node;
                QString nodet;
                QString pinattr;
                qts>>x>>y>>nodet>>node;
                qts>>pinattr>>pinattr;
                Pin pin;
                pin.setRect(x,y,5,5);
                if(pinattr == "PINNAME"){
                    qts>>pinattr;
                    pin.SetPinName(pinattr);
                    pin.SetNode(node);
                }
                PinList.append(pin);
            }
            // qDebug()<<"Areoh:"<<AeroH;
            // if(!LineList.isEmpty()) qDebug()<<"Linelist:"<<LineList.at(0).GetType();
        }
        CellList.pop_front();
    }

}


void GuiBase::paintEvent(QPaintEvent *e)
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

bool GuiBase::getN_isSelected() const
{
    return n_isSelected;
}

void GuiBase::setN_isSelected(bool value)
{
    n_isSelected = value;
}

int GuiBase::getAeroW() const
{
    return AeroW;
}

void GuiBase::setAeroW(int value)
{
    AeroW = value;
}

QImage *GuiBase::getImage() const
{
    return image;
}

void GuiBase::setImage(QImage *value)
{
    image = value;
}

int GuiBase::getAeroH() const
{
    return AeroH;
}

void GuiBase::setAeroH(int value)
{
    AeroH = value;
}

int GuiBase::getPointY() const
{
    return PointY;
}

void GuiBase::setPointY(int value)
{
    PointY = value;
}

int GuiBase::getPointX() const
{
    return PointX;
}

void GuiBase::setPointX(int value)
{
    PointX = value;
}












