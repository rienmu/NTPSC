#ifndef NPNTRIODE_H
#define NPNTRIODE_H
#include "guibase.h"

class Npntriode :public GuiBase
{
public:
    Npntriode();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // NPNTRIODE_H
