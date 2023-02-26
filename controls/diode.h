#ifndef DIODE_H
#define DIODE_H
#include "guibase.h"

class Diode : public GuiBase
{
public:
    Diode();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // DIODE_H
