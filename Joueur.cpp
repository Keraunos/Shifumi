#include "Joueur.h"

using namespace std;

Joueur::Joueur() {
}

Joueur::Joueur(const Joueur& orig) {
}

Joueur::~Joueur() {
}


Coup* Joueur::obtenirCoup() {
    
    int alea = rand() % 3;
    
    switch(alea) {
        case 0:
            return new Feuille();
        break;
        case 1:
            return new Pierre();
        break;
        case 2:
            return new Ciseau();
        break;
        default:
            return NULL;
    }
    
}

