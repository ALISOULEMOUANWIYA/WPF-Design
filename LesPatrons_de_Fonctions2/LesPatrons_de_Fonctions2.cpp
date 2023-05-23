
#include <iostream>



template <class T, class U> T somme(T x, U y, int z) {
    return(x + y + z);
}

int main()
{
    int n = 4;
    double x = 3.5;
    std::cout << somme(n, x, 2) << std::endl;
    std::cout << somme(x,n,2) << std::endl;
}

