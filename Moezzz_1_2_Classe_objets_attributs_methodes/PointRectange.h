#ifndef POINTRECTANGLE_H
#define POINTRECTANGLE_H

class PointRectange {
    private:
		double hauteur;
		double largeur;
    public :
		double surfaceRectangle() const {
			return(hauteur * largeur);
		}
		void set_Hauteur(double valeurHauteur) {
			this->hauteur = valeurHauteur;
		}
		void set_Largeur(double valeurLargeur) {
			this->largeur = valeurLargeur;
		}
		double get_Largeur() {
			return(largeur);
		}
		double get_Hauteur() {
			return(hauteur);
		}
};

#endif
