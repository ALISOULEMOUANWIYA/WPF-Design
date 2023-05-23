

#include <iostream>
#include "PointRectange.h"

int main()
{
    PointRectange rect1;// instantance rect1
    rect1.set_Hauteur(3.0); 
    rect1.set_Largeur(4.0);
    std::cout << "Hauteur : " << rect1.get_Hauteur() << std::endl;
    std::cout << "Largeur : " << rect1.get_Largeur() << std::endl;
    std::cout << "Surface du rectangle S =  " << rect1.surfaceRectangle() << std::endl;

    return 0;
}
