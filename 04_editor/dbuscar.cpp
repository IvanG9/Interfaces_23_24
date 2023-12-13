#include "dbuscar.h"
#include <QDebug>

DBuscar::DBuscar(QWidget *parent): QDialog(parent){

    setupUi(this);
    
    connect(btnBuscar, SIGNAL(clicked()), this, SLOT(slotBotonBuscar()));

    
}

void DBuscar::slotBotonBuscar(){

    if(CheckAtras->checkState())
    emit senyalBuscar(lineEditBuscar->text(),QTextDocument::FindBackward);
    else
    emit senyalBuscar(lineEditBuscar->text(),QTextDocument::FindFlag);

}

void DBuscar::slotResultadoBusqueda(bool encontrada){
    
    if(!encontrada)
    lineEditBuscar->setText(QString::number(encontrada));
    
}
