#include "bola.h"
#include <math.h>
#include <QDebug>

Bola::Bola() {

    posX = 300;
    posY = 300;
    vida = 100;
    velX = 1;
    velY = 2;
    color = QColor(rand()%256,rand()%256,rand()%256);
    especial = false;
    
}

 void  Bola::pintar(QPainter &pintor) {
 
 
        if(especial)
        pintor.drawEllipse(posX -3,posY -3 ,diametro +6,diametro +6);
        
        
        pintor.setBrush(color);  
        QString texto = QString("vidas: ") + QString::number(vida);
        pintor.drawEllipse(this->posX,this->posY,this->diametro,this->diametro);
    
 }
 
 
 float Bola::distancia(Bola *otra){
 
    float dist = sqrtf( powf(posX- otra->posX,2) + powf(posY - otra->posY,2)); 
                       
    return dist;
 }
 
 bool Bola::choca(Bola *otra){
 
    bool hayChoque = false;
    
    Bola * izq;
    Bola * der;
    Bola * arriba;
    Bola * abajo;
    
     if ( distancia(otra) > diametro ){
        return false;
     }
      
    if(posX < otra->posX){
        izq = this;
        der = otra;        
            
    }else{
        der = this;
        izq = otra; 
    }
    
    
    if(posY < otra->posY){
        arriba  = this;
        abajo = otra;        
            
    }else{
        abajo = this;
        arriba = otra; 
    }
    
    
    if(abajo->velY < arriba->velY){
       float aux  = arriba->velY;
       arriba->velY = abajo->velY; 
       abajo->velY = aux;
       hayChoque = true;
    }
   

    if(izq->velX > der->velX){
       float aux  = der->velX;
       der->velX = izq->velX; 
       izq->velX = aux;
       hayChoque = true;
    }
            
    return hayChoque;     

 }
 


void Bola::mover(int width,int height){

    posX = posX + velX;
	posY = posY + velY;
	
	if(posX >= (width - diametro)){
    	 velX = - fabs(velX);
        
	}
	if(posX < 0)
		 velX = fabs(velX);

	
	if(posY >= (height - diametro)){
	    velY = - fabs(velY);

	}
	
	if(posY < 0)
		 velY = fabs(velY);




}

