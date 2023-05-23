#include <iostream>
#include "Product.h"


using namespace std;

void Product::read()
{
    cout << "Nom produit : " ;
    cin >> name;
    cout << "Prix : ";
    cin >> price;
    cout << "Score : ";
    cin >> score;
}

void Product::print()
{
    cout << "Nom du produit : " << name << endl;
    cout << "Prix du produit : " << price << endl;
    cout << "Score du produit : " << score << endl;

}


bool Product::is_better_than(Product p)
{
    return (score / price) > (p.score / p.price);
}