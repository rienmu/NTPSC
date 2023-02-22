#include "rect.h"

NRect::NRect()
{

}

void NRect::SetLineType(QString type){
    this->LineType =  type;
}

QString NRect::GetLineType(){
    return this->LineType;
}
