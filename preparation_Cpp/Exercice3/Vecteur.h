#ifndef VECTEUR_H
#define VETEUR_H
class Vecteur
{
    private:
         double m_x;
         double m_y;
         double m_z;
    public:
        Vecteur(double c1=0, double c2= 0, double c3=0);//constructeur par defaut
         double norme() const;
         double operator*( Vecteur &v2);
         Vecteur operator+( Vecteur &v2);
         void afficher()const;
        friend void affiche();
        ~Vecteur();

        double& operator[](int i);


};
#endif