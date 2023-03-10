/*
    这个文件里面定义了所有的自定义数据结构，包括线段，矩形。。后面碰到了再加吧

*/



#ifndef DATASTRUCT_H
#define DATASTRUCT_H
#include <QObject>
#include <QPoint>
#include <QRect>
#include "controls/userdef.h"
class NTPSTRUCT : public QObject{
public:
    explicit NTPSTRUCT(QObject *parent=nullptr);

public:
    /*器件文件里面的线段*/
    static struct LINESTRUCT
    {

        QString LineType;
        QPoint x1;
        QPoint x2;
    }LINESTRUCT;

    /*器件文件里面的矩形*/
    static struct RECTSTRUCT{
        QString LineType;
        QPoint x1;
        QPoint X2;
    }RECTSTRUCT;

};

#endif // DATASTRUCT_H

