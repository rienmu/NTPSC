#ifndef ARC_H
#define ARC_H


class Arc
{
public:
    Arc();
    Arc(int x,int y,int h,int w,int StartAngle,int SpanAngle);
    int getStartAngle() const;
    void setStartAngle(int value);

    int getSpanAngle() const;
    void setSpanAngle(int value);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    int getH() const;
    void setH(int value);

    int getW() const;
    void setW(int value);

private:
    int x,y,h,w;
    int StartAngle,SpanAngle;


};

#endif // ARC_H
