#ifndef MORPION_M
#define MORPION_M
enum CouleurCase{VIDE , ROND, CROIX};
typedef array<array<CouleurCase, 3>, 3> Grille;
class JeuMorPion{
	private:
		Grille grille;
		bool place_coup(size_t ligne,size_t colonne, CouleurCase coup){
			if (ligne >= grille.size() or colonne >= grille.size()) {
				// traitement d'erreur ici
			}
			//traitetement de l'erreur ici
			if (grille[ligne][colonne] == VIDE){
				//case vide, on peut placer le coup
					grille[ligne][colonne] = coup;
					return true;
			}
			else {
				// case deja prise, on signe une erreur
				//..
					return false;
			}
		}
	public:
		void initilise() {
			for (auto& ligne : grille) {
				for (auto& kase : ligne) {
					kase = VIDE
				}
			}
		}
		bool place_rond(size_t ligne, size_t colonne) {
			return place_coup(ligne, colonne, ROND);
		}
		bool place_croix(size_t ligne, size_t colonne) {
			return place_coup(ligne, colonne, CROIX);
		}

		Grille get_grille() {
			return grille;
		}
};


#endif
