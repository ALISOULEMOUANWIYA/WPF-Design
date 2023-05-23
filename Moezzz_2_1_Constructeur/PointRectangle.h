#ifndef POINTRECTANGLE_H
#define POINTRECTANGLE_H

class PointRectangle {
private:
	// declaration des attribu de la classe PointRectange
	double hauteur;
	double largeur;
public:
	// prototype constructeur
	//PointRectangle() = default;// peut pertinant
	PointRectangle() : PointRectangle(0.0, 0.0) {}// mieu que default
	PointRectangle(double valeurH, double valeurL)
		: hauteur(valeurH), largeur(valeurL)
	{
		// constructeur vide
	}
	PointRectangle(PointRectangle const& autre)// constructeur de copie
		: hauteur(autre.hauteur), largeur(autre.largeur)
	{
		// constructeur vide
	}
	PointRectangle(PointRectangle const& autre) = delete;//  empecher le copie du constructeur par defaut
	// prototype methode 
	double surfaceRectangle() const;

	// manipulateur
	void set_Hauteur(double);
	void set_Largeur(double);

	// accesseur
	double get_Largeur() const;
	double get_Hauteur() const;
};
double PointRectangle::surfaceRectangle() const {
	return(hauteur * largeur);
}
void PointRectangle::set_Hauteur(double valeurHauteur) {
	this->hauteur = valeurHauteur;
}
void PointRectangle::set_Largeur(double valeurLargeur) {
	this->largeur = valeurLargeur;
}
double PointRectangle::get_Largeur() const {
	return(largeur);
}
double PointRectangle::get_Hauteur() const {
	return(hauteur);
}
#endif
