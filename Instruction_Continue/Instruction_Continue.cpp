
#include <iostream>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 5; i++) {
        std::cout << "[" << i <<"]" << std::endl;
        if (i < 4) {
            continue;
        }
        std::cout << " Bonjour " << std::endl;
    }
    std::cout << " fin " << std::endl;
}

