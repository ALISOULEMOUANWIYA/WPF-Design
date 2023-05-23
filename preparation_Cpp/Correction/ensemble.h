 #ifndef ENSEMBLE_H
#define ENSEMBLE_H
#include<iostream>
using namespace std;
class ensemble
{
    private:
            int Taille_max;
            int* echantion;
            int sommet;
            //----------
            int val1;
            int val2;
    public:
        ensemble(int N);
        ensemble(const ensemble &c);
        ~ensemble();

        int cardinal();
        ensemble& ajouter(int N);
        ensemble& supprimer(int N);
        bool contient(int N);
        
        void initialisation();
        ensemble& operator<<(int N);
        ensemble& operator>>(int N);
        // friend istream &operator>>(istream &input, ensemble&);
        // friend istream &operator>>(istream &input, ensemble&);
        // const bool operator=(const int n);
        void afficher();

        int getTaille_Max();
        // return tie(l.name, l.floor, l.weight) < tie(r.name, r.floor, r.weight); // keep the same order
};
#endif