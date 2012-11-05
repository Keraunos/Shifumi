#include "Ciseau.h"
#include "Pierre.h"

using namespace std;

int Ciseau::nbCiseaux = 0;

Ciseau::Ciseau() : Coup(CISEAU, PIERRE) {
    nbCiseaux++;
}

Ciseau::Ciseau(const Joueur *joueur) : Coup(CISEAU, PIERRE) {
    nbCiseaux++;
    this->setJoueur(joueur);
}

Ciseau::Ciseau(const Ciseau &orig) {
    nbCiseaux++;
}

Ciseau::~Ciseau() {
}

string Ciseau::getNom() const {
    return nom;
}

string Ciseau::getDominant() const {
    return dominant;
}

int Ciseau::getNbCiseaux() {
    return nbCiseaux;
}