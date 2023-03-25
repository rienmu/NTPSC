#ifndef ARC_H
#define ARC_H


class Arc
{
public:
    Arc();
    Arc(int x,int y,int w,int h,int StartAngle,int SpanAngle);
    int getSpanAngle() const;
    void setSpanAngle(int value);

    int getStartAngle() const;
    void setStartAngle(int value);

    int getH() const;
    void setH(int value);

    int getW() const;
    void setW(int value);

    int getY() const;
    void setY(int value);

    int getX() const;
    void setX(int value);

private:
    int x;
    int y;
    int w;
    int h;
    int StartAngle;
    int SpanAngle;
};

#endif // ARC_H
