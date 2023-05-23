#include<iostream>
#include "Point.h"
using namespace std;
Point::Point()
{
    cout<<"Appel du constructeur par defaut";
    cout<<this<<endl;
    m_x = 0;
    m_y = 0;
}
Point::Point(int abs, int ord)
{
    cout<<"Appel du constructeur second pour l'objet";
    cout<<this<<endl;
    m_x = abs;
    m_y = ord;
}

Point::~Point()
{
    cout<<"Appel du destructeur pour l'objet ";
    cout<<this<<endl;
}
int Point::getAbscisse() const{
    return(m_x);
}
int Point::getOrdonnee() const{
    return(m_y);
}
void Point::Setdeplace(int h, int v){
    m_x = m_x + h;
    m_y = m_y + v;
}
