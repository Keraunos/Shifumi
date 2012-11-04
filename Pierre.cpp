#include "Pierre.h"
#include "Feuille.h"

using namespace std;

Pierre::Pierre() : Coup(PIERRE, FEUILLE) {
}

Pierre::Pierre(const Joueur *joueur) : Coup(PIERRE, FEUILLE) {
    this->setJoueur(joueur);
}

Pierre::Pierre(const Pierre &orig) {
}

Pierre::~Pierre() {
}

string Pierre::getNom() const{
    return nom;
}

string Pierre::getDominant() const {
    return dominant;
}