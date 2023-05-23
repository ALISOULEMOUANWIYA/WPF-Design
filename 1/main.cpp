#include <iostream>
#include "point.h"
#include "vecteur.h"

int main()
{
    Point p1; p1.x = 2.0; p1.y = 3.5;
    Point p2; p2.x = 1.5; p2.y = 3.2;
    std::cout << "P1 = ";
    p1.afficher();
    std::cout << std::endl;
    Vecteur v1;
    v1.depart = p1;
    v1.arrivee = p2;
    v1.afficher();
    std::cout << std::endl;
    v1.deplacer(1, 1);
    v1.afficher();
}


