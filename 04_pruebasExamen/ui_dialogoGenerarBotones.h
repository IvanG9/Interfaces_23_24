/********************************************************************************
** Form generated from reading UI file 'dialogoGenerarBotones.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOGENERARBOTONES_H
#define UI_DIALOGOGENERARBOTONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogoGenerarBotones
{
public:
    QLineEdit *lineEditBotones;
    QPushButton *botonGenerer;
    QLineEdit *lineEditInfoBoton;
    QPushButton *botonCambiar;

    void setupUi(QDialog *DialogoGenerarBotones)
    {
        if (DialogoGenerarBotones->objectName().isEmpty())
            DialogoGenerarBotones->setObjectName(QString::fromUtf8("DialogoGenerarBotones"));
        DialogoGenerarBotones->resize(400, 300);
        lineEditBotones = new QLineEdit(DialogoGenerarBotones);
        lineEditBotones->setObjectName(QString::fromUtf8("lineEditBotones"));
        lineEditBotones->setGeometry(QRect(40, 40, 191, 25));
        botonGenerer = new QPushButton(DialogoGenerarBotones);
        botonGenerer->setObjectName(QString::fromUtf8("botonGenerer"));
        botonGenerer->setGeometry(QRect(250, 40, 121, 25));
        lineEditInfoBoton = new QLineEdit(DialogoGenerarBotones);
        lineEditInfoBoton->setObjectName(QString::fromUtf8("lineEditInfoBoton"));
        lineEditInfoBoton->setGeometry(QRect(40, 80, 191, 31));
        botonCambiar = new QPushButton(DialogoGenerarBotones);
        botonCambiar->setObjectName(QString::fromUtf8("botonCambiar"));
        botonCambiar->setGeometry(QRect(250, 80, 121, 31));

        retranslateUi(DialogoGenerarBotones);

        QMetaObject::connectSlotsByName(DialogoGenerarBotones);
    } // setupUi

    void retranslateUi(QDialog *DialogoGenerarBotones)
    {
        DialogoGenerarBotones->setWindowTitle(QCoreApplication::translate("DialogoGenerarBotones", "Dialogo Generar Botones", nullptr));
        botonGenerer->setText(QCoreApplication::translate("DialogoGenerarBotones", "Generar Botones", nullptr));
        botonCambiar->setText(QCoreApplication::translate("DialogoGenerarBotones", "Cambiar Texto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoGenerarBotones: public Ui_DialogoGenerarBotones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOGENERARBOTONES_H
