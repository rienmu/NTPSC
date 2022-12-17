#include "resistor.h"

Resistor::Resistor(int nType,double value)
{
    this->nType = nType;
    this->setValue(value);
    this->n_isSelected = false;
}


void Resistor::Draw(){

    QPixmap img;

    if(this->n_isSelected == true){
        img.load("D:\\rien\\Documents\\QtNTPSC\\src\\img\\res.png");
    }else{
        img.load("D:\\rien\\Documents\\QtNTPSC\\src\\img\\res.bmp");
    }

    this->resize(60,30);
    img.scaled(QSize(60,30));
    img.save("./r.jpg");
    this->setPixmap(img);
}
