#include "arc.h"

Arc::Arc()
{

}

Arc::Arc(int x, int y, int w, int h, int StartAngle, int SpanAngle)
{
    this->x=x;
    setY(y);
    setH(h);
    setW(w);
    setStartAngle(StartAngle);
    setSpanAngle(SpanAngle);
}

int Arc::getSpanAngle() const
{
    return SpanAngle;
}

void Arc::setSpanAngle(int value)
{
    SpanAngle = value;
}

int Arc::getStartAngle() const
{
    return StartAngle;
}

void Arc::setStartAngle(int value)
{
    StartAngle = value;
}

int Arc::getH() const
{
    return h;
}

void Arc::setH(int value)
{
    h = value;
}

int Arc::getW() const
{
    return w;
}

void Arc::setW(int value)
{
    w = value;
}

int Arc::getY() const
{
    return y;
}

void Arc::setY(int value)
{
    y = value;
}

int Arc::getX() const
{
    return x;
}

void Arc::setX(int value)
{
    x = value;
}
