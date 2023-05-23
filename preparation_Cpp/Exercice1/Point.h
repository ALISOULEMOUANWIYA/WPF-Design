#ifndef Point_H
#define Point_H
class Point 
{
    // private:
        int m_x;
        int m_y;
    public:
        Point();//constructeur par defaut
        Point(int abs, int ord);//deuxieme constructeur
        ~Point();// destructeur
        //Accesseur
        int getAbscisse() const;
        int getOrdonnee() const;
        //Manipulateur
        void Setdeplace(int h, int v);
};
#endif