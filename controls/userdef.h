#ifndef USERDEF_H
#define USERDEF_H
#include "line.h"
#include "rect.h"
#include "QRegExp"
#include "rcircle.h"
#include "circle.h"
#include "controls/guibase.h"
#include "text.h"
#include "pin.h"
class UserDef : public GuiBase
{
public:


    using GuiBase::GuiBase;
    UserDef(QString path);
    UserDef(QString path,QObject parent);
    void paintEvent(QPaintEvent *e);

    QString getPath() const;
    void setPath(const QString &value);



private:
    QObject guibak;
    QString path;
};


#endif // USERDEF_H
