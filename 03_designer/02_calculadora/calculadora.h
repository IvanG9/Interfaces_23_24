#ifndef CALCULADORA_H
#define CALCULADORA_H

//A partir del calculadora.ui y dle pr. compilacion aparace este archivo
#include "ui_calculadora.h"
#include <QDialog>
#include <QWidget>

class Calculadora : public QDialog, public Ui::Calculadora{

Q_OBJECT

public: 

    typedef enum {PRIMERO,SEGUNDO} estadoPosible;
    int sumando1,sumando2,total;
    estadoPosible estadoActual;
    
    Calculadora(QWidget * parent = NULL);


public slots:

   void slotDigito();
   void slotBotonMas();
   void slotBotonIgual();

};

#endif
