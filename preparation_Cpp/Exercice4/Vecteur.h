#ifndef VECTEUR_H
#define VETEUR_H
#include<ostream>
class Vecteur
{
    private:
         int m_dimension;
         double *m_x;
    public:
         Vecteur(int n);//constructeur par defaut
         Vecteur(const Vecteur &);//constructeur de copie
        //  friend ostream& operator<<(ostream&, Vecteur&);
         double norme() const;
         double operator*( Vecteur &v2);
         double operator=( Vecteur &v2);
         Vecteur operator+( Vecteur &v2);
         double& operator[](int i);
         ~Vecteur();// destructeur
};
#endif