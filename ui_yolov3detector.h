/********************************************************************************
** Form generated from reading UI file 'yolov3detector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOLOV3DETECTOR_H
#define UI_YOLOV3DETECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yolov3Detector
{
public:
    QAction *actionOpen;
    QWidget *centralWidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *yolov3Detector)
    {
        if (yolov3Detector->objectName().isEmpty())
            yolov3Detector->setObjectName(QStringLiteral("yolov3Detector"));
        yolov3Detector->resize(652, 484);
        actionOpen = new QAction(yolov3Detector);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(yolov3Detector);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 321, 351));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(380, 20, 256, 192));
        yolov3Detector->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(yolov3Detector);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 652, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        yolov3Detector->setMenuBar(menuBar);
        mainToolBar = new QToolBar(yolov3Detector);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        yolov3Detector->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(yolov3Detector);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        yolov3Detector->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);

        retranslateUi(yolov3Detector);

        QMetaObject::connectSlotsByName(yolov3Detector);
    } // setupUi

    void retranslateUi(QMainWindow *yolov3Detector)
    {
        yolov3Detector->setWindowTitle(QApplication::translate("yolov3Detector", "yolov3Detector", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("yolov3Detector", "Open", Q_NULLPTR));
        label->setText(QApplication::translate("yolov3Detector", "TextLabel", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("yolov3Detector", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class yolov3Detector: public Ui_yolov3Detector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOLOV3DETECTOR_H
