#ifndef VECTEUR_H

#define VECTEUR_H
#include "point.h"

class Vecteur{
    public:
        Point depart;
        Point arrivee;
        void afficher();
        void deplacer(double, double);
};

#endif