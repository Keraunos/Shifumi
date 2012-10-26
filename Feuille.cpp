#include "Feuille.h"

using namespace std;

Feuille::Feuille() : Coup("Feuille") {
}

Feuille::Feuille(const Feuille &orig) {
}

Feuille::~Feuille() {
}

string Feuille::getNom() const{
    return nom;
}