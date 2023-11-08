#include "dedad.h"



DEdad::DEdad(QWidget *parent, Qt::WindowFlags f): QWidget(parent, f) {


 	etiqSup = new QLabel("Edad:");
 	etiqInf = new QLabel("Menor de edad");
 	spinBox = new QSpinBox;
 	btnBorrar = new QPushButton("Borrar");
 	
 	spinBox->setRange(0, 140);
 	spinBox->setValue(17);

 	
 	connect(spinBox, SIGNAL(valueChanged(int)),
				this,	SLOT(slotCompruebaEdad(int)));
							
 	connect(btnBorrar, SIGNAL(clicked()),
				etiqInf,	SLOT(clear()));
	

 	QHBoxLayout *layoutSup = new QHBoxLayout;
 	QVBoxLayout *layoutGeneral = new QVBoxLayout;
 	
 	layoutSup->addWidget(etiqSup);
 	layoutSup->addWidget(spinBox);

	layoutGeneral->addLayout(layoutSup);
 	layoutGeneral->addWidget(etiqInf);
 	layoutGeneral->addWidget(btnBorrar);

 	
 	this->setLayout(layoutGeneral);

}

void DEdad::slotCompruebaEdad(int edad) {
	if (edad >= 18) etiqInf->setText("Mayor de edad");
	else  etiqInf->setText("Menor de edad");


}
