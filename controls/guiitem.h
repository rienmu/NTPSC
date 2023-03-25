#ifndef GUIITEM_H
#define GUIITEM_H
#include "QFile"
#include "QPainter"
#include "QTextStream"
#include "../stable.h"
#include "line.h"
#include "rect.h"
#include "arc.h"
#include "rcircle.h"
#include "circle.h"
#include "text.h"
#include "pin.h"
#include<datastruct.h>
#include "../ntpsc.h"
#include <QObject>
#include <QGraphicsItem>
#include "QPointF"
#include "QGraphicsSceneMouseEvent"
#include "QGraphicsPathItem"
#include "QPen"
#include "QColor"
class GuiItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit GuiItem();

signals:

public slots:

    // QGraphicsItem interface
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void ReadAndWriteFile(QString path);
   void AnalysisText(QStringList CellList);

    QString getPath() const;
    void setPath(const QString &value);

private:
    int AeroH,AeroW;
    QString path;
    //QVector<Line> LineList;


    QList<Line> LineList;
    QList<NRect> RectList;
    QList<RCircle> CircleList;
    QList<NText> TextList;
    QList<Pin> PinList;
    QList<Arc>ArcList;

    QString ElementType;
    QString CellStr;
    QStringList CellList;

    QString FileFormat;
    QFile file;
    QPointF m_pos;
    QPointF m_pressedPos;
    QPointF m_startPos;
    // QGraphicsItem interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // GUIITEM_H
