#ifndef VOLTMETER_H
#define VOLTMETER_H

#include "guibase.h"
class Voltmeter :public GuiBase
{
public:
    Voltmeter();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // VOLTMETER_H
