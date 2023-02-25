#ifndef DIOD_H
#define DIOD_H
#include "./controls/guibase.h"
#include "QTextStream"
#include "QFile"

class diod: public GuiBase
{
public:
    diod();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // DIOD_H
