
#include <iostream>

void afficher(int = 7, int = 3);
int main()
{
    afficher(3, 2);
    afficher(4);
    afficher();
}
void afficher(int x, int y) {
    std::cout << " x = " << x << " et  y = " << y << std::endl;
}

