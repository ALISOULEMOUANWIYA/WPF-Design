#include <iostream>

void doubler(int&);
int main()
{
    int a = 3;
    doubler(a);
    std::cout << "a = " << a << std::endl;
}

void doubler(const int& x)
{
    x *= 2;
}