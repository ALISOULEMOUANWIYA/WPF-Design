
#include <iostream>
#include "JeuMorPion.h"

int main()
{
    bool valideRond, valideCroix;
    JeuMorPion jeu;
    jeu.initilise();
    valideRond = jeu.place_rond(1, 1);
    valideCroix = jeu.place_croix(0, 1);
    std::cout <<"case Dond: " << valideRond << "\n";
    std::cout <<"case Croix: " << valideCroix << "\n";
    return 0;
}