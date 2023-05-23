#include<iostream>
#include "ensemble.h"

int main(){


    ensemble n(3);
    for (int i = 0; i < 3; i++)
    {
      cout<<"ajouter une valeur a l'ensemble : ";
      cin>>n;
      n.initialisation();
    }
    // n.ajouter(3);
    n.afficher();
    n.cardinal();
    for (int i = 0; i < 3; i++)
    {
      cout<<"supprimer les deux premier valeur ajouter a l'ensemble : ";
      cin>>n;
      n.initialisation();
    }
    n.afficher();
    n.cardinal();

    ensemble copi = n;
     n.~ensemble(); 
    // copi.afficher();
    copi.~ensemble();
}