#ifndef TEXT_H
#define TEXT_H


class NText
{
public:
    NText();
    NText(int x, int y,QString text);
    int getY() const;
    void setY(int value);

    QString getText() const;
    void setText(const QString &value);

    int getX() const;
    void setX(int value);

private:
    int x,y;
    QString text;
};

#endif // TEXT_H
