#ifndef DIALOGOBOTONES_H
#define DIALOGOBOTONES_H

#include <QDialog>

class DialogoBotones : public QDialog
{

    Q_OBJECT

public:
    DialogoBotones(int numeroDeBotones, QWidget *parent = nullptr);
    
signals:
    void signalBotonPulsado(const QString &textoBoton);

public slots:
    void onBotonPulsado();
    void cambiarNombreBoton(int indice, const QString &nuevoNombre);
};

#endif