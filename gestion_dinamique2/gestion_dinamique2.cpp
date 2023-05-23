#include<iostream>

float* construire_Matrice(const int dimension1, int dimension2){
    float *p, *t;
    p = new float[dimension1];
    t = new float[dimension2];
    
    if(p == NULL){
        std::cout<<"Attention : memoir saturee ..."<<std::endl;
        return(NULL);
    }
    for(int i = 0;  i<dimension2; i++){
        t[i] = 0;
    }
    for(int i = 0;  i<dimension1; i++){
        p[i] = *t;// innitialisation
    }
    return(p);
}
void detruire_vecteur(float *p){
    if(p){
        delete p;
    }
}
float* produit_scalaire(float *m1, int n1, int p1, float *m2, int n2, int p2){
    int i, j, k;
    float *m;
    if(p1 != n2){
        std::cout<<"Attention : produit impossible..."<<std::endl;
        return(NULL);
    }
    m = construire_Matrice(n1, p2);
    if(m){
        for(i=0 ; i<n1; i++){
            for(j=0 ; j<p1; j++){
                for(k=0 ; k<p2; k++){
                    (m+i)[j] += (m1+i)[k] * (m2+k)[j];
                }
            }
        }
    }
    return(m);
}
void afficher_matrice(float *m, int n, int p){
    int i, j;
    std::cout<<"Matrice "<<n<<" x "<<p<<std::endl;
    for(i=0; i<n; i++){
        std::cout<<std::endl;
        for(j = 0; j<p; j++){
            std::cout<<(m+i)[j]<<"\t";
        }
    }
}
int main(){
    float *m1, *m2, *m3;

    m1 = construire_Matrice(2,3);
    m2 = construire_Matrice(2,3);
    (m1+0)[0] = (m1+1)[0] = 1.0;
    (m2+0)[0] = (m2+0)[1] = (m2+0)[2] = 1.0;
    m3 = produit_scalaire(m1, 2, 2, m2, 2, 3);
    afficher_matrice(m3, 2, 2);

    detruire_vecteur(m1);
    detruire_vecteur(m2);
    detruire_vecteur(m3);
}