#ifndef PIN_H
#define PIN_H
#include "QRect"

class Pin : public QRect
{
public:
    Pin();
    Pin(int x, int y);
    Pin(int node, QString PinName);
   // void paintEvent(QPaintEvent *e);
    void SetNode(int node);
    int GetNode();
    void SetPinName(QString PinName);
    QString GetPinName();
public:
    int x,y,w,h;
    int node;
    QString PinName;
};

#endif // PIN_H
