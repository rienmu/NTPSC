#include "pin.h"
#include "QPainter"
pin::pin()
{

}
void pin::paintEvent(QPaintEvent *e){
    this->setFixedSize(15,15);
    QPainter p(this);
    p.setPen(Qt::SolidLine);
    p.drawRect(0,0,5,5);
    p.drawText(0,20,"this is a test");
}
