#ifndef DTRANSFERENCIA_H
#define DTRANSFERENCIA_H

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

class DTransferencia : public QDialog {

Q_OBJECT //para declarar cosas que no son C: slots, signals...

public:
	QLabel * labelCuentaDestino;
	QLabel * labelCantidad;
	QLabel * labelComision;
	
	QLineEdit * lineCuentaDestino;
	QLineEdit * lineCantidad;

	QPushButton * btnAceptar;
	QPushButton * btnCancelar;


	DTransferencia(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
public slots:
	void slotCompruebaCuenta(const QString &);
	void slotCalculaComision(const QString &);
	
} ;
#endif
