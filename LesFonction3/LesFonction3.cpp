
#include <iostream>

int racines(double a, double b, double c, double& r1, double& r2) {
    double delta;
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        return(0);
    }else if(delta == 0){
        r1 = -b / (2 * a);
        return(1);
    }
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);
    return(2);

}

int main()
{
    double a, b, c, x1, x2;
    int n;
    std::cout << " a = ";
    std::cin >> a;
    std::cout << " b = ";
    std::cin >> b;
    std::cout << " c = ";
    std::cin >> c;
    n = racines(a, b, c, x1, x2);
    switch (n) {
        case 0: 
            std::cout << "Aucune racien " << std::endl;
        break;
        case 1:
            std::cout << "une racine double "<<x1 <<std::endl;
        break;
        case 2:
            std::cout << "Deux Racines" <<x1 <<" Et " <<x2 << std::endl;
        break;
        
    }
}

