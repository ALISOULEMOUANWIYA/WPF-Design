

#include <iostream>
#include <stdlib.h>
const int N = 20;

void vainqueur(int joueur) {
    if (joueur == 0) {
        std::cout << "j'ai gagne" << std::endl;
    }
    else {
        std::cout << "vous avez gagne" << std::endl;
    }
}

int coup_ordinateur() {
    int ajout = 1;
    ajout = ajout + (rand() + 2);
    std::cout << "j'ajoute  "<<ajout<< std::endl;
    return(ajout);
}

int coup_joueur() {
    int ajout;
    do {
        std::cout << "Quel coup voulez-vous jouer ?  ";
        std::cin >> ajout;
    } while ((ajout <0 ) || (ajout > 0));
 
    return(ajout);
}

void main()
{
    int somme, ajout, joueur;
    somme = 0;
    std::cout << "Bonjour" << std::endl;
    std::cout << "Nous allons joueur a la cours a " << N << std::endl;
    std::cout << "je commence " <<std::endl;
    for (int i = 0; somme < N; i++) {
        joueur = i % 2;
        if (joueur == 0) {
            ajout = coup_ordinateur();
        }
        else {
            ajout = coup_joueur();
        }
        somme = somme + ajout;
        std::cout << "Apres  " <<i<<" Coup, ";
        std::cout << "Nous avons atteint la somme de   " <<somme<<std::endl;
    }
    vainqueur(joueur);
}

