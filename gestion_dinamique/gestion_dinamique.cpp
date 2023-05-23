#include<iostream>

int *construire_vecteur(int dimension){
    int *p, i;
    p = new int[dimension];
    if(p == NULL){
        std::cout<<"Attention : memoir saturee ..."<<std::endl;
        return(NULL);
    }
    for(i = 0;  i<dimension; i++){
        p[i] = 0;// innitialisation
    }
    return(p);
}
void detruire_vecteur(int *p){
    if(p){
        delete p;
    }
}
int produit_scalaire(int *v1, int *v2, int dimension){
    int i, produit;
    for(i=0, produit=0; i<dimension; i++){
        produit += v1[i]*v2[i];
    }
    return(produit);
}
int main(){
    int *v1, *v2, i;

    v1 = construire_vecteur(3);
    v2 = construire_vecteur(3);

    for(i = 0; i<3; i++){
        v1[i] = i;
        v2[i] = 2*i;
    }
    std::cout<<"v1.v2 = "<<produit_scalaire(v1, v2, 3)<<std::endl;
    detruire_vecteur(v1);
    detruire_vecteur(v2);
}