#include "text.h"

NText::NText()
{

}
NText::NText(int x, int y,QString text)
{
    this->x = x;
    this->y = y;
    this->text = text;
}

int NText::getY() const
{
    return y;
}

void NText::setY(int value)
{
    y = value;
}

QString NText::getText() const
{
    return text;
}

void NText::setText(const QString &value)
{
    text = value;
}

int NText::getX() const
{
    return x;
}

void NText::setX(int value)
{
    x = value;
}
