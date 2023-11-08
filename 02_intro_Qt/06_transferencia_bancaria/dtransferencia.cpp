#include "dtransferencia.h"



DTransferencia::DTransferencia(QWidget *parent, Qt::WindowFlags f): 	QDialog(parent, f) {


	labelCuentaDestino = new QLabel("Cuenta destino: ");
	labelCantidad = new QLabel("Cantidad: ");
	labelComision = new QLabel("Comision: 0€");
	
	lineCuentaDestino = new QLineEdit();
	lineCantidad = new QLineEdit();

	btnAceptar = new QPushButton("Aceptar");
	btnCancelar = new QPushButton("Cancelar");
	btnAceptar->setEnabled(false);

 	
 	connect(lineCuentaDestino, SIGNAL(textChanged(QString)),
				this,	SLOT(slotCompruebaCuenta(QString)));
							
connect(lineCantidad, SIGNAL(textChanged(QString)),
				this,	SLOT(slotCalculaComision(QString)));
	

 	QVBoxLayout *layoutIzq = new QVBoxLayout;
 	QVBoxLayout *layoutDer = new QVBoxLayout;
 	QHBoxLayout *layoutCuenta = new QHBoxLayout;
 	QHBoxLayout *layoutCantidad = new QHBoxLayout;
 	QHBoxLayout *layoutGeneral = new QHBoxLayout;
 	
 	layoutCuenta->addWidget(labelCuentaDestino);
 	layoutCuenta->addWidget(lineCuentaDestino);
 	layoutCantidad->addWidget(labelCantidad);
 	layoutCantidad->addWidget(lineCantidad);
 	
 	layoutIzq->addLayout(layoutCuenta);
 	layoutIzq->addLayout(layoutCantidad);
 	layoutIzq->addWidget(labelComision);
 	
 	layoutDer->addWidget(btnAceptar);	 	
 	layoutDer->addWidget(btnCancelar);
 	
	layoutGeneral->addLayout(layoutIzq);
 	layoutGeneral->addLayout(layoutDer);
 

 	
 	this->setLayout(layoutGeneral);

}

void DTransferencia::slotCompruebaCuenta(const QString & cuenta) {
	if (cuenta.size() == 6)
		btnAceptar->setEnabled(true);
	else  btnAceptar->setEnabled(false);

}

void DTransferencia::slotCalculaComision(const QString & cant) {
	
	float comision = cant.toFloat() / 100.0 ;
	QString resultado;
	resultado = QString("Comision: ") +
					QString::number(comision) +
					QString("€");
	labelComision->setText(resultado);
	
	qDebug() << "slotCalculaComision ejecutandose" << resultado;
}






