#ifndef ELMENTBASE_H
#define ELMENTBASE_H
#include "QString"
#include "QDebug"
#include "QStringList"

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
