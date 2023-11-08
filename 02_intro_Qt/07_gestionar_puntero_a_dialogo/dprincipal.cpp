#include "dprincipal.h"



DPrincipal::DPrincipal(QWidget *parent, Qt::WindowFlags f): 	QDialog(parent, f) {

	btnLanzarTransferencia = new QPushButton("Lanzar transferencia");

 	
 	connect(btnLanzarTransferencia, SIGNAL(clicked()),
				this,	SLOT(slotLanzarDialogo()));

 
 	QHBoxLayout *layoutGeneral = new QHBoxLayout;
	
 	layoutGeneral->addWidget(btnLanzarTransferencia);
 	
 	dTransferencia = NULL;
 	
 	this->setLayout(layoutGeneral);

}

void DPrincipal::slotLanzarDialogo() {
	if (dTransferencia == NULL)
  		dTransferencia = new DTransferencia();
  	dTransferencia->show();

}






