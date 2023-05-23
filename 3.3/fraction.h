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
        void divide(const Fraction &) ;
        float valeur() const;
        void doubler() ;

        friend Fraction(const Fraction&, const Fraction&);
};

#endif