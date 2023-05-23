
#include <iostream>
#include "Point.h"
#include "Vecteur.h"

void Vecteur::deplacer(double dx, double dy)
{
    depart.x += dx;
    arriver.x += dx;
    depart.y += dy;
    arriver.y += dy;
}

void Vecteur::afficher() {
    std::cout << "vc : ";
    depart.afficher();
    std::cout << " ---> ";
    arriver.afficher();
}
