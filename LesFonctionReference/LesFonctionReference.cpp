
#include <iostream>

int x = 2;

int& f() {
    return(x);
}

int main()
{
    f() *= 4;
    std::cout << f();
    return(0);
}

