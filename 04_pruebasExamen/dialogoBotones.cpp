#include "dialogobotones.h"
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QDebug>

DialogoBotones::DialogoBotones(int numeroDeBotones,QWidget * parent) : QDialog(parent){

    QGridLayout *layout = new QGridLayout;

    for (int i = 1; i<= numeroDeBotones; i++){

        QPushButton *button = new QPushButton(QString("Boton %1").arg(i),this);
        layout->addWidget(button, (i - 1) / 5, (i - 1) % 5);
        connect(button, &QPushButton::clicked, this, &DialogoBotones::onBotonPulsado);
    }

    setLayout(layout);
    setWindowTitle("Dialogo de Botones");

}

void DialogoBotones::onBotonPulsado()
{
    QPushButton *botonPulsado = qobject_cast<QPushButton *>(sender());
    if (botonPulsado)
    {
        emit signalBotonPulsado(botonPulsado->text());
    }
}

void DialogoBotones::cambiarNombreBoton(int indice, const QString &nuevoNombre)
{
    /*QPushButton *boton = layout->verticalLayout->itemAt(indice)->widget();
    if (boton)
    {
        boton->setText(nuevoNombre);
        /*emit nombreBotonCambiado(nuevoNombre);
    }*/
}