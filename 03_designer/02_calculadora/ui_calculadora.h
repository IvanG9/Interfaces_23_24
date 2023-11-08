/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QLineEdit *display;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *btn2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QPushButton *btn0;
    QPushButton *pushButton_5;
    QPushButton *btn3;
    QPushButton *btn1;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *btnMas;
    QPushButton *btnIgual;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(591, 444);
        display = new QLineEdit(Calculadora);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(30, 60, 391, 25));
        widget = new QWidget(Calculadora);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 90, 391, 184));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 4, 2, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        gridLayout->addWidget(btn2, 6, 1, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 7, 2, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        btn0 = new QPushButton(widget);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        gridLayout->addWidget(btn0, 7, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 4, 1, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        gridLayout->addWidget(btn3, 6, 2, 1, 1);

        btn1 = new QPushButton(widget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        gridLayout->addWidget(btn1, 6, 0, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        widget1 = new QWidget(Calculadora);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(430, 90, 82, 181));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnMas = new QPushButton(widget1);
        btnMas->setObjectName(QString::fromUtf8("btnMas"));

        verticalLayout->addWidget(btnMas);

        btnIgual = new QPushButton(widget1);
        btnIgual->setObjectName(QString::fromUtf8("btnIgual"));

        verticalLayout->addWidget(btnIgual);


        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "Dialog", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculadora", "6", nullptr));
        btn2->setText(QCoreApplication::translate("Calculadora", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculadora", "4", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calculadora", ",", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculadora", "7", nullptr));
        btn0->setText(QCoreApplication::translate("Calculadora", "0", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculadora", "5", nullptr));
        btn3->setText(QCoreApplication::translate("Calculadora", "3", nullptr));
        btn1->setText(QCoreApplication::translate("Calculadora", "1", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculadora", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculadora", "8", nullptr));
        btnMas->setText(QCoreApplication::translate("Calculadora", "+", nullptr));
        btnIgual->setText(QCoreApplication::translate("Calculadora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
