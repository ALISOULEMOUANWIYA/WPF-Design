#include <iostream>
#include "fraction.h"

// num <==> (*this).num <==> this->num

void Fraction::afficher() const
{
    std::cout << (*this).num << "/" << (*this).den;
    std::cout << std::endl;
}

Fraction Fraction::multiplier(const Fraction &f) const
{
    Fraction resultat;
    resultat.num = this->num * f.num;
    resultat.den = (*this).den * f.den;
    return resultat;
}

Fraction multiplier(const Fraction &f1, const Fraction& f2)
{
    Fraction resultat;
    resultat.num = f1.num * f2.num;
    resultat.den = f1.den * f2.den;
    return resultat;
}

// this = this + f
void Fraction::divide(const Fraction &f) 
{
    this->num = this->num * f.den;
    this->den = this->den * f.num;
}

Fraction::Fraction(){
    std::cout << " appel du constructeur 1." << std::endl;
    this->num = 1;
    this->den = 1;
}
Fraction::Fraction(int v){
    std::cout << " appel du constructeur 2." << std::endl;
    this->num = this->den = v;
}
Fraction::Fraction(int num, int den){
    std::cout << " appel du constructeur 3." << std::endl;
    this->num = num;
    this->den = den;
}

float Fraction::valeur() const {
    return static_cast<float> (num) / den;
}

void Fraction::doubler()
{
    this->num *= 2;
}
