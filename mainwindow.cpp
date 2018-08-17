#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new paintScene(ui->graphicsView);
    scene->setSceneRect(0, 0, ui->graphicsView->width()-10, ui->graphicsView->height()-10);
    ui->graphicsView->setScene(scene);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    ui->graphicsView->resize(this->width(), this->height()-40);
    scene->setSceneRect(0, 0, ui->graphicsView->width()-10, ui->graphicsView->height()-10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_image_triggered()
{
    QPixmap pixmap(QFileDialog::getOpenFileName(this, "Open image", ".jpg"));
    scene->addPixmap(pixmap);
    scene->setSceneRect(0, 0, pixmap.width(), pixmap.height());
    ui->graphicsView->resize(pixmap.width(), pixmap.height());
}

void MainWindow::on_actionSave_triggered()
{
    QImage image(scene->width(), scene->height(), QImage::Format_ARGB32_Premultiplied);
    image.fill(QColor(Qt::white).rgb());

    QPainter painter(&image);
    scene->render(&painter);
    painter.end();

    image.save(QFileDialog::getSaveFileName());
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionColor_triggered()
{
    scene->set_color(QColorDialog::getColor());
}

void MainWindow::on_actionWidth_triggered()
{
    scene->set_width(QInputDialog::getDouble(this, "Width", "Enter a width of line", 1.0, 0.1, scene->width()));
}

void MainWindow::on_actionClear_triggered()
{
    scene->clear();
}

void MainWindow::on_actionSolid_line_triggered()
{
    scene->set_line_type(Qt::SolidLine);
}

void MainWindow::on_actionDash_Line_triggered()
{
    scene->set_line_type(Qt::DashLine);
}

void MainWindow::on_actionDot_Line_triggered()
{
    scene->set_line_type(Qt::DotLine);
}

void MainWindow::on_actionDash_Dot_Line_triggered()
{
    scene->set_line_type(Qt::DashDotLine);
}

void MainWindow::on_actionDash_Dot_Dot_Line_triggered()
{
    scene->set_line_type(Qt::DashDotDotLine);
}

void MainWindow::on_actionCustom_Dash_Line_triggered()
{
    scene->set_line_type(Qt::CustomDashLine);
}
