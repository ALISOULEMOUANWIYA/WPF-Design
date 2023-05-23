#include<iostream>
#include<math.h>
#include "Vecteur.h"

Vecteur::Vecteur(double c1, double c2, double c3)
{
    std::cout<<"\n appel du constructeur par defaut ";
    // initialisation des variable dans le constructeur
    m_x=c1;
    m_y=c2;
    m_z=c3;
}
void Vecteur::afficher()const{
   std::cout<<"< ";
   std::cout<<m_x<<", ";
   std::cout<<m_y<<", ";
   std::cout<<m_z<<"";
   std::cout<<" >";
}
double Vecteur::norme()const{
    double n;
    n = (m_x * m_x) + (m_y * m_y) + (m_z * m_z);
    return(sqrt(n));
}
double Vecteur::produit(const Vecteur& v2)const{
   return((m_x * v2.m_x) + (m_y * v2.m_y) + (m_z * v2.m_z));
}
Vecteur Vecteur::somme(const Vecteur& v2 )const{
    Vecteur v;
      v.m_x= (m_x * v2.m_x);
      v.m_y = (m_y * v2.m_y) ; 
      v.m_z = (m_z * v2.m_z);
      return(v);
}   
Vecteur::~Vecteur()
{
    std::cout<<"Appel du destructeur pour l'objet ";
    std::cout<<this<<std::endl;
}
