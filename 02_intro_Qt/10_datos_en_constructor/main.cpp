#include <QApplication>

#include "dprincipal.h"



int main(int argc, char *argv[]) {
  
  	QApplication app(argc, argv);

  	DPrincipal * dPrincipal = new DPrincipal(NULL);
  	dPrincipal->show();

 	return app.exec();
}
