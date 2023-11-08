#ifndef DPRINCIPAL_H
#define DPRINCIPAL_H



#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

#include "dtransferencia.h"

class DPrincipal : public QDialog {

Q_OBJECT //para declarar cosas que no son C: slots, signals...

public:


	QPushButton * btnLanzarTransferencia;
	DTransferencia * dTransferencia;


	DPrincipal(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
public slots:
	void slotLanzarDialogo();
		
	
} ;

#endif
