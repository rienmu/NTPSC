#ifndef RESISTOR_H
#define RESISTOR_H
#include "guibase.h"

class Resistor : public GuiBase
{
public:
    Resistor(int nType = 10,double value=5.0);
    virtual void Draw();
};

#endif // RESISTOR_H
