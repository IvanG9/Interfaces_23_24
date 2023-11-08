#include <QApplication>
#include <QHBoxLayout>

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>


  int main(int argc, char *argv[])
  {
  	QApplication app(argc, argv);

  	QWidget *window = new QWidget;
  	window->setWindowTitle("Escriu i borra");

 	QLineEdit * lineEdit = new QLineEdit(window);
 	QLabel *label = new QLabel();
 	
 	QPushButton *button = new QPushButton("Borra-ho tot!");
 	

 	QObject::connect(button, SIGNAL(clicked() ),
                  	lineEdit, SLOT(clear()) );
	QObject::connect(button, SIGNAL(clicked() ),
							label, SLOT(clear()) );
							
	QObject::connect(lineEdit, SIGNAL(textEdited(QString)),
							label, SLOT(setText(QString)) );	
	
	
 	QVBoxLayout *layout = new QVBoxLayout;
 	layout->addWidget(lineEdit);
 	layout->addWidget(label);
 	layout->addWidget(button);
 	window->setLayout(layout);

 	window->show();

 	return app.exec();
 }
