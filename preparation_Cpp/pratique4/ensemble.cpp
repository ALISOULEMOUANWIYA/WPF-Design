#include "ensemble.h"

ensemble::ensemble(int N){
    Taille_max = N;
    echantion = new int[Taille_max];

    cout<<"taille max = "<<Taille_max<<endl;
    sommet = 0;//niveau remplie
    // std::cout<<"sommet = "<<sommet<<std::endl;
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
    cout<<" cardinal de E : card(E) = "<<sommet<<endl;
}
istream &operator>>(istream &input, ensemble& ajouter){
   input>>ajouter.val1;
   return(input);
}
// istream &operator>>(istream &inp, ensemble& supprimer){
//    inp>>supprimer.val2;
//    return(inp);
// }
const bool  ensemble::operator=(const int n){
    if(n%3==0){
        return(true);
    }else{
        return(false);
    }
}
// ensemble ensemble::ajouter(int N){
//     if(sommet < Taille_max){
//         echantion[sommet++] = N;
//     }else{
//         std::cout<<"Erreur, echantion remplit ";
//     }
// }

// ensemble ensemble::supprimer(int N){
//     if(sommet == 0){
//         return(-1);
//     }
//     int valeurRestant = echantion[sommet-1];
//     delete(echantion + sommet - 1);
//     sommet--;
//     return(valeurRestant);
// }

// bool ensemble::contient(int N){
//     bool teste = false;
//     for (auto i{0}; sommet; ++i)
//     {
//        if(echantion[i] == N){
//           teste = true;
//        }
//     }
//     return(teste);
// }
void ensemble::initialisation(){
    if(val1 >0){
      echantion[sommet++] = val1;
    }else{
        echantion[sommet--] = 0;
    }
}
void ensemble::afficher(){
    cout<<"sommet "<<sommet<<endl;
      for(int i = 0 ; i < Taille_max; i++){
        if(i==0){
            cout<<"E = [";
            if(this->echantion[i] > 0){
                cout<<this->echantion[i]<<" , ";
            }
        }else{
            if(i == Taille_max-1){
                if(this->echantion[i] > 0){
                    cout<<this->echantion[i]<<"]"<<endl;
                }else{
                    cout<<"]"<<endl;
                }
            }else{
                cout<<this->echantion[i]<<" , ";
            }
        } 
      }
}

//---------------
int ensemble::getTaille_Max(){
   return(Taille_max);
}
// g++ main.cpp ensemble.h ensemble.cpp