#ifndef DRAWTHREAD_H
#define DRAWTHREAD_H

#include "controls/userdef.h"
#include <QObject>
#include <QFile>
class DrawThread : public QObject
{
    Q_OBJECT
public:
    explicit DrawThread(QObject *parent = nullptr);

    void drawres();
signals:
    void sendiamge(UserDef *image);
    void sendMessageBOX(QString msg);
public slots:

private:

    QString path;
};

#endif // DRAWTHREAD_H
