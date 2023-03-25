#include "arc.h"

Arc::Arc()
{

}

int Arc::getStartAngle() const
{
    return StartAngle;
}

void Arc::setStartAngle(int value)
{
    StartAngle = value;
}

int Arc::getSpanAngle() const
{
    return SpanAngle;
}

void Arc::setSpanAngle(int value)
{
    SpanAngle = value;
}

int Arc::getX() const
{
    return x;
}

void Arc::setX(int value)
{
    x = value;
}

int Arc::getY() const
{
    return y;
}

void Arc::setY(int value)
{
    y = value;
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

Arc::Arc(int x, int y, int h, int w, int StartAngle, int SpanAngle)
{
    //this->x=x;
    //方法2 setH(h);
    setH(h);
    setX(x);
    setY(y);
    setSpanAngle(SpanAngle);
    setStartAngle(StartAngle);
    setW(w);
}
