#ifndef ELMENTBASE_H
#define ELMENTBASE_H
#include "QString"
#include "QDebug"
#include "QStringList"
typedef struct Pin
{
    int Node;//器件引脚编号
    QString NodeName;//器件引脚名称，用于显示
}PIN;
class ElmentBase
{
public:
    ElmentBase();
public:
    QString ElementType;
    QStringList LineList;
    QStringList RectList;
    QStringList CircleList;

};

#endif // ELMENTBASE_H
