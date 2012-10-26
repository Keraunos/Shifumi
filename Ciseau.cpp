#include "Ciseau.h"
#include "Pierre.h"

using namespace std;

Ciseau::Ciseau() : Coup(CISEAU, PIERRE) {
}

Ciseau::Ciseau(const Ciseau &orig) {
}

Ciseau::~Ciseau() {
}

string Ciseau::getNom() const {
    return nom;
}

string Ciseau::getDominant() const {
    return dominant;
}