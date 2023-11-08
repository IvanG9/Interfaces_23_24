#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QWidget>
#include <QPushButton>


class DEdad : public QWidget {

Q_OBJECT //para declarar cosas que no son C: slots, signals...

public:
	QLabel * etiqSup;
	QLabel * etiqInf;
	QSpinBox *spinBox;
	QPushButton *btnBorrar;


	DEdad(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
	
public slots:
	void slotCompruebaEdad(int edad);
	
} ;
