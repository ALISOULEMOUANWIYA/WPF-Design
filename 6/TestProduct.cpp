#include <iostream>

#include "Product.h"


using namespace std;

int main()
{
    Product p1;
    p1.read();
    Product p2;
    p2.read();
    bool p1_best = p1.is_better_than(p2);
    cout << "P1 est meilleur : " << p1_best;
}