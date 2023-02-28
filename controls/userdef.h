#ifndef USERDEF_H
#define USERDEF_H
#include "./controls/guibase.h"
#include "line.h"
#include "rect.h"
#include "QRegExp"
#include "rcircle.h"
#include "circle.h"
#include "text.h"
#include "pin.h"
class UserDef :public GuiBase
{
public:
    UserDef();
    UserDef(QString path);
    void paintEvent(QPaintEvent *e);
};


#endif // USERDEF_H
