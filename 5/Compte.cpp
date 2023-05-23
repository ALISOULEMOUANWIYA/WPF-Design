#include "Compte.h"
#include <iostream>

void Compte::retirer(double x)
{
    solde -= x;
}

void Compte::deposer(double x)
{
    solde += x;
}

void Compte::consulterSolde()
{
    std::cout << "Montant de votre solde est de :" << solde;
    std::cout << std::endl;
}

int Compte::get_numero()
{
    return numCompte;
}

double Compte::get_solde()
{
    return solde;
}
std::string Compte::get_titulaire()
{
    return titulaire;
}

void Compte::set_numero(int n)
{
    numCompte = n;
}

void Compte::set_titulaire(std::string t)
{
    titulaire = t;
}

void Compte::set_solde(double s)
{
    solde = s;
}

Compte::Compte(std::string t, int n, double s):
titulaire{t}, numCompte{n}, solde{s}
{

}

Compte::Compte()
{
    titulaire = "Ablaye Ndiaye";
    numCompte = 0;
    solde = 1.0;
}

Compte::Compte(std::string t, int n)
{
    titulaire = t;
    numCompte = n;
}