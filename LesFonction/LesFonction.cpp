
#include <iostream>

int main()
{
    float x, y , z;
    int n;
    float puissance(float, int);
    x = 3.4;
    n = 3;
    y = puissance(x, n);
    std::cout << " Y = " << y << std::endl;
    z = puissance(x + 2, n + 5);
    std::cout << " Z = " << z << std::endl;
}
float puissance(float a, int p) {
    float b;
    b = 1;
    for (int i = 0; i < p; i++) {
        b *= a;
    }
    return(b);
}

