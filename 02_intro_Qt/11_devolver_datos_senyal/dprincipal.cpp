#include "dprincipal.h"



DPrincipal::DPrincipal(QWidget *parent, Qt::WindowFlags f): QDialog(parent, f) {

	btnLanzarTransferencia = new QPushButton("Lanzar transferencia");
	etiqResultado = new QLabel("");
	
	
 	
 	connect(btnLanzarTransferencia, SIGNAL(clicked()),
				this,	SLOT(slotLanzarDialogo()));
 	connect(etiqResultado, SIGNAL(señalTransferenciaAceptada(const QString &, float)),
				this,	SLOT(slotTransferenciaAceptada(const QString &, float)));
				

 
 	QHBoxLayout *layoutGeneral = new QHBoxLayout;
	
 	layoutGeneral->addWidget(btnLanzarTransferencia);
 	layoutGeneral->addWidget(etiqResultado);
 	
 	dTransferencia = NULL;
 	
 	this->setLayout(layoutGeneral);

}

void DPrincipal::slotLanzarDialogo() {
	if (dTransferencia == NULL) {
	
  		dTransferencia = new DTransferencia(listaCuentas);
  		
  		
  		connect(dTransferencia, SIGNAL(accepted()),
				this, SLOT (slotTransferenciaAceptada()));
				
		connect(dTransferencia, SIGNAL(rejected()),
			this, SLOT (slotTransferenciaCancelada()));
  	}
  	dTransferencia->show();

}

void DPrincipal::slotTransferenciaAceptada() {
	etiqResultado->setText("Transferencia aceptada.");
	
	etiqResultado->setText(dTransferencia->labelComision->text());

}
void DPrincipal::slotTransferenciaCancelada() {
		etiqResultado->setText("Transferencia rechazada.");
	
}


void DPrincipal::slotTransferenciaAceptada(const QString & t, float cantidad) {
	QString resultado = QString("Cuenta: ") + t +
	
								QString(" Cantidad: ") +
								QString::number(cantidad) +
								QString("€");

	etiqResultado->setText(resultado);


}
 /*
void DPrincipal::slotActualizarComision(cons QString & t) {

	

}
*/





