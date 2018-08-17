#include "paintscene.h"

paintScene::paintScene(QObject *parent) : QGraphicsScene(parent)
{
    color=Qt::black;
    line_width=1.0;
    line_type=Qt::SolidLine;
    empty=true;
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

        if(empty) empty=false;
    }
    else if(event->button()==Qt::RightButton){
        addEllipse(event->scenePos().x()-line_width/2, event->scenePos().y()-line_width/2,
                   line_width, line_width, QPen(Qt::NoPen), QBrush(Qt::white));
        previousPoint = event->scenePos();
    }
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton){
        addLine(previousPoint.x(), previousPoint.y(), event->scenePos().x(),
                event->scenePos().y(), QPen(color, line_width, line_type, Qt::RoundCap));
        previousPoint = event->scenePos();

        if(empty) empty=false;
    }
    else if(event->buttons() & Qt::RightButton){
        addLine(previousPoint.x(), previousPoint.y(), event->scenePos().x(),
                event->scenePos().y(), QPen(Qt::white, line_width, Qt::SolidLine, Qt::RoundCap));
        previousPoint = event->scenePos();
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

void paintScene::set_line_type(Qt::PenStyle line_type)
{
    this->line_type=line_type;
}

bool paintScene::isEmpty(){
    return empty;
}

void paintScene::set_empty()
{
    empty=true;
}
