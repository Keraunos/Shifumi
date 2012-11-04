#include "Coup.h"

using namespace std;

Coup::Coup() {
}

Coup::Coup(const Coup &orig) {
}

Coup::Coup(const string &nom, const string &dominant)
        : nom(nom), dominant(dominant) {}

Coup::~Coup() {
}

void Coup::afficher(ostream &flux) const {
    cout << "type : " << getNom();
}

void Coup::setJoueur(const Joueur *joueur) {
    this->joueur = joueur;
}

const Joueur* Coup::getJoueur() const {
    return this->joueur;
}

ostream &operator<<(ostream &flux, const Coup &coup) {
    
    coup.afficher(flux);
    return flux;
}

bool operator==(const Coup &coup1, const Coup &coup2) {
    
    if (coup1.getNom().compare(coup2.getNom()) == 0) {
        return true;
    } else {
        return false;
    }
    
}

bool operator<(const Coup &coup1, const Coup &coup2) {
    
    if (coup1.getDominant() == coup2.getNom()) {
        return true;
    } else {
        return false;
    }
    
}

bool operator>(const Coup &coup1, const Coup &coup2) {
    return !operator<(coup1, coup2);
}