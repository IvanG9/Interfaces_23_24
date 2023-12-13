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
    QGridLayout *layoutBotones;
    QPushButton *btn6;
    QPushButton *btn2;
    QPushButton *btn4;
    QPushButton *btnsemicolon;
    QPushButton *btn7;
    QPushButton *btn0;
    QPushButton *btn5;
    QPushButton *btn3;
    QPushButton *btn1;
    QPushButton *btn9;
    QPushButton *btn8;
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
        layoutBotones = new QGridLayout(widget);
        layoutBotones->setObjectName(QString::fromUtf8("layoutBotones"));
        layoutBotones->setContentsMargins(0, 0, 0, 0);
        btn6 = new QPushButton(widget);
        btn6->setObjectName(QString::fromUtf8("btn6"));

        layoutBotones->addWidget(btn6, 4, 2, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        layoutBotones->addWidget(btn2, 6, 1, 1, 1);

        btn4 = new QPushButton(widget);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        layoutBotones->addWidget(btn4, 4, 0, 1, 1);

        btnsemicolon = new QPushButton(widget);
        btnsemicolon->setObjectName(QString::fromUtf8("btnsemicolon"));

        layoutBotones->addWidget(btnsemicolon, 7, 2, 1, 1);

        btn7 = new QPushButton(widget);
        btn7->setObjectName(QString::fromUtf8("btn7"));

        layoutBotones->addWidget(btn7, 0, 0, 1, 1);

        btn0 = new QPushButton(widget);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        layoutBotones->addWidget(btn0, 7, 1, 1, 1);

        btn5 = new QPushButton(widget);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        layoutBotones->addWidget(btn5, 4, 1, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        layoutBotones->addWidget(btn3, 6, 2, 1, 1);

        btn1 = new QPushButton(widget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        layoutBotones->addWidget(btn1, 6, 0, 1, 1);

        btn9 = new QPushButton(widget);
        btn9->setObjectName(QString::fromUtf8("btn9"));

        layoutBotones->addWidget(btn9, 0, 2, 1, 1);

        btn8 = new QPushButton(widget);
        btn8->setObjectName(QString::fromUtf8("btn8"));

        layoutBotones->addWidget(btn8, 0, 1, 1, 1);

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
        btn6->setText(QCoreApplication::translate("Calculadora", "6", nullptr));
        btn2->setText(QCoreApplication::translate("Calculadora", "2", nullptr));
        btn4->setText(QCoreApplication::translate("Calculadora", "4", nullptr));
        btnsemicolon->setText(QCoreApplication::translate("Calculadora", ",", nullptr));
        btn7->setText(QCoreApplication::translate("Calculadora", "7", nullptr));
        btn0->setText(QCoreApplication::translate("Calculadora", "0", nullptr));
        btn5->setText(QCoreApplication::translate("Calculadora", "5", nullptr));
        btn3->setText(QCoreApplication::translate("Calculadora", "3", nullptr));
        btn1->setText(QCoreApplication::translate("Calculadora", "1", nullptr));
        btn9->setText(QCoreApplication::translate("Calculadora", "9", nullptr));
        btn8->setText(QCoreApplication::translate("Calculadora", "8", nullptr));
        btnMas->setText(QCoreApplication::translate("Calculadora", "+", nullptr));
        btnIgual->setText(QCoreApplication::translate("Calculadora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
