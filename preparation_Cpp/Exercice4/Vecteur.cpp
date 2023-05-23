#include<iostream>
#include<math.h>
#include "Vecteur.h"

Vecteur::Vecteur(int n)
{
   int i;
    std::cout<<"\n appel du constructeur par defaut ";
    std::cout<<"\n (d'addresse ="<<this<<") ";
    // initialisation des variable dans le constructeur
    m_dimension =n;
    m_x= new double[n];
    for ( i = 0; i < n; i++)
    {
       m_x[i] = 0;
    }
}
// void Vecteur::afficher()const{

// }

void affiche(){
   std::cout<<"\n methode friend  ";
}
 double Vecteur::norme()const{
    double n;
   //  n = (m_x * m_x) + (m_y * m_y) + (m_z * m_z);
    return(sqrt(n));
}
 double Vecteur::operator*( Vecteur& v2){
   // return((m_x * v2.m_x) + (m_y * v2.m_y) + (m_z * v2.m_z));
}
 Vecteur Vecteur::operator+( Vecteur& v2 ){
    Vecteur v;
      // v.m_x= (m_x * v2.m_x);
      // v.m_y = (m_y * v2.m_y) ; 
      // v.m_z = (m_z * v2.m_z);
      // return(v);
}   
Vecteur::~Vecteur()
{
    std::cout<<"\n appel du destructeur par defaut ";
    std::cout<<"\n (d'addresse ="<<this<<") ";
    if(m_x){
       delete[]m_x;
    }
}
 double Vecteur::norme()const{
    double n = 0;
    int i;
    for (i = 0; i < m_dimension; i++)
    {
       n += m_x[i] * m_x[i];
    }
    return(sqrt(n));
 }
// ostream& operator<<(ostream& sortir, Vcteur &v){

// }
double Vecteur::operator*( Vecteur &v2){
   double p= 0;
   int i;
   if(this->m_dimension == v2.m_dimension){
      for ( i = 0; i < this->m_dimension; i++)
      {
         p += this->m_x[i]*v2.m_x[i];
      }
      return(p);  
   }
}

double& Vecteur::operator[](int i){
   if(0>i || i>= m_dimension){
      std::cout<<"\n Attention : mauvais indic ";
      return(m_x[i]);
   }
}
