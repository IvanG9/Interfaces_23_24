#include <mainwindow.h>
#include <QPainter>
#include <QColor>
#include <QDebug>
#include <QTimer>
#include <QtMath>
#include <QMenuBar>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDateTime>
#include <QJsonValue>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    resize(800, 600);
    crearBolas();
    QTimer *temporizador = new QTimer();
    temporizador->setInterval(40);
    temporizador->setSingleShot(false);
    temporizador->start();

    connect(temporizador, SIGNAL(timeout()),
            this, SLOT(slotTemporizador()));

    crearAcciones();
    crearMenu();
};

void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter pintor(this);
    for (int i = 0; i < bolas.size(); i++)
    {

        bolas[i]->pintar(pintor);
    }

    bolaJugador->pintar(pintor);
}

void MainWindow::slotTemporizador()
{

    for (int i = 0; i < bolas.size(); i++)
    {
        bolas[i]->mover(width(), height());
    }

    for (int i = 0; i < bolas.size(); i++)
        for (int j = 0; j < bolas.size(); j++)
        {
            if ((i != j) && bolas[i]->choca(bolas.at(j)))
                qDebug() << " Hay choque " << i << " " << j;
        }

    bolaJugador->mover(width(), height());

    for (int i = 0; i < bolas.size(); i++)
    {

        bolaJugador->choca(bolas.at(i));
    }

    update();
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{

    int teclaPulsada = evento->key();

    switch (teclaPulsada)
    {
    case Qt::Key_Up:
        bolaJugador->velY -= 0.5;
        break;
    case Qt::Key_Down:
        bolaJugador->velY += 0.5;
        break;
    case Qt::Key_Left:
        bolaJugador->velX -= 0.5;
        break;
    case Qt::Key_Right:
        bolaJugador->velX += 0.1;
        break;
    }
    
}

void MainWindow::crearAcciones()
{

    accionGuardar = new QAction("Guardar", this);
    accionGuardar->setShortcut(QKeySequence("Ctrl+s"));
    connect(accionGuardar, SIGNAL(triggered()), this, SLOT(slotGuardarPartida()));

    accionCargar = new QAction("Cargar", this);
    accionCargar->setShortcut(QKeySequence("Ctrl+a"));
    connect(accionCargar, SIGNAL(triggered()), this, SLOT(slotCargarPartida()));
}

void MainWindow::crearMenu()
{

    menuBolas = menuBar()->addMenu("Bolas");
    menuBolas->addAction(accionGuardar);
    menuBolas->addAction(accionCargar);
}

void MainWindow::slotCargarPartida()
{
    QString ruta = QString("partida.json");
    QFile fichero(ruta);

    if (!fichero.open(QIODevice::ReadOnly))
    {
        qDebug() << "No se pudo abrir el archivo.";
        return;
    }

    QByteArray datosGuardados = fichero.readAll();
    QJsonDocument documento(QJsonDocument::fromJson(datosGuardados));

    QJsonObject jsonPrincipal = documento.object();

    QStringList listaClaves = jsonPrincipal.keys();

    if (listaClaves.contains("autor"))
    {
        QJsonValue valorAutor = jsonPrincipal["autor"];

        if (valorAutor.isString())
        {
            QString autor = valorAutor.toString();
            qDebug() << "Autor es " << autor;
        }
    }

    if (listaClaves.contains("Bolas"))
    {
        QJsonValue valorBolas = jsonPrincipal["Bolas"];
        if (valorBolas.isArray())
        {
            QJsonArray arrayBolas = valorBolas.toArray();
            qDebug() << "Array creado";
            for (int i = 0; i < arrayBolas.size(); i++)
            {
                QJsonValue valorBola = arrayBolas[i];
                float posX, posY, velX, velY;
                posX = posY = velX = velY = -9000;

                if (!valorBola.isObject())
                {
                    qDebug() << "La bola " << i << " datos incorrectos";
                    break;
                }

                QJsonObject objetoBola = valorBola.toObject();
                QStringList listaClavesBola = objetoBola.keys();
                qDebug() << "lista claves creado";
                if (listaClavesBola.contains("posX") && objetoBola["posX"].isDouble())
                    posX = objetoBola["posX"].toDouble();
                if (listaClavesBola.contains("posY") && objetoBola["posY"].isDouble())
                    posY = objetoBola["posY"].toDouble();
                if (listaClavesBola.contains("velX") && objetoBola["velX"].isDouble())
                    velX = objetoBola["velX"].toDouble();
                if (listaClavesBola.contains("velY") && objetoBola["velY"].isDouble())
                    velY = objetoBola["velY"].toDouble();

                if (listaClavesBola.contains("colores") && objetoBola["colores"].isArray())
                {
                    QJsonArray colorArray = objetoBola["colores"].toArray();
                    if (colorArray.size() == 3 && colorArray[0].isDouble() && colorArray[1].isDouble() && colorArray[2].isDouble())
                    {
                        int rojo = colorArray[0].toInt();
                        int verde = colorArray[1].toInt();
                        int azul = colorArray[2].toInt();

                        bolas[i]->color = QColor(rojo, verde, azul);
                        qDebug() << "Color de la bola " << i << ": " << rojo << "," << verde << "," << azul;
                    }
                    else
                    {
                        qDebug() << "Datos de color incorrectos para la bola " << i;
                    }
                }

                bolas[i]->posX = posX;
                bolas[i]->posY = posY;
                bolas[i]->velX = velX;
                bolas[i]->velY = velY;
            }
        }
    }
}

void MainWindow::slotGuardarPartida()
{

    QString ruta = QString("partida.json");
    QFile fichero(ruta);

    if (!fichero.open(QIODevice::WriteOnly))
        return;

    QTextStream flujo(&fichero);

    QJsonObject jsonPrincipal;
    QDateTime currentDateTime = QDateTime::currentDateTime();

    jsonPrincipal["autor"] = QString("Nacho");

    QJsonObject jsonVersion;

    jsonVersion["version"] = "2.0";
    jsonVersion["subversion"] = "3.0";
    jsonVersion["sistema operativo"] = "linus";
    jsonVersion["fecha"] = currentDateTime.toString("yyyy-MM-dd HH:mm:ss");

    jsonPrincipal["version"] = jsonVersion;

    QJsonArray arrayJsonBolas;

    for (int i = 0; i < bolas.size(); i++)
    {

        QJsonObject jsonBola;
        jsonBola["posX"] = bolas[i]->posX;
        jsonBola["posY"] = bolas[i]->posY;
        jsonBola["velX"] = bolas[i]->velX;
        jsonBola["velY"] = bolas[i]->velY;

        QJsonArray arrayJsonColores;

        arrayJsonColores.append(bolas[i]->color.red());
        arrayJsonColores.append(bolas[i]->color.green());
        arrayJsonColores.append(bolas[i]->color.blue());

        jsonBola["colores"] = arrayJsonColores;
        arrayJsonBolas.append(jsonBola);
    }

    jsonPrincipal["Bolas"] = arrayJsonBolas;

    // Ya tinc el objecte json principal i vaig a vomitarlo al disco
    QJsonDocument docPartida(jsonPrincipal);
    fichero.write(docPartida.toJson());

    fichero.close();
}

void MainWindow::crearBolas()
{

    bolaJugador = new Bola();
    bolaJugador->especial = true;
    bolaJugador->velY = bolaJugador->velX = 0;
    bolaJugador->posY = bolaJugador->posX = 400;
    bolaJugador->color = QColor(0, 0, 0);

    for (int i = 0; i < NUMBOLAS; i++)
    {

        Bola *nueva = new Bola();
        nueva->posX = random() % width();
        nueva->posY = random() % height();
        nueva->velX = (float)(rand() % 100) / 50 - 1;
        nueva->velY = (float)(rand() % 100) / 50 - 1;

        nueva->velX = nueva->velX * 3;
        nueva->velY = nueva->velY * 3;

        bolas.append(nueva);
    }
}
