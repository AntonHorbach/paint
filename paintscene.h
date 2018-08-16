#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <vector>


class paintScene : public QGraphicsScene
{

    Q_OBJECT
    Qt line_type;
    QPointF previousPoint;
    QColor color;
    qreal line_width;
    QColor background_color;
    std::vector<QRectF> ellipses_points;
    std::vector<QLineF> lines_points;

public:
    explicit paintScene(QObject *parent = 0);
    ~paintScene();
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void set_color(QColor);
    void set_width(qreal);
    void set_background_color(QColor);
    void repaint();
    void set_line_type(Qt);
};

#endif // PAINTSCENE_H
