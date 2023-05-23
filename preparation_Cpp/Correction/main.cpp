 #include<iostream>
#include "ensemble.h"

int main(){


    ensemble n(8);
    n.ajouter(3).ajouter(4).ajouter(5).ajouter(6).ajouter(10).ajouter(2).ajouter(7).ajouter(1);

    n.afficher();
    cout<<"Et le cardinale de cette ensemble est card(E) = "<<n.cardinal()<<endl;

    cout<<"Apres suppression "<<endl;

    n.supprimer(10);
    n.afficher();
    cout<<"Et le cardinale de cette ensemble est card(E) = "<<n.cardinal()<<endl;

    cout<<"Apres Apres copie "<<endl;

    ensemble copi = n;
    
    copi.afficher();
    cout<<"Et le cardinale de cette ensemble est card(E) = "<<copi.cardinal()<<endl;

    copi.~ensemble();
     n.~ensemble(); 
}