#include <iostream>
#include "point.h"

// (*this).x <==> this->x <==> x

Point::Point(const Point &p)
{
    std::cout << "appel du const. de copie " << std::endl;
    this->x = p.x;
    this->y = p.y;
}

Point::Point()
{
    std::cout << "appel du const. par défaut " << std::endl;
     x = 0;
     y = 0;
}
Point::Point(double x, double y){
    std::cout << "appel du const. avec args " << std::endl;
    this->x = x;
    this->y = y;
}

void Point::print(){
    std::cout << "(" << this->x << ", " << this->y << ")";
    std::cout << std::endl;
}

void Point::set_x(double xx)
{
    x = xx;
}

void Point::set_y(double y)
{
    this->y = y;
}

double Point::get_x()
{
    return this->x;
}

double Point::get_y()
{
    return y;
}
