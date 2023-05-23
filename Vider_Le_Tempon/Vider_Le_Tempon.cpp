
#include <iostream>
#include <iomanip>
const int LMax = 120;

int main()
{
    int age, ok;
    char ligne[LMax];
    do {
        std::cout << "Age = : ";
        std::cin >> age;
        ok = 1;
        if (!std::cin) {
            ok = 0;
            std::cin.clear();
            std::cin.getline(ligne, LMax, '\n');
        }
    } while (ok == 0);
}

