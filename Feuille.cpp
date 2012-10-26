#include "Feuille.h"
#include "Ciseau.h"

using namespace std;

Feuille::Feuille() : Coup(FEUILLE, CISEAU) {
}

Feuille::Feuille(const Feuille &orig) {
}

Feuille::~Feuille() {
}

string Feuille::getNom() const {
    return nom;
}

string Feuille::getDominant() const {
    return dominant;
}