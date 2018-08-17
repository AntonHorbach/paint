#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <vector>
#include <QDebug>


class paintScene : public QGraphicsScene
{

    Q_OBJECT
    Qt::PenStyle line_type;
    QPointF previousPoint;
    QColor color;
    qreal line_width;

public:
    explicit paintScene(QObject *parent = 0);
    ~paintScene();
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void set_color(QColor);
    void set_width(qreal);
    void set_line_type(Qt::PenStyle);
};

#endif // PAINTSCENE_H
