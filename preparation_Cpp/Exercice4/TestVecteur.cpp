#include<iostream>
#include "Vecteur.h"

int main(){

    Vecteur v1(3);
    Vecteur v2(2);
    v1[0] = 1.0;//appel à l'operateur sur-definie[]
    v1[1] = 3.0; v1[2] = 2.0;
    v2[0] = -1.0;
    v2[1] = 4.0;
    std::cout<<"\n v1 = "<<v1;
    std::cout<<"\n |v1| = "<<v1.norme();
    std::cout<<"\n |v2| = "<<v2.norme();
    std::cout<<"\n v1*v2 = "<<v1*v2;
    std::cout<<"\n v1+v2 = "<<v1+v2;

}