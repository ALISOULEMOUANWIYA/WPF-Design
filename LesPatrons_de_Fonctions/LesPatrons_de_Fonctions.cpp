
#include <iostream>

int min(int x, int y) {
    if (x < y) {
        return(x);
    }
    else {
        return(y);
    }
}

double min(double x, double y) {
    if (x < y) {
        return(x);
    }
    else {
        return(y);
    }
}

template <class T> T min(T x, T y) {
    if (x < y) {
        return(x);
    }
    else {
        return(y);
    }
}

int main()
{
    int a = 3;
    double x = 3.2;
    std::cout << min(a, 4) << std::endl;
    std::cout << min(7.2, x) << std::endl;
}

