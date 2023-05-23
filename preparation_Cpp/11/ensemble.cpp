#include <iostream>

class Ensemble{
    int* elements;
    int taille_ens;
    int card;

public:
    Ensemble(int N)
    {
        std::cout << "\nappel du const. " << this << std::endl;
        taille_ens = N;
        elements = new int[taille_ens];
        card = 0;
    }

    Ensemble(const Ensemble& e)
    {
        std::cout << "\nappel du const. de copie " << this << std::endl;
        taille_ens = e.taille_ens;
        elements = new int[taille_ens];
        card = e.card;
        for (auto i{0}; i < card; ++i)
            elements[i] = e.elements[i];
    }

    int cardinal()
    {
        return card;
    }

    Ensemble& ajouter(int x)
    {
        if(card < taille_ens) // Si l'ensemble n'est pas plein
            if(!this->contient(x)) // Si x n'est pas déjà dans le tableau
              elements[card++] = x;
        return *this;
    }

    Ensemble& operator<<(int x)
    {
        if(card < taille_ens) // Si l'ensemble n'est pas plein
            if(!this->contient(x)) // Si x n'est pas déjà dans le tableau
              elements[card++] = x;
        return *this;
    }

    bool contient(int x)
    {
        bool res = false;
        for (auto i{0}; i < card; ++i)
            if(elements[i] == x ) // Si on trouve l'élémént
            {
                res = true;
                break;
            }
        return res;
    }

    bool operator%(int x)
    {
        bool res = false;
        for (auto i{0}; i < card; ++i)
            if(elements[i] == x ) // Si on trouve l'élémént
            {
                res = true;
                break;
            }
        return res;
    }

    ~Ensemble()
    {
        std::cout << "\nappel du dest. " << this << std::endl;
        delete[] elements;
    }

    void afficher()
    {
        std::cout << "E = [";
        for (auto i{0}; i < card - 1; ++i)
            std::cout << elements[i] << ", ";
        std::cout << elements[card -1] << "]";
    }
    Ensemble& supprimer(int x)
    {
        for (auto i{0}; i < card - 1; ++i)
            if(elements[i] == x)
            {
                for (int j{i}; j < card - 1; ++j)
                    elements[j] = elements[j + 1];
                elements[--card] = 0;
            }
        return *this;
    }
    Ensemble& operator>>(int x)
    {
        for (auto i{0}; i < card - 1; ++i)
            if(elements[i] == x)
            {
                for (int j{i}; j < card - 1; ++j)
                    elements[j] = elements[j + 1];
                elements[--card] = 0;
            }
        return *this;
    }

};

int main()
{
    Ensemble e1{5};
    e1 << 2 << 3 << 4 << 1;
    e1 >> 3;
    e1.afficher();
    if(e1 % 1)
        std::cout << "\nContient l'element! " ;
}