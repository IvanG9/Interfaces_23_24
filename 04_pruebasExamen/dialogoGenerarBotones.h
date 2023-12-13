#ifndef DIALOGOGENERARBOTONES_H
#define DIALOGOGENERARBOTONES_H

#include "ui_dialogoGenerarBotones.h"
#include "dialogobotones.h"
#include <QDialog>
#include <QWidget>

class DialogoGenerarBotones : public QDialog, public Ui::DialogoGenerarBotones
{
public:
    DialogoGenerarBotones(QWidget *parent = NULL);

public slots:
    void mostrarDialogoConBotones();
    void onBotonDialogoBotonesPulsado(const QString &textoBoton);

public:
    DialogoBotones *dialogoBotones;
};
#endif