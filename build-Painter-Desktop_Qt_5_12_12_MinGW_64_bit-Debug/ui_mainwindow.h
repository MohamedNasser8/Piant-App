/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionColor;
    QAction *actionThickness;
    QAction *actionLine;
    QAction *actionRectangle;
    QAction *actionCircle;
    QAction *actionManual_input;
    QAction *actionSearch;
    QAction *actionSort;
    QWidget *centralwidget;
    QLineEdit *length;
    QLineEdit *height;
    QPushButton *ok;
    QLabel *width_length_raduisLabel;
    QLabel *heightLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuOptions;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Icons/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Icons/Open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Icons/Save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../Icons/Quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../Icons/Undo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../Icons/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../Icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon6);
        actionThickness = new QAction(MainWindow);
        actionThickness->setObjectName(QString::fromUtf8("actionThickness"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../Icons/Thickness.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionThickness->setIcon(icon7);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../Icons/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8("../Line.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLine->setIcon(icon8);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../Icons/Rect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon9);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../Icons/Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon10);
        actionManual_input = new QAction(MainWindow);
        actionManual_input->setObjectName(QString::fromUtf8("actionManual_input"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../Icons/690150.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon11);
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QString::fromUtf8("actionSort"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../Icons/495-4952760_ascending-sorting-icon-sorting-icon-hd-png-download.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSort->setIcon(icon12);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        length = new QLineEdit(centralwidget);
        length->setObjectName(QString::fromUtf8("length"));
        length->setGeometry(QRect(310, 30, 141, 31));
        height = new QLineEdit(centralwidget);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(310, 90, 141, 31));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(460, 30, 93, 29));
        width_length_raduisLabel = new QLabel(centralwidget);
        width_length_raduisLabel->setObjectName(QString::fromUtf8("width_length_raduisLabel"));
        width_length_raduisLabel->setGeometry(QRect(310, 10, 141, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        width_length_raduisLabel->setFont(font);
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setGeometry(QRect(310, 70, 141, 20));
        heightLabel->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionColor);
        menuEdit->addAction(actionThickness);
        menuTools->addAction(actionLine);
        menuTools->addAction(actionRectangle);
        menuTools->addAction(actionCircle);
        menuOptions->addAction(actionManual_input);
        menuOptions->addAction(actionSearch);
        menuOptions->addAction(actionSort);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionThickness);
        toolBar->addAction(actionColor);
        toolBar->addSeparator();
        toolBar->addAction(actionLine);
        toolBar->addAction(actionRectangle);
        toolBar->addAction(actionCircle);
        toolBar->addSeparator();
        toolBar->addAction(actionSearch);
        toolBar->addAction(actionSort);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionColor->setText(QApplication::translate("MainWindow", "Color", nullptr));
        actionThickness->setText(QApplication::translate("MainWindow", "Thickness", nullptr));
        actionLine->setText(QApplication::translate("MainWindow", "Line", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLine->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionRectangle->setText(QApplication::translate("MainWindow", "Rectangle", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRectangle->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCircle->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionManual_input->setText(QApplication::translate("MainWindow", "Manual input", nullptr));
        actionSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionSort->setText(QApplication::translate("MainWindow", "Sort", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSort->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        length->setText(QString());
        height->setText(QString());
        ok->setText(QApplication::translate("MainWindow", "ok", nullptr));
        width_length_raduisLabel->setText(QApplication::translate("MainWindow", "Width", nullptr));
        heightLabel->setText(QApplication::translate("MainWindow", "Height", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
