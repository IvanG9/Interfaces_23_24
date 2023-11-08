/********************************************************************************
** Form generated from reading UI file 'dialogodesigner.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGODESIGNER_H
#define UI_DIALOGODESIGNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogoDesigner
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnIncrementar;
    QPushButton *btnDecrementar;
    QGroupBox *groupBox;
    QRadioButton *rbUnidades;
    QRadioButton *rbDecenas;
    QSpinBox *spinBoxCantidad;

    void setupUi(QDialog *DialogoDesigner)
    {
        if (DialogoDesigner->objectName().isEmpty())
            DialogoDesigner->setObjectName(QString::fromUtf8("DialogoDesigner"));
        DialogoDesigner->resize(507, 374);
        buttonBox = new QDialogButtonBox(DialogoDesigner);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btnIncrementar = new QPushButton(DialogoDesigner);
        btnIncrementar->setObjectName(QString::fromUtf8("btnIncrementar"));
        btnIncrementar->setGeometry(QRect(70, 50, 80, 25));
        btnDecrementar = new QPushButton(DialogoDesigner);
        btnDecrementar->setObjectName(QString::fromUtf8("btnDecrementar"));
        btnDecrementar->setGeometry(QRect(240, 50, 80, 25));
        groupBox = new QGroupBox(DialogoDesigner);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 100, 120, 161));
        rbUnidades = new QRadioButton(groupBox);
        rbUnidades->setObjectName(QString::fromUtf8("rbUnidades"));
        rbUnidades->setGeometry(QRect(20, 50, 96, 23));
        rbUnidades->setChecked(true);
        rbDecenas = new QRadioButton(groupBox);
        rbDecenas->setObjectName(QString::fromUtf8("rbDecenas"));
        rbDecenas->setGeometry(QRect(10, 100, 96, 23));
        spinBoxCantidad = new QSpinBox(DialogoDesigner);
        spinBoxCantidad->setObjectName(QString::fromUtf8("spinBoxCantidad"));
        spinBoxCantidad->setGeometry(QRect(210, 110, 141, 26));

        retranslateUi(DialogoDesigner);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoDesigner, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoDesigner, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogoDesigner);
    } // setupUi

    void retranslateUi(QDialog *DialogoDesigner)
    {
        DialogoDesigner->setWindowTitle(QCoreApplication::translate("DialogoDesigner", "Dialog", nullptr));
        btnIncrementar->setText(QCoreApplication::translate("DialogoDesigner", "Incrementar", nullptr));
        btnDecrementar->setText(QCoreApplication::translate("DialogoDesigner", "Decrementar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogoDesigner", "GroupBox", nullptr));
        rbUnidades->setText(QCoreApplication::translate("DialogoDesigner", "Unidades", nullptr));
        rbDecenas->setText(QCoreApplication::translate("DialogoDesigner", "Decenas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoDesigner: public Ui_DialogoDesigner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGODESIGNER_H
