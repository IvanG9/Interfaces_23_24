#ifndef DPRINCIPAL_H
#define DPRINCIPAL_H



#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QStringList>
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
	QLabel * etiqResultado;
	QStringList listaCuentas = {"111111","222222","333333"};;


	DPrincipal(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
public slots:
	void slotLanzarDialogo();
	void slotTransferenciaAceptada();
	void slotTransferenciaCancelada();
	void slotTransferenciaAceptada(const QString &, float);
} ;

#endif
