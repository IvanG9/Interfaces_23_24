/********************************************************************************
** Form generated from reading UI file 'dBuscar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBUSCAR_H
#define UI_DBUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DBuscar
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditBuscar;
    QPushButton *btnBuscar;
    QCheckBox *CheckAtras;

    void setupUi(QDialog *DBuscar)
    {
        if (DBuscar->objectName().isEmpty())
            DBuscar->setObjectName(QString::fromUtf8("DBuscar"));
        DBuscar->resize(382, 286);
        buttonBox = new QDialogButtonBox(DBuscar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEditBuscar = new QLineEdit(DBuscar);
        lineEditBuscar->setObjectName(QString::fromUtf8("lineEditBuscar"));
        lineEditBuscar->setGeometry(QRect(20, 20, 251, 25));
        btnBuscar = new QPushButton(DBuscar);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(280, 20, 89, 25));
        CheckAtras = new QCheckBox(DBuscar);
        CheckAtras->setObjectName(QString::fromUtf8("CheckAtras"));
        CheckAtras->setGeometry(QRect(20, 50, 92, 23));

        retranslateUi(DBuscar);
        QObject::connect(buttonBox, SIGNAL(accepted()), DBuscar, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DBuscar, SLOT(reject()));

        QMetaObject::connectSlotsByName(DBuscar);
    } // setupUi

    void retranslateUi(QDialog *DBuscar)
    {
        DBuscar->setWindowTitle(QCoreApplication::translate("DBuscar", "Dialog", nullptr));
        btnBuscar->setText(QCoreApplication::translate("DBuscar", "Buscar", nullptr));
        CheckAtras->setText(QCoreApplication::translate("DBuscar", "Buscar Atras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBuscar: public Ui_DBuscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBUSCAR_H
