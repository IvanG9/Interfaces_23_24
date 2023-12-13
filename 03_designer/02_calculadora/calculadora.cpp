#include "calculadora.h"

Calculadora::Calculadora(QWidget *parent) : QDialog(parent)
{

   setupUi(this);

   estadoActual = PRIMERO;
   
 for (int i = 0; i < layoutBotones->count(); i++) {
 
    QLayoutItem *item = layoutBotones->itemAt(i);
    QWidget * uidchet = item->widget();
    QPushButton * botoncito = qobject_cast<QPushButton*>(uidchet);
    
   connect(
        botoncito,
        SIGNAL(clicked()),
        this,
        SLOT(slotDigito())
    );
 
    /*
    connect(
        layoutBotones->itemAt(i)->widget(),
        SIGNAL(clicked()),
        this,
        SLOT(slotDigito())
    );
    
    */
    }

    connect(btnMas, SIGNAL(clicked()), this, SLOT(slotBotonMas()));
    connect(btnIgual, SIGNAL(clicked()), this, SLOT(slotBotonIgual()));
}

void Calculadora::slotDigito()
{

   QObject *objectoCulpable = sender();
   QPushButton *botonCulpable;
   botonCulpable = qobject_cast<QPushButton *>(objectoCulpable);
   QString textoBoton = botonCulpable->text();
   display->setText(display->text() + textoBoton);
};

void Calculadora::slotBotonMas()
{

   if (estadoActual == PRIMERO)
   {
      sumando1 = display->text().toInt();
      display->setText(NULL);
      estadoActual = SEGUNDO;
   }
};

void Calculadora::slotBotonIgual()
{
   if (estadoActual == SEGUNDO)
   {
      sumando2 = display->text().toInt();
      total = sumando1 + sumando2;
      display->setText(QString::number(total));
      estadoActual = PRIMERO;
   }
};
