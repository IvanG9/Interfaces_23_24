#include "dtransferencia.h"



DTransferencia::DTransferencia( QStringList lista, QWidget *parent, Qt::WindowFlags f): 	QDialog(parent, f) {


	labelCuentaDestino = new QLabel("Cuenta destino: ");
	labelCantidad = new QLabel("Cantidad: ");
	labelComision = new QLabel("Comision: 0€");
	
	cbCuentaDestino = new QComboBox();
	lineCantidad = new QLineEdit();


	btnAceptar = new QPushButton("Aceptar");
	btnCancelar = new QPushButton("Cancelar");
	//btnAceptar->setEnabled(false);

	for (int i = 0; i < lista.size(); i++) {
		cbCuentaDestino->addItem(lista[i]);
	}
	
							
	connect(lineCantidad, SIGNAL(textChanged(QString)),
				this,	SLOT(slotCalculaComision(QString)));
	
	connect(btnAceptar, SIGNAL(clicked()),
				this,	SLOT(slotAceptar()));
				
	connect(btnCancelar, SIGNAL(clicked()),
				this,	SLOT(reject()));
				
	resize(400, 100);
				
				
 	QVBoxLayout *layoutIzq = new QVBoxLayout;
 	QVBoxLayout *layoutDer = new QVBoxLayout;
 	QHBoxLayout *layoutCuenta = new QHBoxLayout;
 	QHBoxLayout *layoutCantidad = new QHBoxLayout;
 	QHBoxLayout *layoutGeneral = new QHBoxLayout;
 	
 	layoutCuenta->addWidget(labelCuentaDestino);
 	layoutCuenta->addWidget(cbCuentaDestino);
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
	
	/*
	QString cadDestino = leDestino->text();
	//expresions regulars
	
	
	
*/
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

void DTransferencia::slotAceptar() {

	qDebug() << "Has aceptado la transferencia de la cuenta" << cbCuentaDestino->currentText() << "\nCantidad transferida: " << lineCantidad->text() << "€" << labelComision->text();
	accept(); //tanca el dialogo
}






