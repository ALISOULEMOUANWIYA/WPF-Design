#include "Compte.h"
#include <iostream>
#include <string>


int main()
{
    Compte c1;
    /*
    c1.set_numero(2);
    c1.set_titulaire("Diallo");
    c1.set_solde(300000);
    c1.retirer(100000);
    */
    c1.consulterSolde();
    
    Compte c2 {"Gnagna", 2, 1500000};
    
    Compte c3 {"Balla", 4};
    c3.set_solde(200000);
}