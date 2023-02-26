#ifndef AMMETER_H
#define AMMETER_H
#include "guibase.h"

class Ammeter : public GuiBase
{
public:
    Ammeter();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // AMMETER_H

