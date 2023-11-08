#include "dialogodesigner.h"

DialogoDesigner::DialogoDesigner(QWidget * parent): QDialog(parent) {
	
	setupUi(this);
	
	connect(btnIncrementar, SIGNAL(clicked()),
				this, SLOT(slotIncrementarSpinBox()));
	
}


void DialogoDesigner::slotIncrementarSpinBox() {
	int cant = spinBoxCantidad->value();
	if (rbUnidades->isChecked()) {
		spinBoxCantidad->setValue(cant + 1);
	
	} else {
	
		spinBoxCantidad->setValue(cant + 10);
	}

}
