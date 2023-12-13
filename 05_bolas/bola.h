#ifndef _BOLA_H
#define _BOLA_H
#include <QPainter>
#include <QColor>

class Bola{

    public:

        Bola();
        QColor color;
        float posX,posY;
        float velY,velX;
        int vida;
        bool especial;
        
        bool finalY,finalX;
	    static const int diametro = 30; 
	    void pintar(QPainter &pintor);
	    void mover(int width,int height);
	    bool choca(Bola *);
	    float distancia(Bola *);
	    	    
};



#endif
