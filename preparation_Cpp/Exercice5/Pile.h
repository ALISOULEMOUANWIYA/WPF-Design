#ifndef PILE_H
#define PILE_H
class Pile{
    private:
        int Taille_max;
        int* cont;
        int sommet;
    public:
        Pile(int n);
        ~Pile(); 
 
        // les methodes
        void Empiler(int valeur);
        int depiler();
        void afficher();
        const Pile &operator=(const Pile&);
        Pile operator+(const Pile&);
        friend std::ostream& operator<<(std::ostream&, const Pile&);
        // les comitateur
        int gettaille()const;
        int* getCont()const;
        int getsommet()const;

        // les seteur
        void settaille(int valeurtaille);
        void setCont(int valeurCont);
        void setsommet(int valeursomet);
};
#endif