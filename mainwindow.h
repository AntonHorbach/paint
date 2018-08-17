#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QResizeEvent>
#include <QGraphicsPixmapItem>
#include "paintscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;
    paintScene *scene;

public:
    explicit MainWindow(QWidget *parent = 0);
    void resizeEvent(QResizeEvent *event);
    ~MainWindow();
private slots:
    void on_actionOpen_image_triggered();
    void on_actionSave_triggered();
    void on_actionExit_triggered();
    void on_actionColor_triggered();
    void on_actionWidth_triggered();
    void on_actionClear_triggered();
    void on_actionSolid_line_triggered();
    void on_actionDash_Line_triggered();
    void on_actionDot_Line_triggered();
    void on_actionDash_Dot_Line_triggered();
    void on_actionDash_Dot_Dot_Line_triggered();
    void on_actionCustom_Dash_Line_triggered();
    void on_actionNew_triggered();
};

#endif // MAINWINDOW_H
