#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H
#include <QMainWindow>
#include <QPaintEvent>
#include <bola.h>
#include <QVector>
#include <QMenu>
#include <QAction>
#include <QKeyEvent>

class MainWindow: public QMainWindow{
Q_OBJECT
public:

	MainWindow(QWidget * parent = NULL);
	void paintEvent(QPaintEvent* evento);
    QVector<Bola*> bolas;
    Bola *bolaJugador;
    static const int NUMBOLAS = 20; 
    
    QMenu *menuBolas;
    QAction *accionGuardar;
    QAction *accionCargar;
    QAction *accionCargarPartida;
    
    void crearMenu();
    void crearAcciones();
    void crearBolas();
    void keyPressEvent(QKeyEvent *);
    
public slots:
void slotTemporizador();
void slotCargarPartida();
void slotGuardarPartida();


};

#endif

