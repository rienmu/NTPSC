#ifndef GUIBASE_H
#define GUIBASE_H
#include "QLabel"
#include "QPainter"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "../stable.h"
#include "line.h"
#include "rect.h"
#include "QRegExp"
#include "rcircle.h"
#include "circle.h"
#include "text.h"
#include "pin.h"
#include<datastruct.h>

//数据结构

//Line
struct name
{
    name() {}
};



class GuiBase:public QLabel{
public:
    GuiBase();
    virtual void Draw(){}
    virtual void setnType(int nType);
    virtual int getnType();
    virtual void setValue(double value);
    virtual double getValue();
    virtual bool IsSelected();
    virtual void ReadAndWriteFile(QString path);
    virtual void AnalysisText(QStringList CellList);
//器件属性
public:
    double value;
    int nType;
    bool n_isSelected;
    int AeroH,AeroW;
    //QVector<Line> LineList;


    QList<Line> LineList;
    QList<NRect> RectList;
    QList<RCircle> CircleList;
    QList<NText> TextList;
    QList<Pin> PinList;

    QString ElementType;
    QString CellStr;
    QStringList CellList;

    QMessageBox megToclient;//
    QString FileFormat;
    QFile file;


 //正则表达式


};

#endif // GUIBASE_H
