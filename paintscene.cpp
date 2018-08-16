#include "paintscene.h"

paintScene::paintScene(QObject *parent) : QGraphicsScene(parent)
{
    color=Qt::black;
    background_color=Qt::white;
}

paintScene::~paintScene()
{

}

void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        addEllipse(event->scenePos().x()-line_width/2, event->scenePos().y()-line_width/2,
                   line_width, line_width, QPen(Qt::NoPen), QBrush(color));
        previousPoint = event->scenePos();
    }
    else if(event->button()==Qt::RightButton){
        addEllipse(event->scenePos().x()-line_width/2, event->scenePos().y()-line_width/2,
                   line_width, line_width, QPen(Qt::NoPen), QBrush(background_color));
        previousPoint = event->scenePos();

        ellipses_points.push_back(QRectF(event->scenePos().x()-line_width/2, event->scenePos().y()-line_width/2,
                                         line_width, line_width));
    }
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton){
        addLine(previousPoint.x(), previousPoint.y(), event->scenePos().x(),
                event->scenePos().y(), QPen(color, line_width, Qt::SolidLine, Qt::RoundCap));
        previousPoint = event->scenePos();
    }
    else if(event->buttons() & Qt::RightButton){
        addLine(previousPoint.x(), previousPoint.y(), event->scenePos().x(),
                event->scenePos().y(), QPen(background_color, line_width, Qt::SolidLine, Qt::RoundCap));
        previousPoint = event->scenePos();

        lines_points.push_back(QLineF(previousPoint.x(), previousPoint.y(), event->scenePos().x(),
                                      event->scenePos().y()));
    }
}

void paintScene::set_color(QColor color)
{
    this->color=color;
}

void paintScene::set_width(qreal line_width)
{
    this->line_width=line_width;
}

void paintScene::set_background_color(QColor background_color)
{
    this->background_color=background_color;
}

void paintScene::repaint()
{
    for(auto i:ellipses_points)
        addEllipse(i, QPen(Qt::NoPen), QBrush(background_color));

    for(auto i:lines_points)
        addLine(i, QPen(background_color, line_width, Qt::SolidLine, Qt::RoundCap));
}
