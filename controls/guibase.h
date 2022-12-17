#ifndef GUIBASE_H
#define GUIBASE_H
#include "QLabel"
#include "QPainter"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "../stable.h"
#include "QRegExp"
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
    QString ElementType;
    QString CellStr;
    QStringList CellList;
    QStringList LineList;
    QStringList RectList;
    QStringList CircleList;
    QMessageBox megToclient;//
    QString FileFormat;
    QFile file;


 //正则表达式


};

#endif // GUIBASE_H
