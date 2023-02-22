#include "rcircle.h"

RCircle::RCircle()
{

}
void RCircle::SetType(QString type){
    this->LineType=type;
}
QString RCircle::GetType(){
    return this->LineType;
}
