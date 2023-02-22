#ifndef TEXT_H
#define TEXT_H


class NText
{
public:
    NText();
    NText(int x, int y,QString text);
private:
    int x,y;
    QString text;
};

#endif // TEXT_H
