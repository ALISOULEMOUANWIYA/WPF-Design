#include <iostream>
#include "Product.h"


using namespace std;

int Product::const_produit = 0;
int Product::get_const_produit() {
    return(const_produit);
}

Product::Product(){
    const_produit++;
}

void Product::read() 
{
    cout << "Nom produit : " ;
    cin >> name;
    cout << "Prix : ";
    cin >> price;
    cout << "Score : ";
    cin >> score;
}

void Product::print() const
{
    cout << "Nom du produit : " << name << endl;
    cout << "Prix du produit : " << price << endl;
    cout << "Score du produit : " << score << endl;

}


bool Product::is_better_than(const Product &p) const
{
    return (score / price) > (p.score / p.price);
}
// bool Product::is_better_than(const Product &p) const
// {
//     return (score / price) > (p.score / p.price);
// }