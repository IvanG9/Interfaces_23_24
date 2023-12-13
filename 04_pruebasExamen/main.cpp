#include <QApplication>

#include "dialogoGenerarBotones.h"

int main(int argc, char *argv[])
{

	QApplication app(argc, argv);

	DialogoGenerarBotones *dialogo = new DialogoGenerarBotones();
	dialogo->show();

	return app.exec();
}
