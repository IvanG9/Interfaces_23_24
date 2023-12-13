#include <QApplication>

#include "ventanaPrincipal.h"

int main(int argc, char *argv[])
{

	QApplication app(argc, argv);
	ventanaPrincipal *editor = new ventanaPrincipal();
	editor->show();

	return app.exec();
}
