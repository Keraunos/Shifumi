#include "Joueur.h"
#include <sstream>

using namespace std;

int Joueur::nomId = 0;

Joueur::Joueur() : score(0) {
    nomId++;
    
    // convertir nomId en std::string
    ostringstream oss;
    oss << nomId;
    
    nom = "Joueur_";
    nom.append(oss.str());
}

Joueur::Joueur(const string &_nom) : nom(_nom), score(0) {
}

Joueur::Joueur(const Joueur &orig) {
}

Joueur::~Joueur() {
}

std::string Joueur::getNom() const {
    return this->nom;
}

void Joueur::setNom(const std::string& _nom) {
    this->nom = _nom;
}

void Joueur::ajouterPoint() {
    this->score++;
}

int Joueur::getScore() const {
    return this->score;
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

