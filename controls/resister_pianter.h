#ifndef RESISTER_PIANTER_H
#define RESISTER_PIANTER_H
#include "QLabel"
#include "guibase.h"
#include "QEvent"
class Resister_pianter:public GuiBase
{
public:
    Resister_pianter(int nType = 10,double value=5.0);
    void paintEvent(QPaintEvent *e);



};

#endif // RESISTER_PIANTER_H
