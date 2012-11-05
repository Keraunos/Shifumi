
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
#include "Partie.h"


using namespace std;

void tests();

/*
 * Main function
 */
int main(int argc, char** argv) {
    
    // init random numbers
    srand(time(0));
    //tests();
    
    // partie en 15 tours contre une IA
    Partie *p = Partie::getPartieAvecIA();
    p->jouerTours(15);
    
    return 0;
}


/**
 * Proceder aux tests
 */
void tests() {
    
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
    cout << endl << "Test Joueur::obtenirCoup()" << endl;
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
    Humain j5; // Humain ou Joueur
    Coup *c5 = j5.obtenirCoup();
    cout << "  Les deux adresses memoire doivent etre egales :" << endl;
    cout << "    Joueur = " << &j5 << endl;
    cout << "    Joueur = " << c5->getJoueur() << endl;
    
    // test creation d'une partie
    int nbJoueurs = 2;
    cout << endl << "Test new Partie() avec " << nbJoueurs << " joueurs" << endl;
    Partie *part1 = new Partie(nbJoueurs, TYPE_JOUEUR);
    part1->toString();
    
    // test tour de jeu
    int nbTours_1(4);
    cout << endl << "Test partie en " <<  nbTours_1 << " tours avec 2 Joueurs" << endl;
    part1->jouerTours(nbTours_1);
    
    // test partie avec humains
    int nbTours_2(1);
    cout << endl << "Test partie en " << nbTours_2 << " tours avec 2 Humains" << endl;
    Partie *part2 = new Partie(TYPE_HUMAIN);
    part2->jouerTours(nbTours_2);
    
    // test joueur avec une IA et un Humain
    int nbTours_3(20);
    cout << endl << "Test partie en " << nbTours_3 << " tours avec 1 Humain et 1 IA" << endl;
    Partie *part3 = Partie::getPartieAvecIA();
    part3->jouerTours(nbTours_3);
}


