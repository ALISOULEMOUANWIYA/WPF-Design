#include<iostream>
#include "Pile.h"

int main(){
    Pile p1(2);
    p1.Empiler(2);
    std::ostream& operator<<(std::ostream&, &p1);
}