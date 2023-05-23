#include "ensemble.h"

ensemble::ensemble(int N){
    Taille_max = N;
    echantion = new int[Taille_max];
    this->sommet = 0;
}
ensemble::ensemble(const ensemble &copi){
    Taille_max = copi.Taille_max;
    echantion = copi.echantion;
    sommet = copi.sommet; 
}
ensemble::~ensemble(){
   delete[] echantion;
}
int ensemble::cardinal(){
    return(sommet);
}
ensemble& ensemble::ajouter(int N){
    if(sommet < Taille_max){
        if(!this->contient(N)){
            echantion[sommet++] = N;
        }
    }else{
        cout<<"Erreur, echantion remplit \n";
    }
    return(*this);
}
ensemble& ensemble::operator<<(int N){
    if(sommet < Taille_max){
        if(!this->contient(N)){
            echantion[sommet++] = N;
        }
    }else{
        std::cout<<"Erreur, echantion remplit \n";
    }
    return(*this);
}
ensemble& ensemble::supprimer(int N){
        for (auto i{0}; i < sommet - 1; ++i)
            if(echantion[i] == N){
                for (int j{i}; j < sommet - 1; ++j)
                    echantion[j] = echantion[j + 1];
                echantion[--sommet] = 0;
            }
        return *this;
}
ensemble& ensemble::operator>>(int N){
    for(auto i{0}; i< sommet-1; ++i){
       if(echantion[i]  == N){
         for (int j{i} ; j < sommet-1; ++j)
         {
             echantion[j] = echantion[j + 1];
         }
         echantion[--sommet] = 0;
       }
    }
    return(*this);
}
bool ensemble::contient(int N){
    bool teste = false;
    // for (int i=0; i< Taille_max; i++)
    for (auto i{0}; i< sommet; ++i)
    {
       if(echantion[i] == N){
          teste = true;
          break;
       }
    }
    return(teste);
}

void ensemble::afficher(){
    // cout<<"sommet "<<sommet<<endl;
      for(int i = 0 ; i <sommet-1; i++){
        if(i==0){
            cout<<"E = [";
            if(this->echantion[i] > 0){
                cout<<this->echantion[i]<<" , ";
            }
        }else{
            if(i == sommet-1){
                if(this->echantion[i] > 0){
                    cout<<this->echantion[sommet-1]<<"]"<<endl;
                }else{
                    cout<<"]"<<endl;
                }
            }else{
                cout<<this->echantion[i]<<" , ";
            }
        } 
      }
    cout<<this->echantion[sommet-1]<<"]"<<endl;
}

//---------------
int ensemble::getTaille_Max(){
   return(Taille_max);
}
// g++ main.cpp ensemble.h ensemble.cpp