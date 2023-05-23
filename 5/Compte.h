#include <string>
#include <iostream>
class Compte
{
    public:
    // Constructeurs
    Compte(std::string, int, double);
    Compte();
    Compte(std::string, int);
    
    
    void retirer(double);
    void deposer(double);
    void consulterSolde();

    // accesseurs => consulter les données membres
    std::string get_titulaire();
    int get_numero();
    double get_solde();

    // modificateurs => modifier les données membres
    void set_titulaire(std::string);
    void set_numero(int);
    void set_solde(double);

private:
    // données membres
    int numCompte;
    std::string titulaire;
    double solde;
};