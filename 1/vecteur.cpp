#include <iostream>
#include "vecteur.h"
#include "point.h"

void Vecteur::deplacer(double dx, double dy)
{
    depart.x += dx;
    arrivee.x += dx;
    depart.y += dy;
    arrivee.y += dy;
}

void Vecteur::afficher()
{
    std::cout << "vec :";
    depart.afficher();
    std::cout << "-->";
    arrivee.afficher();
}
