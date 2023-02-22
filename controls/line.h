#ifndef LINE_H
#define LINE_H

#include "QLine"
class Line : public QLine
{
public:

    void SetType(QString type);
    QString GetType();
private:
    QString type;
};

#endif // LINE_H
