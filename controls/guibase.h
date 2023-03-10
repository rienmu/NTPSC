#ifndef GUIBASE_H
#define GUIBASE_H
#include "QImage"
#include "QPainter"
#include "QFile"
#include "QTextStream"
#include "../stable.h"
#include "line.h"
#include "rect.h"
#include "rcircle.h"
#include "circle.h"
#include "text.h"
#include "pin.h"
#include "QWidget"
#include "../ntpsc.h"

//数据结构

//Line
struct name
{
    name() {}
};



class GuiBase : public QWidget{
public:
    GuiBase();

    virtual void setnType(int nType);
    virtual int getnType();
    virtual void setValue(double value);
    virtual double getValue();
    virtual bool IsSelected();
    virtual void ReadAndWriteFile(QString path);
    virtual void AnalysisText(QStringList CellList);
//器件属性

    int getPointX() const;
    void setPointX(int value);

    int getPointY() const;
    void setPointY(int value);

    int getAeroH() const;
    void setAeroH(int value);

    int getAeroW() const;
    void setAeroW(int value);
public:
    QList<Line> LineList;
    QList<NRect> RectList;
    QList<RCircle> CircleList;
    QList<NText> TextList;
    QList<Pin> PinList;
    QImage *getImage() const;
    void setImage(QImage *value);

    bool getN_isSelected() const;
    void setN_isSelected(bool value);

private:
    QImage *image;
    void paintEvent(QPaintEvent *e);
    int PointX,PointY;
    double value;
    int nType;
    bool n_isSelected;
    int AeroH,AeroW;
    //QVector<Line> LineList;




    QString ElementType;
    QString CellStr;
    QStringList CellList;

    QString FileFormat;
    QFile file;

signals:

 //正则表达式


};

#endif // GUIBASE_H
