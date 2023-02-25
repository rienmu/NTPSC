#ifndef GRO_H
#define GRO_H
#include "./controls/guibase.h"
#include "QTextStream"
#include "QFile"


class gro:public GuiBase
{
public:
    gro();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // GRO_H
