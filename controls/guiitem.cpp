#include "guiitem.h"

GuiItem::GuiItem()
{

    this->setFlags(QGraphicsItem::ItemIsMovable);
    this->setCacheMode(QGraphicsItem::ItemCoordinateCache);
}

QRectF GuiItem::boundingRect() const
{
    QRectF rect(10,10,20,20);
    return rect;
}

void GuiItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(!this->LineList.isEmpty()){
        for(int i =0; i<this->LineList.count();i++){
            painter->drawLine(this->LineList.at(i));
        }

    }
    if(!this->RectList.isEmpty()){
        for(int i =0 ;i<this->RectList.count();i++){
            painter->drawRect(this->RectList.at(i));
        }

    }
    if(!this->PinList.isEmpty()){
        Pin pin;
        int count = this->PinList.count();
        for(int i = 0;i<count;i++)
        {
            pin = this->PinList.at(i);
            painter->drawRect(pin);
        }
    }
    if(!this->CircleList.isEmpty()){
        RCircle a;
        int count = this->CircleList.count();
        for(int i = 0;i<count;i++)
        {
            a = this->CircleList.at(i);
            painter->drawEllipse(a);
        }
    }
    if(!this->TextList.isEmpty()){
        for(int i = 0;i<this->TextList.count();i++)
        {

            //Text text = TextList.
        }
    }
}

QString GuiItem::getPath() const
{
    return path;
}

void GuiItem::setPath(const QString &value)
{
    path = value;
}

void GuiItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF scenePos = event->scenePos();
    QPointF pos = event->pos();

    // 保存当前的一些信息
    m_pos = pos;
    m_pressedPos = scenePos;
    m_startPos = this->pos();
    return QGraphicsItem::mousePressEvent(event);
}

void GuiItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    // 获取场景坐标和本地坐标
    QPointF scenePos = event->scenePos();
    QPointF pos = event->pos();

    // 计算偏移
    qreal xInterval = scenePos.x() - m_pressedPos.x();
    qreal yInterval = scenePos.y() - m_pressedPos.y();

    // 设置在场景中位置
    this->setPos(m_startPos + QPointF(xInterval, yInterval));
    this->update();

}

void GuiItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void GuiItem::ReadAndWriteFile(QString path){


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
void GuiItem::AnalysisText(QStringList CellList){
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
