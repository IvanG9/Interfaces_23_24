#ifndef DBUSCAR_H
#define DBUSCAR_H
#include "ui_dBuscar.h"

#include <QDialog>
#include <QVector>
#include <QHBoxLayout>

//Nombre de la clase de QDesigner "Ui:DBuscar"

class DBuscar : public QDialog, public Ui::DBuscar {
 	
 Q_OBJECT

 public:
 	DBuscar(QWidget *parent = NULL);

 public slots:
 	void slotBotonBuscar();
 	void slotResultadoBusqueda(bool);

 signals:
    void senyalBuscar(QString,QTextDocument::FindFlags);


};

#endif

