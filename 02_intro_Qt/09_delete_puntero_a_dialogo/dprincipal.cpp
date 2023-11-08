#include "dprincipal.h"



DPrincipal::DPrincipal(QWidget *parent, Qt::WindowFlags f): QDialog(parent, f) {

	btnLanzarTransferencia = new QPushButton("Lanzar transferencia");
	etiqResultado = new QLabel("");
	
	
	
 	
 	connect(btnLanzarTransferencia, SIGNAL(clicked()),
				this,	SLOT(slotLanzarDialogo()));
				

 
 	QHBoxLayout *layoutGeneral = new QHBoxLayout;
	
 	layoutGeneral->addWidget(btnLanzarTransferencia);
 	layoutGeneral->addWidget(etiqResultado);
 	
 	dTransferencia = NULL;
 	
 	this->setLayout(layoutGeneral);

}

void DPrincipal::slotLanzarDialogo() {
	if (dTransferencia == NULL) {
	
  		dTransferencia = new DTransferencia(NULL);
  		//dTransferencia->setAttribute(Qt::WA_DeleteOnClose);
  		
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
	
	delete dTransferencia;
	dTransferencia = NULL;
}
void DPrincipal::slotTransferenciaCancelada() {
		etiqResultado->setText("Transferencia rechazada.");
		delete dTransferencia;
		dTransferencia = NULL;
}
 /*
void DPrincipal::slotActualizarComision(cons QString & t) {

	

}
*/





