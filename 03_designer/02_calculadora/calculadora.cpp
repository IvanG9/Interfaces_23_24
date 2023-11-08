#include "calculadora.h"

Calculadora::Calculadora(QWidget * parent) : QDialog(parent) {

  setupUi(this);
    
    estadoActual = PRIMERO;
    
    connect(btnMas, SIGNAL(clicked()),this, SLOT(slotBotonMas()));
    connect(btnIgual, SIGNAL(clicked()),this, SLOT(slotBotonIgual()));
    connect(btn1, SIGNAL(clicked()),this, SLOT(slotDigito()));
    connect(btn2, SIGNAL(clicked()),this, SLOT(slotDigito()));
    connect(btn3, SIGNAL(clicked()),this, SLOT(slotDigito()));

  }
    void Calculadora::slotDigito(){
    
         QObject * objectoCulpable = sender();
         QPushButton * botonCulpable;    
         botonCulpable = qobject_cast<QPushButton*>(objectoCulpable);
         QString textoBoton = botonCulpable->text();
         display->setText(textoBoton);

     };
   
    

    void Calculadora::slotBotonMas(){
    
        if(estadoActual == PRIMERO){
         sumando1 = display->text().toInt();
         display->setText(NULL);
         estadoActual = SEGUNDO;
        }
            
     };
     
     void Calculadora::slotBotonIgual(){
        if(estadoActual == SEGUNDO){
           sumando2 = display->text().toInt();
           total = sumando1 + sumando2;
           display->setText(QString::number(total));
           estadoActual = PRIMERO;
        }
     };

