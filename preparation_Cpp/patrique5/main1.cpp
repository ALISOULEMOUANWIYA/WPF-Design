#include <iostream>

using namespace std;

// Création d'un tableau de pointeurs triples d'entier.
int**** mCreerTableauDynamiquePointeursTriplesEntiers(int pGrilles, int pLignes, int pColonnes)
{
    int**** vTableau = new int***[pGrilles]; 
    // Pour chaque pointeur triple du tableau  
    for(int vIndexGrille = 0; vIndexGrille  < pGrilles; vIndexGrille ++) 
    {
        // Créer un tableau de pointeurs doubles dans vTableau[vIndexGrille].
        vTableau[vIndexGrille] = new int** [pLignes]; 
		
        // Pour chaque pointeur double du tableau vTableau[vIndexGrille].
        for(int vIndexLigne = 0; vIndexLigne < pLignes; vIndexLigne++) 
        {
            // Créer un tableau de pointeurs dans vTableau[vIndexGrille][vIndexLigne].
            vTableau[vIndexGrille][vIndexLigne] = new int* [pColonnes];
			
            // Pour chaque pointeur du tableau vTableau[vIndexGrille][vIndexLigne]
            for(int vIndexColonne = 0; vIndexColonne < pColonnes; vIndexColonne++)
            {
                // Créer un entier dans vTableau[vIndexGrille][vIndexLigne][vIndexColonne].
                vTableau[vIndexGrille][vIndexLigne][vIndexColonne] = new int;
				
                // Remplit l'entier avec son numéro d'élément
                *(vTableau[vIndexGrille][vIndexLigne][vIndexColonne]) = (vIndexGrille * pLignes * pColonnes) + (vIndexLigne * pColonnes) + vIndexColonne + 1;
            }
        }
    }
    return vTableau;
}

void mDetruireTableauDynamiquePointeursTriplesEntiers(int**** pTableau, int pGrilles, int pLignes, int pColonnes)
{
    // Pour chaque pointeur triple du tableau pTableau
    for(int vIndexGrille = 0; vIndexGrille < pGrilles; vIndexGrille++)
    {
        // Pour chaque pointeur double du tableau pTableau[vIndexGrille]
        for(int vIndexLigne = 0; vIndexLigne < pLignes; vIndexLigne++) 
        {
            // Pour chaque pointeur du tableau pTableau[vIndexGrille][vIndexLigne]
            for(int vIndexColonne = 0; vIndexColonne < pColonnes; vIndexColonne++)
            {
                // Détruire l'entier dans pTableau[vIndexGrille][vIndexLigne][vIndexColonne].
                delete pTableau[vIndexGrille][vIndexLigne][vIndexColonne];
            }
            // Détruire le tableau de pointeurs dans pTableau[vIndexGrille][vIndexLigne].
            delete [] pTableau[vIndexGrille][vIndexLigne];
        }
        // Détruire le tableau de pointeurs doubles dans pTableau[vIndexGrille].
        delete [] pTableau[vIndexGrille]; 
    }
    // Destruction du tableau de pointeurs triples d'entiers.
    delete [] pTableau;
}

void mAfficherTableau(int**** pTableau, int pGrilles, int pLignes, int pColonnes)
{
	for(int vIndexGrille = 0; vIndexGrille < pGrilles; vIndexGrille++)
    {
        cout << "Grille : " << vIndexGrille + 1 << endl;
        for(int vIndexLigne = 0; vIndexLigne < pLignes; vIndexLigne++)
        {
            cout << "    Ligne : " << vIndexLigne + 1 << endl;
            for(int vIndexColonne = 0; vIndexColonne < pColonnes; vIndexColonne++)
            {
                cout << "        Colonne : " << vIndexColonne + 1 << " = " << *pTableau[vIndexGrille][vIndexLigne][vIndexColonne] << endl; 
            }
        }
    }
	cout << endl << "Appuyez sur [Entree] pour continuer..." << endl;	
	getchar();
}

void mInverserColonnes(int**** pTableau, int pGrilles, int pLignes, int pColonnes)
{
    for(int vIndexGrille = 0; vIndexGrille < pGrilles; vIndexGrille++)
    {          
        for(int vIndexLigne = 0; vIndexLigne < pLignes; vIndexLigne++)
        {
            for(int vIndexColonne = 0; vIndexColonne < (pColonnes / 2); vIndexColonne++)
            {
                int* vTemporaire = pTableau[vIndexGrille][vIndexLigne][vIndexColonne];
                pTableau[vIndexGrille][vIndexLigne][vIndexColonne] = pTableau[vIndexGrille][vIndexLigne][(pColonnes - 1) - vIndexColonne];
                pTableau[vIndexGrille][vIndexLigne][(pColonnes - 1) - vIndexColonne] = vTemporaire;
            }
        }
    }
}

void mInverserLignes(int**** pTableau, int pGrilles, int pLignes)
{
    for(int vIndexGrille = 0; vIndexGrille < pGrilles; vIndexGrille++)
    {          
        for(int vIndexLigne = 0; vIndexLigne < (pLignes / 2); vIndexLigne++)
        {
            int** vTemporaire = pTableau[vIndexGrille][vIndexLigne];
            pTableau[vIndexGrille][vIndexLigne] = pTableau[vIndexGrille][(pLignes - 1) - vIndexLigne];
            pTableau[vIndexGrille][(pLignes - 1) - vIndexLigne] = vTemporaire;
        }
    }
}

void mInverserGrilles(int**** pTableau, int pGrilles)
{
    for(int vIndexGrille = 0; vIndexGrille < (pGrilles / 2); vIndexGrille++)
    {          
        int*** vTemporaire = pTableau[vIndexGrille];
        pTableau[vIndexGrille] = pTableau[(pGrilles - 1) - vIndexGrille];
        pTableau[(pGrilles - 1) - vIndexGrille] = vTemporaire;
    }
}

int main(int argc, char* argv[])
{
    // Valeur variables
    int vColonnes = 2;
    int vLignes = 3;
    int vGrilles = 4;

    int**** vTableau = mCreerTableauDynamiquePointeursTriplesEntiers(vGrilles, vLignes, vColonnes);
    
    cout << "Tableau a l'etat initial" << endl << endl;
	
    // Affiche le tableau
    mAfficherTableau(vTableau, vGrilles, vLignes, vColonnes);
    // Le tableau est trié du plus petit au plus grand.

    cout << "Inversion des Colonnes" << endl << endl;
	
    // Intervertit les colonnes
    mInverserColonnes(vTableau, vGrilles, vLignes, vColonnes);
    // Affiche le résultat
    mAfficherTableau(vTableau, vGrilles, vLignes, vColonnes);

    cout  << "Invertion des Lignes" << endl << endl;
	
    // Intervertit les lignes
    mInverserLignes(vTableau, vGrilles, vLignes);
    // Affiche le résultat
    mAfficherTableau(vTableau, vGrilles, vLignes, vColonnes);

    cout << "Inversion des Grilles" << endl << endl;
	
    // Intervertit les Grilles
    mInverserGrilles(vTableau, vGrilles);
    // Affiche le résultat
    mAfficherTableau(vTableau, vGrilles, vLignes, vColonnes);
    // Le tableau est trié du plus grand au plus petit.
    mDetruireTableauDynamiquePointeursTriplesEntiers(vTableau, vGrilles, vLignes, vColonnes);
    
    return 0;
}