#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
 {
 	QApplication *app = new QApplication(argc, argv);
 	QPushButton *button = new QPushButton("Quit");
 	QObject::connect(button, SIGNAL(clicked()),
                  	app, SLOT(quit()));
 	button->show();
	return app->exec();
 }


