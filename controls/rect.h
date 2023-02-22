#ifndef RECT_H
#define RECT_H
#include "QRect"

class NRect : public QRect
{
public:
    NRect();
    void SetLineType(QString type);
    QString GetLineType();
private:
    QString LineType;
};

#endif // RECT_H
