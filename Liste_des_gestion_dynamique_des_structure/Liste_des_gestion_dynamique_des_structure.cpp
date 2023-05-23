#include <iostream>
#include<cmath>
struct Point{
    int x;
    int y;
};
struct Place{
    Point *element;
    Place *suivant;
};
struct Liste{
    Place *courant;
    Place *debut;
};
    Point *construire_point(int x, int y);
    void detruire_point(Point *pt);
void afficher_point(Point *pt){ 
       std::cout<<"point ( "<<pt->x<<" , "<<pt->y<<" ) "<<std::endl;
}
Point* construire_point(int x, int y){
    Point *pt;
    pt = new Point;
    if(pt == NULL){
        return(NULL);
    }else{
        pt->x = x;
        pt->y = y;
        return(pt);
    }
}
void detruire_point(Point *pt){
    if(pt){
        delete pt;
    }
}
Place *construire_place(Point *pt){
    Place *pc;
    pc = new Place;
    if(pc == NULL){
        return(NULL);
    }
    pc->element = pt;
    pc->suivant = NULL;
    return(pc);
}
Liste *liste_vide(){
    Liste *pl;
    pl = new Liste;
    if(pl == NULL){
        return(NULL);
    }
    pl->courant = NULL;
    pl->debut = NULL;
    return(pl);
}
Liste *ajout_point(Point *pt, Liste *pl){
    Place *pc;
    pc = construire_place(pt);
    pc->suivant = pl->debut;
    pl->debut = pc;
    return(pl);
}
void detruire_liste(Liste *pl){
    Place *pc1, *pc2;
    if(pl){
        pc1 = pl->debut;
        while(pc1){
            pc2 = pc1->suivant;
            delete pc1->element;//si on doit dtruire ls elements de la liste
            delete pc1;
            pc1 = pc2;
        }
        delete pl;
    }
}
void init(Liste *pl){
    pl->courant = pl->debut;
}
Point* prochain(Liste *pl){
    Point *pt = NULL;
    if(pl->courant){
        pt = pl->courant->element;
        pl->courant = pl->courant->suivant;
        return(pt);
    }else{
        return(NULL);
    }
}
int exiter(Liste *pl){
    return(pl->courant != NULL);
}
void afficher_liste(Liste *pl){
    Point *pt;
    init(pl);
    while(exiter(pl)){
        pt = prochain(pl);
        afficher_point(pt);
    } 
}
void construction_et_atribution_point(Point *pt, Liste *pl, int nbrpt){
    for (int i = 0; i < nbrpt; i++){
        pt = construire_point(ceil(hypot(i,i)), ceil(round(pow(i,i))));
        pl = ajout_point(pt, pl);
    }
}
int main(){
    Point *pt;
    Liste *pl;
    int nbrpt = 4;

    pl = liste_vide();
    construction_et_atribution_point(pt, pl,nbrpt);

    afficher_liste(pl);

    detruire_point(pt);
    detruire_liste(pl);
    
}