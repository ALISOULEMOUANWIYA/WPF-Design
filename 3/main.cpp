#include <iostream>
#include "fraction.h"

int main()
{
    Fraction f1;
    Fraction f2{3};
    Fraction f3{2, 5};

    f1.afficher();
    f2.afficher();
    f3.afficher();
    std::cout << "valeur reelle de f3 = " << f3.valeur();
    std::cout << std::endl;
    f2.divide(f3);
    f2.afficher();
    
    const Fraction f4{2, 3};
    std::cout << std::endl;
   
    f4.afficher();
    ostream& operator <<(ostream& sortie, const& p){
        sortie<<"("<<p.
    }

    f3.doubler();
    f3.afficher();
}