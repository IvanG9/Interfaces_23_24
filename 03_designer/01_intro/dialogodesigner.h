#ifndef DIALOGODESIGNER_H
#define DIALOGODESIGNER_H

#include "ui_dialogodesigner.h"

class DialogoDesigner : public QDialog, public Ui::DialogoDesigner {

Q_OBJECT

public :

	DialogoDesigner(QWidget * parent = NULL);

public slots:

	void slotIncrementarSpinBox();

};

#endif
