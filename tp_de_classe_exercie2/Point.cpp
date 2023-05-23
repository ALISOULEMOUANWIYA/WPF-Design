#include <iostream>
#include "point.h"

Point::Point()
{
    std::cout << "appel du const. de copie " << std::endl;
    x = 0;
    y = 0;
}
Point::Point(const Point &p)
{
    std::cout << "appel du const. de copie " << std::endl;
    this->x = p.x;
    this->y = p.y;
}
Point::Point(double x, double y)
{
    std::cout << "appel du const. de copie " << std::endl;
    this->x = x;
    this->y = y;
}
void Point::print()
{
    std::cout << "( " << this->x <<"," << this->y <<")" << std::endl;
}
void Point::set_x(double xx) {
    this->x = xx;
}
void Point::set_x(double y) {
    this->y = y;
}

double Point::get_x() {
    return xx;
}
double Point::get_x() {
    return y;
}
