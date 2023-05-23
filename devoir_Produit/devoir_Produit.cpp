#include <iostream>
#include "Product.h"

int main()
{
    Product p1;
    Product p2;
    std::cout << "Nombre de produit  = ";
    std::cout<< Product::get_const_produit() << std::endl;
    p1.read();
    p1.print();
    p2.read();
    p2.print();
    std::cout<< Product::is_better_than(p1) << std::endl;
    // friend bool is_better_than(const_produit &p, const_produit &L);
}
