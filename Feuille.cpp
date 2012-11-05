#include "Feuille.h"
#include "Ciseau.h"

using namespace std;

int Feuille::nbFeuilles = 0;

Feuille::Feuille() : Coup(FEUILLE, CISEAU) {
    nbFeuilles++;
}

Feuille::Feuille(const Joueur *joueur) : Coup(FEUILLE, CISEAU) {
    nbFeuilles++;
    this->setJoueur(joueur);
}

Feuille::Feuille(const Feuille &orig) {
    nbFeuilles++;
}

Feuille::~Feuille() {
}

string Feuille::getNom() const {
    return nom;
}

string Feuille::getDominant() const {
    return dominant;
}