#include "ventanaPrincipal.h"
#include "QIcon"
#include "QAction"
#include "QMenu"
#include "QMenuBar"
#include <QApplication>
#include <QKeySequence>
#include <QToolBar>
#include <QLabel>
#include <QComboBox>
#include <QStatusBar>
#include <QString>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QTextBlock>
#include <QTextDocument>

ventanaPrincipal::ventanaPrincipal(QWidget *parent, Qt::WindowFlags f)
    : QMainWindow(parent, f)
{
    editorCentral = new QTextEdit;
    setCentralWidget(editorCentral);

    etiqueta = new QLabel("Editor listo");

    setWindowIcon(QIcon("./images/icono.png"));
    resize(800, 600);

    dBuscar = NULL;

    createActions();
    createMenus();
    createContextMenu();
    createStatusBar();

    documentoModificado = false;

    connect(editorCentral, SIGNAL(textChanged()), this, SLOT(textModificado()));
}


void ventanaPrincipal::showEvent(QShowEvent *event)
{
   
    editorCentral->selectAll();

}


void ventanaPrincipal::closeEvent(QCloseEvent *event)
 {
    int respuesta;

    if (documentoModificado)
    {
        respuesta = QMessageBox::warning(this, "Fichero Modificado", "¿Quieres continuar?", QMessageBox::Ok | QMessageBox::Cancel);
        if (respuesta == QMessageBox::Ok)
        {
            editorCentral->clear();
            documentoModificado = false;
        }   
        if (respuesta == QMessageBox::Cancel)
                   event->ignore();
    }else{
        event->ignore();
    }
 }

void ventanaPrincipal::createActions()
{
    accionSalir = new QAction("Salir", this);
    accionSalir->setIcon(QIcon("./images/exit.png"));
    accionSalir->setShortcut(QKeySequence("Ctrl+q"));

    connect(accionSalir, SIGNAL(triggered()), this, SLOT(close()));

    accionAbrir = new QAction("Abrir", this);
    accionAbrir->setIcon(QIcon("./images/entrar.png"));
    accionAbrir->setShortcut(QKeySequence("Ctrl+a"));

    connect(accionAbrir, SIGNAL(triggered()), this, SLOT(abrirArchivo()));

    accionGuardar = new QAction("Guardar", this);
    accionGuardar->setIcon(QIcon("./images/guardar.png"));
    accionGuardar->setShortcut(QKeySequence("Ctrl+s"));

    connect(accionGuardar, SIGNAL(triggered()), this, SLOT(guardarArchivo()));

    accionEliminar = new QAction("Eliminar", this);
    accionEliminar->setIcon(QIcon("./images/guardar.png"));
    accionEliminar->setShortcut(QKeySequence("Ctrl+d"));

    connect(accionEliminar, SIGNAL(triggered()), this, SLOT(eliminarTexto()));
    
    accionBuscar = new QAction("Buscar Palabra",this);
    accionEliminar->setShortcut(QKeySequence("Ctrl+f"));
    connect(accionBuscar, SIGNAL(triggered()), this, SLOT(buscarArchivo()));
    
    
    
}

void ventanaPrincipal::createMenus()
{
    menuArchivo = menuBar()->addMenu("Archivo");
    menuArchivo->addAction(accionSalir);
    menuArchivo->addAction(accionAbrir);
    menuArchivo->addAction(accionGuardar);
    menuArchivo->addAction(accionEliminar);

    menuBuscar = menuBar()->addMenu("Buscar");
    menuBuscar->addAction(accionBuscar);    
    
    menuBar()->addMenu(menuArchivo);
    menuBar()->addMenu(menuBuscar);
    
    
    QToolBar *barraPrincipal;
    barraPrincipal = addToolBar("Principal");
    barraPrincipal->addAction(accionSalir);
    barraPrincipal->addAction(accionAbrir);
    barraPrincipal->addAction(accionGuardar);
    barraPrincipal->addAction(accionEliminar);
}

void ventanaPrincipal::createContextMenu()
{

    editorCentral->addAction(accionSalir);
    editorCentral->addAction(accionAbrir);
    editorCentral->addAction(accionGuardar);
    editorCentral->addAction(accionEliminar);
    editorCentral->setContextMenuPolicy(Qt::ActionsContextMenu);
}

void ventanaPrincipal::createStatusBar()
{

    QComboBox *combo = new QComboBox();
    combo->addItem("1");
    combo->addItem("2");

    statusBar()->addWidget(etiqueta);
    statusBar()->addWidget(combo);
}

void ventanaPrincipal::salir()
{
    qApp->quit();
}

void ventanaPrincipal::abrirArchivo()
{
    
    int respuesta;

    if (!documentoModificado)
    {
        respuesta = QMessageBox::warning(this, "Fichero Modificado", "¿Quieres continuar?", QMessageBox::Ok | QMessageBox::Cancel);

        if (respuesta == QMessageBox::Ok)
        {
           QString ruta =   QFileDialog::getOpenFileName(this,
                        QString("abrir archivo para editar"),
                        QString("Ficheros de texto (*.txt)")                    
                        );
                            
            if(ruta.isEmpty())
            return;
            
            QFile fichero(ruta);
            
            if(!   fichero.open(QIODevice::ReadOnly))
            return;
            
            QTextStream stream(&fichero);
            
            QString linea;  
            
            while(!stream.atEnd()){
                linea = stream.readLine();
                editorCentral->append(linea);
            }
        }
        if (respuesta == QMessageBox::Cancel)
        {
            editorCentral->clear();
            documentoModificado = false;
            etiqueta->setText("Has cancelado la apertura");
        }
    }
    else
    {
        etiqueta->setText("No puedo abrirlo guarda");
    }
    
}

void ventanaPrincipal::guardarArchivo()
{

    //NO FUNCIONA
    QString ruta =   QFileDialog::getSaveFileName(this,"","(*.*)");        

    QFile fichero(ruta);
        
    if(!fichero.open(QIODevice::WriteOnly))
        return;
      
    QTextStream flujo(&fichero);
    
    for(int i=0; i < editorCentral->document()->blockCount();i++){
        QString cadena;
        cadena = editorCentral->document()->findBlockByNumber(i).text();
        qDebug() << cadena;
        flujo << cadena << '\n' << Qt::flush;
    }
    
    fichero.close();
    etiqueta->setText("Guardado...");
    documentoModificado = false;
}

void ventanaPrincipal::textModificado()
{
    documentoModificado = true;
}

void ventanaPrincipal::buscarArchivo()
{
   if (dBuscar == NULL) {
   
        dBuscar = new DBuscar();
        dBuscar->show();
        connect(dBuscar, SIGNAL(senyalBuscar(QString,QTextDocument::FindFlags)), this, SLOT(slotBuscar(QString,QTextDocument::FindFlags)));
        connect(this, SIGNAL(senyalEncontrada(bool)), dBuscar, SLOT(slotResultadoBusqueda(bool)));
    }
    
    dBuscar->show();
    
}

void ventanaPrincipal::slotBuscar(QString cadenaBuscar,QTextDocument::FindFlags flags)
{
       
    bool hay = editorCentral->find(cadenaBuscar,flags);        
    emit senyalEncontrada(hay);
    etiqueta->setText(hay ? "Cadena encontrada" : "Cadena no encontrada"); 
            
}


void ventanaPrincipal::eliminarTexto()
{

    int respuesta;

    if (!documentoModificado)
    {
        etiqueta->setText("No modificado");
        editorCentral->clear();
        documentoModificado = false;
    }
    else
    {
        respuesta = QMessageBox::warning(this, "Fichero Modificado", "¿Quieres continuar?", QMessageBox::Ok | QMessageBox::Cancel);

        if (respuesta == QMessageBox::Ok)
        {
            editorCentral->clear();
            documentoModificado = false;
        }

        if (respuesta == QMessageBox::Cancel)
            etiqueta->setText("has cancelado");
    }
    
}






