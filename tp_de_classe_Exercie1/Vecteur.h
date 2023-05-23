#ifndef VECTEUR_H

#define VECTEUR_H
#include "Point.h"

class Vecteur {
  public:
	 Point depart;
	 Point arriver;

 	 void afficher();
     void deplacer(double, double);
};

#endif
