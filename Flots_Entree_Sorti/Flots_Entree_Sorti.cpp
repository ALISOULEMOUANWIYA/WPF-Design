
#include <iostream>
#include <iomanip>

void main()
{
    int n = 26;
    float x = 3.1415;
    std::cout << "|" << std::setw(10) << std::setfill('*') <<std::hex << n << "|" << std::endl;
    std::cout << "|" << std::setw(6) << std::setfill('#') <<std::hex << std::setprecision(2) << x << std::endl;
    
}

