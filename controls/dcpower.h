#ifndef DCPOWER_H
#define DCPOWER_H
#include "guibase.h"
class DCPower : public GuiBase
{
public:
    DCPower();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // DCPOWER_H
