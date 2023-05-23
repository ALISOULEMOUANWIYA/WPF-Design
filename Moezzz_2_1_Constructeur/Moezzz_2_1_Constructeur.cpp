#include <iostream>
#include "PointRectangle.h"

int main()
{

    PointRectangle rect1(2.0, 3.0);// instantance rect1
    PointRectangle rect2(rect1);// constructeur de copie
 
    std::cout << "Hauteur : " << rect1.get_Hauteur() << std::endl;
    std::cout << "Largeur : " << rect1.get_Largeur() << std::endl;
    std::cout << "Surface du rectangle S =  " << rect1.surfaceRectangle() << std::endl;

    return 0;
}
