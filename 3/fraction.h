#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    public:
        int num;
        int den;

        Fraction();
        Fraction(int);
        Fraction(int, int);
        

        void afficher() const;
        Fraction multiplier(const Fraction &) const;
        operator*(const Fraction &);

        std::ostream& operator<<(std::ostream &sortie, const Fraction);

        void divide(const Fraction &) ;
        float valeur() const;
        void doubler() ;

        friend Fraction multiplier(const Fraction&, const Fraction&);
};
/*
Fraction f1{2, 3};
Fraction f2{5, 7};
Fraction fresult1 = f1.multiplier(f2);
Fraction fresult2 = multiplier(f1, f2);
*/
#endif