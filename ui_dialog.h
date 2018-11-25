/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableWidget *matrix;
    QPushButton *btn_calculate_LU;
    QPushButton *btn_calculate_LDP;
    QLabel *label_determinante;
    QLabel *label_determinant_value;
    QTableWidget *matrixL;
    QTableWidget *matrixU;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *matrixP;
    QLabel *label_L;
    QLabel *label_U;
    QLabel *label_P;
    QTableWidget *matrix_results;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_timeL;
    QLabel *label_timeU;
    QLabel *label_timeD;
    QLabel *label_totalTime;
    QLabel *label_totalTime_value;
    QLabel *label_error;
    QLabel *label_totalOp_value;
    QLabel *label_totalOp;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1041, 666);
        matrix = new QTableWidget(Dialog);
        matrix->setObjectName(QStringLiteral("matrix"));
        matrix->setGeometry(QRect(20, 40, 491, 281));
        btn_calculate_LU = new QPushButton(Dialog);
        btn_calculate_LU->setObjectName(QStringLiteral("btn_calculate_LU"));
        btn_calculate_LU->setGeometry(QRect(630, 80, 121, 41));
        btn_calculate_LDP = new QPushButton(Dialog);
        btn_calculate_LDP->setObjectName(QStringLiteral("btn_calculate_LDP"));
        btn_calculate_LDP->setGeometry(QRect(830, 80, 121, 41));
        label_determinante = new QLabel(Dialog);
        label_determinante->setObjectName(QStringLiteral("label_determinante"));
        label_determinante->setGeometry(QRect(540, 170, 101, 17));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_determinante->setFont(font);
        label_determinant_value = new QLabel(Dialog);
        label_determinant_value->setObjectName(QStringLiteral("label_determinant_value"));
        label_determinant_value->setGeometry(QRect(630, 170, 67, 17));
        QFont font1;
        font1.setPointSize(10);
        label_determinant_value->setFont(font1);
        matrixL = new QTableWidget(Dialog);
        matrixL->setObjectName(QStringLiteral("matrixL"));
        matrixL->setGeometry(QRect(20, 380, 300, 281));
        matrixU = new QTableWidget(Dialog);
        matrixU->setObjectName(QStringLiteral("matrixU"));
        matrixU->setGeometry(QRect(360, 380, 300, 281));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 131, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 20, 241, 16));
        QFont font3;
        font3.setPointSize(9);
        label_4->setFont(font3);
        matrixP = new QTableWidget(Dialog);
        matrixP->setObjectName(QStringLiteral("matrixP"));
        matrixP->setGeometry(QRect(710, 380, 300, 281));
        label_L = new QLabel(Dialog);
        label_L->setObjectName(QStringLiteral("label_L"));
        label_L->setGeometry(QRect(30, 360, 67, 17));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_L->setFont(font4);
        label_U = new QLabel(Dialog);
        label_U->setObjectName(QStringLiteral("label_U"));
        label_U->setGeometry(QRect(370, 360, 67, 17));
        label_U->setFont(font4);
        label_P = new QLabel(Dialog);
        label_P->setObjectName(QStringLiteral("label_P"));
        label_P->setGeometry(QRect(710, 360, 67, 17));
        label_P->setFont(font4);
        matrix_results = new QTableWidget(Dialog);
        matrix_results->setObjectName(QStringLiteral("matrix_results"));
        matrix_results->setGeometry(QRect(530, 250, 491, 71));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(540, 220, 151, 21));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_8->setFont(font5);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(960, 230, 71, 16));
        label_9->setFont(font3);
        label_timeL = new QLabel(Dialog);
        label_timeL->setObjectName(QStringLiteral("label_timeL"));
        label_timeL->setGeometry(QRect(250, 360, 71, 17));
        label_timeU = new QLabel(Dialog);
        label_timeU->setObjectName(QStringLiteral("label_timeU"));
        label_timeU->setGeometry(QRect(590, 360, 71, 17));
        label_timeD = new QLabel(Dialog);
        label_timeD->setObjectName(QStringLiteral("label_timeD"));
        label_timeD->setGeometry(QRect(940, 360, 71, 17));
        label_totalTime = new QLabel(Dialog);
        label_totalTime->setObjectName(QStringLiteral("label_totalTime"));
        label_totalTime->setGeometry(QRect(810, 200, 81, 17));
        label_totalTime->setFont(font);
        label_totalTime_value = new QLabel(Dialog);
        label_totalTime_value->setObjectName(QStringLiteral("label_totalTime_value"));
        label_totalTime_value->setGeometry(QRect(890, 200, 67, 17));
        label_totalTime_value->setFont(font1);
        label_error = new QLabel(Dialog);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setGeometry(QRect(20, 330, 481, 17));
        label_totalOp_value = new QLabel(Dialog);
        label_totalOp_value->setObjectName(QStringLiteral("label_totalOp_value"));
        label_totalOp_value->setGeometry(QRect(890, 170, 67, 17));
        label_totalOp_value->setFont(font1);
        label_totalOp = new QLabel(Dialog);
        label_totalOp->setObjectName(QStringLiteral("label_totalOp"));
        label_totalOp->setGeometry(QRect(810, 170, 81, 17));
        label_totalOp->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        btn_calculate_LU->setText(QApplication::translate("Dialog", "LU", 0));
        btn_calculate_LDP->setText(QApplication::translate("Dialog", "LDP", 0));
        label_determinante->setText(QApplication::translate("Dialog", "Determinant:", 0));
        label_determinant_value->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Inicial System", 0));
        label_4->setText(QApplication::translate("Dialog", "Fields not completed will be treated as zero", 0));
        label_L->setText(QApplication::translate("Dialog", "L:", 0));
        label_U->setText(QApplication::translate("Dialog", "U:", 0));
        label_P->setText(QApplication::translate("Dialog", "P:", 0));
        label_8->setText(QApplication::translate("Dialog", "Vector Solution:", 0));
        label_9->setText(QApplication::translate("Dialog", "Transposed", 0));
        label_timeL->setText(QString());
        label_timeU->setText(QString());
        label_timeD->setText(QString());
        label_totalTime->setText(QApplication::translate("Dialog", "Total Time:", 0));
        label_totalTime_value->setText(QString());
        label_error->setText(QString());
        label_totalOp_value->setText(QString());
        label_totalOp->setText(QApplication::translate("Dialog", "Total Op:", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
