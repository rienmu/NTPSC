#ifndef AMP_H
#define AMP_H
#include "./controls/guibase.h"
#include "QTextStream"
#include "QFile"

class amp:public GuiBase
{
public:
    amp();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // AMP_H
