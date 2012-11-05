#include "Pierre.h"
#include "Feuille.h"

using namespace std;

int Pierre::nbPierres = 0;

Pierre::Pierre() : Coup(PIERRE, FEUILLE) {
    nbPierres++;
}

Pierre::Pierre(const Joueur *joueur) : Coup(PIERRE, FEUILLE) {
    nbPierres++;
    this->setJoueur(joueur);
}

Pierre::Pierre(const Pierre &orig) {
    nbPierres++;
}

Pierre::~Pierre() {
}

string Pierre::getNom() const{
    return nom;
}

string Pierre::getDominant() const {
    return dominant;
}

int Pierre::getNbPierres() {
    return nbPierres;
}