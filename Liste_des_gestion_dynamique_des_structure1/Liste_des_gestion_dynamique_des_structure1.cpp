#include <iostream>
#include<string>
#include<cmath>
typedef std::string typeDonne;
typedef struct cellules{
    typeDonne donne;
    struct cellules *suivant;
}typeCellules;

// typeCellules *l;

void afficherDonner(typeDonne donne){
    std::cout<<donne<<" ";
}

typeDonne saisieDonne(void){
    typeDonne donne;
    std::cin >> donne;
    return(donne);
}
typeCellules* inseretete(typeCellules *ancienl, typeDonne donners){
    typeCellules *nouveauL = new typeCellules;
    nouveauL->donne = donners;
    nouveauL->suivant = ancienl;
    return(nouveauL);
}
typeCellules* insereQueu(typeCellules *L, typeDonne donners){
    typeCellules *p, *nouveau;
    // allocation d'une nouvelle cellule
    nouveau = new typeCellules;
    nouveau->donne = donners;//donners de la nouvelle cellule
    nouveau->suivant = NULL;// donners de la dernier cellule
    if(L == NULL){
        return(nouveau);
    }else{
        std::cout<<"ok ici"<<std::endl;
        for(p=L; p->suivant !=NULL; p = p->suivant)
        {}
        p->suivant = nouveau;// chainage
        // L= p->suivant;
    }
    return(L);
}
typeCellules* saisireListeEndroit(){
    char choix;
    // declaration d'une liste vide
    typeDonne donners;
    typeCellules *tete = NULL;//initialisation obligatoire
    typeCellules *queu = NULL;
    std::cout<<"voulez-vous entrer une liste non vide ? : ";
    choix = getchar();
    getchar();

    while(choix == 'o' || choix =='O'){
        std::cout<<"entrer une donnee : ";
        donners = saisieDonne();
        getchar();
        if (tete == NULL)
        {    
            tete = inseretete(tete , donners);// insertion en tete
            // ne pas oublier de recuper la nouvelle tete dans l
        }else{    
            queu = insereQueu(tete , donners);// insertion en tete
            // ne pas oublier de recuper la nouvelle tete dans l
        }
        std::cout<<"Voulez-vous continue  : ";
        choix = getchar();
        getchar();
    }
    if(queu == NULL){
        return(tete);
    }else{
        return(queu);
    }
}
void LiberationMemoir(typeCellules **pl){
    typeCellules *p;
    while (*pl != NULL){
        p = *pl;// memorisation de l'adresse de la cellule
        *pl = (*pl)->suivant;
        delete(p);//destructon de la cellule
    }
    *pl = NULL;
}
void afficher_liste(typeCellules* l){
    typeCellules *p;
    p = l;// on point sur la premier celllule
    while(p !=NULL){ // tant qu'il y a une cellule faire
       afficherDonner(p->donne);
       p = p->suivant;
    }
}
int main(){
    // declaration du pointeur sur la tete de la liste
    typeCellules *l;
    l = saisireListeEndroit();//on recuper l'adresse
                             //de la premier cellule
    afficher_liste(l);
    LiberationMemoir(&l);
    return(0);
}