
#include <cstdlib>
#include <string>
#include <iostream>

#include "Coup.h"
#include "Feuille.h"
#include "Pierre.h"
#include "Ciseau.h"
#include "Joueur.h"
#include "Humain.h"
#include "IA.h"


using namespace std;

void tests();

/*
 * Main function
 */
int main(int argc, char** argv) {
    
    tests();
    
    return 0;
}


/**
 * Proceder aux tests
 */
void tests() {
    
    // init random numbers
    srand(time(0));
    
    Feuille f1, f2;
    Pierre p1, p2;
    Ciseau c1, c2;
    
    // test operateur <<
    cout << "Test operateur <<" << endl;
    cout << "  Classe Feuille => \"" << f1 << "\"" << endl;
    cout << "  Classe Pierre  => \"" << p1 << "\"" << endl;
    cout << "  Classe Ciseau  => \"" << c1 << "\"" << endl;
    
    // test operateur ==
    cout << endl << "Test operateur ==" << endl;
    cout << "  Valeur attendue : 1" << endl;
    cout << "    " << (f1 == f2) << endl;
    cout << "    " << (p1 == p2) << endl;
    cout << "    " << (c1 == c2) << endl;
    cout << "  Valeur attendue : 0" << endl;
    cout << "    " << (f1 == p2) << endl;
    cout << "    " << (f1 == c2) << endl;
    cout << "    " << (p1 == c2) << endl;
    
    // test operateur <
    cout << endl << "Test operateur <" << endl;
    cout << "  Valeur attendue : 1" << endl;
    cout << "    " << (p1 < f1) << endl;
    cout << "    " << (f1 < c1) << endl;
    cout << "    " << (c1 < p1) << endl;
    cout << "  Valeur attendue : 0" << endl;
    cout << "    " << (f1 < p1) << endl;
    cout << "    " << (c1 < f1) << endl;
    cout << "    " << (p1 < c1) << endl;
    
    // tests Joueur
    Joueur j;
    Coup *c;
    int nbFeuilles(0), nbPierres(0), nbCiseaux(0), nbTours(100);
    cout << endl << "Test Joueur.obtenirCoup()" << endl;
    for (int i(0); i<nbTours; i++) {
        c = j.obtenirCoup();
        if (c->getNom() == FEUILLE) {
            nbFeuilles++;
        } else if (c->getNom() == PIERRE) {
            nbPierres++;
        } else if (c->getNom() == CISEAU) {
            nbCiseaux++;
        }
    }
    cout << "Sur " << nbTours << " coups : ";
    cout << nbFeuilles << " feuilles, ";
    cout << nbPierres << " pierres, ";
    cout << nbCiseaux << " ciseaux." << endl;
    
    // tests pointeur sur Joueur dans Coup
    cout << endl << "Test Coup.joueur" << endl;
    IA j5; // IA, Humain ou Joueur
    Coup *c5 = j5.obtenirCoup();
    cout << "  Les deux adresses memoire doivent etre egales :" << endl;
    cout << "    Joueur = " << &j5 << endl;
    cout << "    Joueur = " << c5->getJoueur() << endl;
    
}


