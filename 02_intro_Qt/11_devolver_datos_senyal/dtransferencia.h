#ifndef DTRANSFERENCIA_H
#define DTRANSFERENCIA_H

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStringList>
#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

#include <QComboBox>

class DTransferencia : public QDialog {

Q_OBJECT //para declarar cosas que no son C: slots, signals...

public:
	QLabel * labelCuentaDestino;
	QLabel * labelCantidad;
	QLabel * labelComision;
	
	QComboBox * cbCuentaDestino;
	QLineEdit * lineCantidad;

	QPushButton * btnAceptar;
	QPushButton * btnCancelar;


	DTransferencia(QStringList lista, QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
public slots:
	void slotCompruebaCuenta(const QString &);
	void slotCalculaComision(const QString &);
	void slotAceptar();
	
signals:
	void señalTransferenciaAceptada(QString &, float);
	
} ;
#endif
