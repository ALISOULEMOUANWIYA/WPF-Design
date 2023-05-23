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
        double produit(const Vecteur &v2)const;
        Vecteur somme(const Vecteur &v2)const;
        void afficher()const;
        ~Vecteur();
};
#endif