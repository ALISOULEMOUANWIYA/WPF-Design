#include <iostream>
#include "point.h"
int main(){
    Point p;  // premier constructeur sans arguments
    p.print();
    Point p2{ 2, 1 }; // deuxième constructeur
    p2.print();
    p.set_x(3);
    p.set_y(4);
    std::cout << "\n abscisse de p2 = " << p2.get_x();
    std::cout << "\n abscisse de p = " << p.get_x();
    Point p3{ p };
}