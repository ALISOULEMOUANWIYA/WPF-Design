#ifndef POINT_H

#define POINT_H

class Point {
	private:
		double x;
		double y;
	public:
		//constructeurs
			Point();
			Point(const Point&);
			Point(double, double);
		//modificateur = ecriture
			void set_x(double);
			void set_y(double);
		//accesseur = lire
			double get_x(double);
			double get_y(double);
		// utulitaire = specifiques à chaque classe
			void print();
};

#endif
