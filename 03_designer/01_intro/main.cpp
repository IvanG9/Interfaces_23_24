#include <QApplication>

#include "dialogodesigner.h"

int main(int argc, char *argv[]) {
  
  	QApplication app(argc, argv);

  	DialogoDesigner * dPrincipal = new DialogoDesigner(NULL);
  	dPrincipal->show();

 	return app.exec();
}
