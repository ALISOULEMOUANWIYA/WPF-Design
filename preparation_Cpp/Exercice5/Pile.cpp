#include<iostream>
#include "Pile.h"

Pile::Pile(int taillePile)
{
    Taille_max = taillePile;
    cont = new int[Taille_max];

    std::cout<<"taille max = "<<Taille_max;
    sommet = 0;//niveau remplie
    std::cout<<"sommet = "<<getsommet();
}
 
std::ostream& operator<<(std::ostream& o, const Pile& ma_pile){
    if(ma_pile.sommet > 0){
        for (auto i{0}; ma_pile.sommet ; ++i)
        {
            o <<ma_pile.cont[i]<<" ";
            o <<std::endl;
        }
    }
    return(o);
}

const Pile& Pile::operator=(const Pile&){}
Pile Pile::operator+(const Pile&){}

void Pile::Empiler(int valeurAjouter){
    if(getsommet() < Taille_max){
        cont[sommet++] = valeurAjouter;;
    }else{
        std::cout<<"\nErreur pile remplit ";
    }
}
int Pile::depiler(){
    if(getsommet()== 0){
        return(-1);
    }
    int r = cont[sommet-1];
    delete (cont + sommet -1);
    // suprimer le dernier element du tableau
    sommet--;
    return(r);
}
void Pile::afficher(){
    if(this->sommet > 0){
        for (auto i{0}; this->sommet ; ++i)
        {
            std::cout<<this->cont[i]<<" ";
            std::cout<<std::endl;
        }
    }
}
void Pile::settaille(int valeurtaille){}
void Pile::setCont(int valeurCont){}
void Pile::setsommet(int valeursomet){
    this->sommet = valeursomet;
}
int Pile::gettaille()const{
    return(Taille_max);
}
int* Pile::getCont()const{
    return(cont);
}
int Pile::getsommet()const{
    return(sommet);
}
Pile::~Pile()
{
    delete[] cont;
}