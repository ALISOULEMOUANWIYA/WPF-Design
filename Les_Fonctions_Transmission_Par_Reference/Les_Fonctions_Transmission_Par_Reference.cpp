
#include <iostream>
void swap(int*, int*);


void swap(int* a, int* b) {
    int tmp;
    std::cout << "Au debut a = " <<*a <<" et b = " << *b << std::endl;
    tmp = *a;
    *a = *b;
    *b = tmp;
    std::cout << "A la fin a = " << *a << " et b = " << *b << std::endl;
}
int main()
{
    int n = 2, p = 4;
    std::cout << "Avant appel n = " << n << " et p = " << p << std::endl;
    swap(&n, &p);
    std::cout << "Apres appel n = " << n << " et p = " << p << std::endl;
}

