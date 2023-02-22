#ifndef RCIRCLE_H
#define RCIRCLE_H
#include "QRectF"

class RCircle : public QRectF
{
public:
    RCircle();
    void SetType(QString type);
    QString GetType();
private:
    QString LineType;
    QPoint c;
    int x,y;
    int h,w;
};

#endif // RCIRCLE_H
