#ifndef CAPACITANCE_H
#define CAPACITANCE_H
#include "./controls/guibase.h"

class Capacitance : public GuiBase
{
public:
    Capacitance();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};



#endif // CAPACITANCE_H
