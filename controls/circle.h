#ifndef CIRCLE_H
#define CIRCLE_H


class NCircle
{
public:
    NCircle();
    NCircle(int x, int y,int w, int h);
    void SetType(QString type);
    QString GetType();

private:
    QString LineType;
    QPoint c;
    int x,y;
    int h,w;
};

#endif // CIRCLE_H
