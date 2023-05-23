
#include <iostream>
#include <stdlib.h>

void initialisation(int*, int, int, int);
void CreationMatrice (int*, int, int);
int somme(int*, int , int);


int main()
{
    const int lig = 2, col = 4;
    int *tab[lig];

    CreationMatrice((int*)tab,lig, col);
    initialisation((int*)tab,lig, col, 3);
    std::cout<<"le somme est "<<std::endl;
    std::cout << "Somme = " << somme((int*)tab, lig, col);
    return(0);
}

void CreationMatrice(int *tab, int col, int lig) {
    int* t = new int[col];
    for (int j = 0; j < lig; j++) {
        tab[j] = *t;
    }
}

void initialisation(int* t, int lig, int col, int val) {
    for(int i = 0; i<lig; i++ ){
        for (int j = 0; j < col; j++) {
            (t+i)[j] = val;
        }
    }
}
int somme(int* t, int lig, int col) {
    int s = 0;
    for(int i = 0; i<lig; i++ ){
        for (int j = 0; j < col; j++) {
            s +=(t+i)[j];
        }
    }
    return(s);
}

