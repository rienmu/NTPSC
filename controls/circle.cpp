#include "circle.h"

NCircle::NCircle()
{

}

NCircle::NCircle(int x, int y, int w, int h){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
}

void NCircle::SetType(QString type){
    this->LineType=type;
}
QString NCircle::GetType(){
    return this->LineType;
}
