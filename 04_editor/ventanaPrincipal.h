#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QTextEdit>
#include <QLabel>
#include "QAction"
#include <QCloseEvent>
#include <QShowEvent>
#include <dbuscar.h>

class ventanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    ventanaPrincipal(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());

    QTextEdit *editorCentral;
    QMenu *menuArchivo;
    QMenu *menuBuscar;

    QLabel *etiqueta;
    QAction *accionSalir;
    QAction *accionAbrir;
    QAction *accionGuardar;
    QAction *accionEliminar;
    QAction *accionBuscar;

    void createContextMenu();
    void createActions();
    void createMenus();
    void createStatusBar();

    bool documentoModificado;
    
    void closeEvent(QCloseEvent *event);
    void showEvent(QShowEvent *event);

    DBuscar *dBuscar;

public slots:

    void buscarArchivo();
    void abrirArchivo();
    void guardarArchivo();
    void salir();
    void eliminarTexto();
    void textModificado();
    void slotBuscar(QString,QTextDocument::FindFlags);

    
signals:
    void senyalEncontrada(bool);
    
    
    
};
#endif
