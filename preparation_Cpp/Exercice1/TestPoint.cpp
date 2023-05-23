#include<iostream>
#include "Point.h"
void afficher(const Point& p){
    std::cout<<"("<<p.getAbscisse()<<","<<p.getOrdonnee()<<")";
}
int main(){
    Point p1;
    Point p2(2,4);
    p1.Setdeplace(6,2);
    afficher(p1);
    std::cout<<" et ";
    afficher(p2);
    std::cout<<std::endl;
} 
