#include "resister_pianter.h"
#include "QPainter"

Resister_pianter::Resister_pianter(int nType,double value)
{
    this->nType = nType;
    this->setValue(value);
    this->n_isSelected = false;

}

void Resister_pianter::paintEvent(QPaintEvent *e){

    QPainter p(this);
    this->setFixedSize(60,30);
    this->setFixedSize(90,90);
    p.setPen(Qt::SolidLine);

    p.drawText(0,80,"start");
    p.drawEllipse(15,15,30,60);
    p.drawRect(15,10,30,10);
    p.drawLine(3,15,15,15);
    p.drawLine(45,15,57,15);
    //update();
}


