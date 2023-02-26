#ifndef SWITCH_H
#define SWITCH_H
#include "QTextStream"
#include "QFile"
#include "guibase.h"

class Switch : public GuiBase
{
public:
    Switch();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // SWITCH_H
