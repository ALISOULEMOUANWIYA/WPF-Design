#include<iostream>
#include <stdlib.h>
struct Point{
    float x;
    float y;
};
struct Rectangle{
    Point p1;
    Point p2;
};

void afficher1(Point p){
    std::cout<<"Point1 = ( "<<p.x<<", "<<p.y<<")"<<std::endl;
}
void afficher2(const Point& p){
    std::cout<<"Point2 = ( "<<p.x<<", "<<p.y<<")"<<std::endl;
}
void afficher3(Point *p){
    std::cout<<"Point3 = ( "<<p->x<<", "<<p->y<<")"<<std::endl;
}
int main(){

    Point p = {1.0, 2.0};
    afficher1(p);
    afficher2(p);
    afficher3(&p);

    // Point pa, pb;
    // Rectangle ra, rb;

    //premier point
    // pa.x = pa.y = 1.0;

    //deuxieme point
    // pb.x = 3.0;
    // pb.y = 5.0;

    // premier rectangle
    // ra.p1 = pa;
    // ra.p2 = pb;

    // rb = ra;
    // deuxieme rectangle
    // rb.p1.x = 8.0;

    // rb.p2.y = -3.5;
    // rb.p2.x = 5.0;

    // std::cout<<"ra = ( "<<ra.p1.x<<", "<<ra.p1.y<<")";
    // std::cout<<" - ( "<<ra.p2.x<<", "<<ra.p2.y<<")"<<std::endl;

    
    // std::cout<<"rb = ( "<<rb.p1.x<<", "<<rb.p1.y<<")";
    // std::cout<<" - ( "<<rb.p2.x<<", "<<rb.p2.y<<")"<<std::endl;
    
    return(0);
}