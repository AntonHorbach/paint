/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_image;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionColor;
    QAction *actionWidth;
    QAction *actionClear;
    QAction *actionSolid_line;
    QAction *actionDash_Line;
    QAction *actionDot_Line;
    QAction *actionDash_Dot_Line;
    QAction *actionDash_Dot_Dot_Line;
    QAction *actionCustom_Dash_Line;
    QAction *actionNew;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuScene;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 395);
        actionOpen_image = new QAction(MainWindow);
        actionOpen_image->setObjectName(QStringLiteral("actionOpen_image"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        actionWidth = new QAction(MainWindow);
        actionWidth->setObjectName(QStringLiteral("actionWidth"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionSolid_line = new QAction(MainWindow);
        actionSolid_line->setObjectName(QStringLiteral("actionSolid_line"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pict/proxy.duckduckgo.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolid_line->setIcon(icon);
        actionDash_Line = new QAction(MainWindow);
        actionDash_Line->setObjectName(QStringLiteral("actionDash_Line"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pict/dashline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDash_Line->setIcon(icon1);
        actionDot_Line = new QAction(MainWindow);
        actionDot_Line->setObjectName(QStringLiteral("actionDot_Line"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pict/dotline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDot_Line->setIcon(icon2);
        actionDash_Dot_Line = new QAction(MainWindow);
        actionDash_Dot_Line->setObjectName(QStringLiteral("actionDash_Dot_Line"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pict/dashdotline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDash_Dot_Line->setIcon(icon3);
        actionDash_Dot_Dot_Line = new QAction(MainWindow);
        actionDash_Dot_Dot_Line->setObjectName(QStringLiteral("actionDash_Dot_Dot_Line"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pict/dashdotdotline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDash_Dot_Dot_Line->setIcon(icon4);
        actionCustom_Dash_Line = new QAction(MainWindow);
        actionCustom_Dash_Line->setObjectName(QStringLiteral("actionCustom_Dash_Line"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pict/customdashline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCustom_Dash_Line->setIcon(icon5);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 735, 355));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuScene = new QMenu(menuBar);
        menuScene->setObjectName(QStringLiteral("menuScene"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuScene->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen_image);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuOptions->addAction(actionColor);
        menuOptions->addAction(actionWidth);
        menuScene->addAction(actionClear);
        toolBar->addAction(actionSolid_line);
        toolBar->addAction(actionDash_Line);
        toolBar->addAction(actionDot_Line);
        toolBar->addAction(actionDash_Dot_Line);
        toolBar->addAction(actionDash_Dot_Dot_Line);
        toolBar->addAction(actionCustom_Dash_Line);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_image->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen_image->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save image", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Close program", nullptr));
#endif // QT_NO_TOOLTIP
        actionColor->setText(QApplication::translate("MainWindow", "Color", nullptr));
#ifndef QT_NO_TOOLTIP
        actionColor->setToolTip(QApplication::translate("MainWindow", "Change Color", nullptr));
#endif // QT_NO_TOOLTIP
        actionWidth->setText(QApplication::translate("MainWindow", "Width", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWidth->setToolTip(QApplication::translate("MainWindow", "Change width of line", nullptr));
#endif // QT_NO_TOOLTIP
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear scene", nullptr));
#endif // QT_NO_TOOLTIP
        actionSolid_line->setText(QApplication::translate("MainWindow", "Solid line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSolid_line->setToolTip(QApplication::translate("MainWindow", "set solid line", nullptr));
#endif // QT_NO_TOOLTIP
        actionDash_Line->setText(QApplication::translate("MainWindow", "Dash Line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDash_Line->setToolTip(QApplication::translate("MainWindow", "Set Dash Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionDot_Line->setText(QApplication::translate("MainWindow", "Dot Line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDot_Line->setToolTip(QApplication::translate("MainWindow", "Set Dot Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionDash_Dot_Line->setText(QApplication::translate("MainWindow", "Dash Dot Line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDash_Dot_Line->setToolTip(QApplication::translate("MainWindow", "Set Dash Dot Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionDash_Dot_Dot_Line->setText(QApplication::translate("MainWindow", "Dash Dot Dot Line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDash_Dot_Dot_Line->setToolTip(QApplication::translate("MainWindow", "Set Dash Dot Dot Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionCustom_Dash_Line->setText(QApplication::translate("MainWindow", "Custom Dash Line", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCustom_Dash_Line->setToolTip(QApplication::translate("MainWindow", "Set Custom Dash Line", nullptr));
#endif // QT_NO_TOOLTIP
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "Create Image", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Line", nullptr));
        menuScene->setTitle(QApplication::translate("MainWindow", "Scene", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
