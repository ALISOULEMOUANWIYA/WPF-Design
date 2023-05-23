
#include <iostream>
#include <stdlib.h>

void swap(int, int);

void swap(int a, int b) {
    int temp;
    std::cout << "Au debut a = " << a << " et b = " << b << std::endl;
    temp = a;
    a = b;
    b = temp;
    std::cout << "A la fin a = " << a << " et b = " << b << std::endl;
}

void main()
{
    int n = 2, p = 4;
    std::cout << "Avant appel n = " << n <<" et p = "<<std::endl ;
    swap(n, p);
    std::cout << " Apres appel n = " << n <<" et p = "<<std::endl ;
    swap(n, p);
}

