#ifndef RES_H
#define RES_H
#include "./controls/guibase.h"
#include "QTextStream"
#include "QFile"
class Res : public GuiBase
{
public:
    Res();
    void paintEvent(QPaintEvent *e);
    QTextStream *SourceText = new QTextStream();
};

#endif // RES_H
