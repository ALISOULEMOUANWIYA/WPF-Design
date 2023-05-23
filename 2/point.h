#ifndef POINT_H

#define POINT_H

class Point{
    
    private:
        double x;
        double y;
    
    public:
        //Constructeurs
        Point();
        Point(double, double);
        Point(const Point&);  

        // modificateurs = écrire
        void set_x(double);
        void set_y(double);

        //accesseurs = lire
        double get_x();
        double get_y();

        //utilitaires = spécifiques à chaque classe
        void print();
        
};

#endif