#include<iostream>
struct vecteur{
    int dimension;
    int *element;
};
vecteur* construire_vecteur(int dimension1){
    vecteur *p;
    p = new vecteur;
    
    if(p == NULL){
        std::cout<<"Attention : memoir saturee ..."<<std::endl;
        return(NULL);
    } 
    p->dimension = dimension1;   
    p->element = new int[dimension1];
    if(p->element == NULL){
        std::cout<<"Attention : memoir saturee ..."<<std::endl;
        return(NULL);
    }
    for(int i = 0;  i<dimension1; i++){
        p->element[i] = 0;// innitialisation
    }
    return(p);
}
void detruire_vecteur(vecteur *p){
    if(p){
        delete p;
    }
}
int produit_scalaire(vecteur *v1, vecteur *v2){
    int i, produit;
    if(v1->dimension != v2->dimension ){
        std::cout<<"Attention : produit impossible..."<<std::endl;
        return(-1);
    }
    for(i=0, produit=0 ; i<v1->dimension; i++){
        produit += v1->element[i] * v2->element[i];
    }
    return(produit);
}
void afficher_matrice(vecteur *v1, vecteur *v2, int parcour){
    for(int i=0; i<parcour; i++){
        v1->element[i] = i;
        v2->element[i] = 2*i;
    }
    std::cout<<"v1.v2 = "<<produit_scalaire(v1, v2);
}
int main(){
    vecteur *v1, *v2;

    v1 = construire_vecteur(3);
    v2 = construire_vecteur(3);

    afficher_matrice(v1, v2, 3);

    detruire_vecteur(v1);
    detruire_vecteur(v2);
}