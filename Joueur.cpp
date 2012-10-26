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
            return new Feuille(this);
        break;
        case 1:
            return new Pierre(this);
        break;
        case 2:
            return new Ciseau(this);
        break;
        default:
            return NULL;
    }
    
}

