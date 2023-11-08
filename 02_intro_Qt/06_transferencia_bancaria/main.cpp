#include <QApplication>

#include "dtransferencia.h"



int main(int argc, char *argv[]) {
  
  	QApplication app(argc, argv);

  	DTransferencia * dTransferencia = new DTransferencia(NULL);
  	dTransferencia->show();

 	return app.exec();
}
