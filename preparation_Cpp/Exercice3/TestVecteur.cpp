#include<iostream>
#include "Vecteur.h"

int main(){
    Vecteur v1(1.0, 3.0, 2.0);
    Vecteur v2, v;
     v2 = v1;

    Vecteur *pv;
    pv = new Vecteur(-1.0, 2.0, 5.0);

    std::cout<<"\n v1 = ";
    v1.afficher();
    std::cout<<"\n v2 = ";
    v2.afficher();
    affiche();

    std::cout<<"\n *pv = ";
    pv->afficher();
    affiche();
    std::cout<<"\n |v1| = "<<v1.norme();

    std::cout<<"\n v1.v2 = "<<v1.operator*(v2);
    std::cout<<"\n v1.(*pv) = "<<v1.operator*(*pv);

    v = v1.operator+(v2);
    std::cout<<"\n v1+v2 = ";
    v.afficher();
    affiche();

    v = pv->operator+(v2);
    std::cout<<"\n (*pv)+v2 ";
    v.afficher();
    affiche();

    delete pv;
}