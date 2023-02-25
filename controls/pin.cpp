#include "pin.h"
#include "QPainter"
Pin::Pin()
{

}
Pin::Pin(int x, int y)
{
    this->x = x;
    this->y = y;
}
Pin::Pin(int node, QString PinName)
{
    this->node = node;
    this->PinName = PinName;
}
//void Pin::paintEvent(QPaintEvent *e){
//    this->setFixedSize(15,15);
//    QPainter p(this);
//    p.setPen(Qt::SolidLine);
//    p.drawRect(x,y,5,5);
//    p.drawText(x,y + 2,this->PinName);
//}

void Pin::SetNode(int node){
    this->node = node;
}
int Pin::GetNode(){
    return this->node;
}
void Pin::SetPinName(QString PinName)
{
    this->PinName = PinName;
}
QString Pin::GetPinName(){
    return this->PinName;
}



















