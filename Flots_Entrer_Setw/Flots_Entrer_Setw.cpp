
#include <iostream>
#include <iomanip>

int main()
{
    const int LMax = 5;
    char ligne[5];
    std::cout << "Ligne ? : ";
    std::cin >> std::setw(5) >> ligne;
    std::cout << "ligne = " << ligne << std::endl;
}

