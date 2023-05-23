
#include <iostream>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 5; i++) {
        std::cout << "[" << i << "]" << std::endl;
        if (i == 3) {
            break;
        }
        std::cout << " Bonjour " << std::endl;
    }
    std::cout << " fin " << std::endl;
}

