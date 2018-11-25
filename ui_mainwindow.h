/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_numberDisplacements;
    QPushButton *btn_callInputMatrix;
    QLabel *label_error;
    QSlider *horizontalSlider_numberDisplacements;
    QLabel *label_numberDisplacements_out;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(464, 149);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_numberDisplacements = new QLabel(centralWidget);
        label_numberDisplacements->setObjectName(QStringLiteral("label_numberDisplacements"));
        label_numberDisplacements->setGeometry(QRect(10, 10, 161, 17));
        btn_callInputMatrix = new QPushButton(centralWidget);
        btn_callInputMatrix->setObjectName(QStringLiteral("btn_callInputMatrix"));
        btn_callInputMatrix->setGeometry(QRect(370, 40, 61, 21));
        label_error = new QLabel(centralWidget);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setGeometry(QRect(10, 70, 191, 17));
        horizontalSlider_numberDisplacements = new QSlider(centralWidget);
        horizontalSlider_numberDisplacements->setObjectName(QStringLiteral("horizontalSlider_numberDisplacements"));
        horizontalSlider_numberDisplacements->setGeometry(QRect(10, 40, 301, 29));
        horizontalSlider_numberDisplacements->setMinimum(1);
        horizontalSlider_numberDisplacements->setOrientation(Qt::Horizontal);
        label_numberDisplacements_out = new QLabel(centralWidget);
        label_numberDisplacements_out->setObjectName(QStringLiteral("label_numberDisplacements_out"));
        label_numberDisplacements_out->setGeometry(QRect(180, 10, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 464, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_numberDisplacements->setText(QApplication::translate("MainWindow", "Number Displacements:", 0));
        btn_callInputMatrix->setText(QApplication::translate("MainWindow", "Go!", 0));
        label_error->setText(QString());
        label_numberDisplacements_out->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
