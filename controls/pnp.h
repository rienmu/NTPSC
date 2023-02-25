#ifndef PNP_H
#define PNP_H
#include "./controls/guibase.h"
#include "QTextStream"
#include "QFile"

class pnp:public GuiBase
{
public:
    pnp();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // PNP_H
