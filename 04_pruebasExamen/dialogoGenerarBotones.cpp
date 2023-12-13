#include "dialogoGenerarBotones.h"
#include "QDebug"

DialogoGenerarBotones::DialogoGenerarBotones(QWidget *parent) : QDialog(parent)
{
    
    setupUi(this);
    dialogoBotones = nullptr;
    connect(botonGenerer, &QPushButton::clicked, this, &DialogoGenerarBotones::mostrarDialogoConBotones);
}

void DialogoGenerarBotones::mostrarDialogoConBotones()
{

    bool ok;
    int numeroDeBotones = lineEditBotones->text().toInt(&ok);

    if (ok)
    {
        if (dialogoBotones)
        {
            dialogoBotones->deleteLater();
        }

        dialogoBotones = new DialogoBotones(numeroDeBotones, this);
        connect(dialogoBotones, &DialogoBotones::signalBotonPulsado, this, &DialogoGenerarBotones::onBotonDialogoBotonesPulsado);
        dialogoBotones->show();
    }else{
        qDebug() << "Ingrese un muero valido";
    }
}

void DialogoGenerarBotones::onBotonDialogoBotonesPulsado(const QString &textoBoton)
{
    lineEditInfoBoton->setText(textoBoton);
}
