#include <QApplication>

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QSlider>
#include <QSpinBox>
#include<QLCDNumber>

  int main(int argc, char *argv[])
  {
  	QApplication app(argc, argv);

  	QWidget *window = new QWidget;
  	window->setWindowTitle("Escriu i borra");

 	QLineEdit * lineEdit = new QLineEdit(window);
 	QLabel *label = new QLabel();
 	
 	QPushButton *buttonBorrar = new QPushButton("Borra-ho tot!");
 	
 	QObject::connect(buttonBorrar, SIGNAL(clicked() ),
                  	lineEdit, SLOT(clear()) );
	QObject::connect(buttonBorrar, SIGNAL(clicked() ),
							label, SLOT(clear()) );
							
	QObject::connect(lineEdit, SIGNAL(textEdited(QString)),
							label, SLOT(setText(QString)) );	
 	
 	
 	QSpinBox *spinBox = new QSpinBox;
 	QSlider *slider = new QSlider(Qt::Horizontal);
 	spinBox->setRange(0, 100000);
 	slider->setRange(0, 100000);
 	
 	
 	QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                  	slider, SLOT(setValue(int)));
 	QObject::connect(slider, SIGNAL(valueChanged(int)),
                  	spinBox, SLOT(setValue(int)));
 	spinBox->setValue(0);
 	
	QLCDNumber * pantallaLCD = new QLCDNumber();
	QPushButton *btnOct = new QPushButton("Octal");
	QPushButton *btnDec = new QPushButton("Hexadecimal");
	
	QObject::connect(btnOct, SIGNAL(clicked()),
                  	pantallaLCD, SLOT(setOctMode()));
	QObject::connect(btnDec, SIGNAL(clicked()),
                  	pantallaLCD, SLOT(setHexMode()));
 	QObject::connect(slider, SIGNAL(valueChanged(int)),
                  	pantallaLCD, SLOT(display(int)));
	
	
 	QVBoxLayout *layoutSupIzq = new QVBoxLayout;
 	QVBoxLayout *layoutSupDer = new QVBoxLayout;
 	QHBoxLayout *layoutSup = new QHBoxLayout;
 	QHBoxLayout *layoutInf = new QHBoxLayout;
 	QVBoxLayout *layoutGeneral = new QVBoxLayout;
 	
 	layoutSupIzq->addWidget(lineEdit);
 	layoutSupIzq->addWidget(label);
 	layoutSupIzq->addWidget(buttonBorrar);
 	
 	layoutSupDer->addWidget(spinBox);
 	layoutSupDer->addWidget(slider);
 	
 	layoutInf->addWidget(pantallaLCD);
 	layoutInf->addWidget(btnOct);
 	layoutInf->addWidget(btnDec);
 
  	layoutSup->addLayout(layoutSupIzq);	
 	layoutSup->addLayout(layoutSupDer);

 	
 	layoutGeneral->addLayout(layoutSup);
 	layoutGeneral->addLayout(layoutInf);
 	
 	window->setLayout(layoutGeneral);

 	window->show();

 	return app.exec();
 }
