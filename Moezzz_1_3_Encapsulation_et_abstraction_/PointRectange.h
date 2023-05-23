#ifndef POINTRECTANGLE_H
#define POINTRECTANGLE_H

class PointRectange {
	private:
		// declaration des attribu de la classe PointRectange
			double hauteur;
			double largeur;
	public:
		// prototype methode
			double surfaceRectangle() const;

		// manipulateur
			void set_Hauteur(double);
			void set_Largeur(double);

		// accesseur
			double get_Largeur() const;
			double get_Hauteur() const;
};
double PointRectange::surfaceRectangle() const {
	return(hauteur * largeur);
}
void PointRectange::set_Hauteur(double valeurHauteur) {
	this->hauteur = valeurHauteur;
}
void PointRectange::set_Largeur(double valeurLargeur) {
	this->largeur = valeurLargeur;
}
double PointRectange::get_Largeur() const {
	return(largeur);
}
double PointRectange::get_Hauteur() const {
	return(hauteur);
}
#endif
