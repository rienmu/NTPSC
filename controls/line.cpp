#include "line.h"

//Line::Line()
//{

//}
//Line::Line(int x1, int y1,int x2,int y2){
//    this->x = new QPoint(x1,y1);
//    this->y = new QPoint(x2,y2);
//}
//Line::Line(QPoint *x, QPoint *y ){
//    this->x = x;
//    this->y = y;
//}




void Line::SetType(QString type){
    this->type = type;
}
QString Line::GetType(){
    return this->type;
}
