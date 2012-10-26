#include "Ciseau.h"

using namespace std;

Ciseau::Ciseau() : Coup("Ciseau") {
}

Ciseau::Ciseau(const Ciseau &orig) {
}

Ciseau::~Ciseau() {
}

string Ciseau::getNom() const{
    return nom;
}

