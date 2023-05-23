

#include <iostream>
#include "PointRectange.h"

int main()
{
    double valeurRectangle_hauteur;
    double valeurRectangle_largeur;
    PointRectange rect1;// instantance rect1
    std::cout << "Hauteur : ";
    std::cin >> valeurRectangle_hauteur;
    rect1.set_Hauteur(valeurRectangle_hauteur);

    std::cout << " Largeur : ";
    std::cin >> valeurRectangle_largeur;
    rect1.set_Largeur(valeurRectangle_largeur);



    std::cout << "Hauteur : " << rect1.get_Hauteur() << std::endl;
    std::cout << "Largeur : " << rect1.get_Largeur() << std::endl;
    std::cout << "Surface du rectangle S =  " << rect1.surfaceRectangle() << std::endl;

    return 0;
}
