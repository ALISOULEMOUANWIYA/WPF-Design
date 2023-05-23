
#include <iostream>

void initialisation(int*, int);
int somme(int*);


int main()
{
    int tab[2];
    initialisation(tab, 3);
    std::cout << "Somme = " << somme(tab);
}

void initialisation(int t[2], int v){
    for(int i = 0; i < 4; i++){
        t[i] = v;
    }
}

int somme(int tab[2]) {
    int s = 0;
    for (int i = 0; i < 4; i++) {
        s += tab[i];
    }
    return(s);
}

