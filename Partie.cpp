#include "Partie.h"

Partie::Partie() {
    ajouterJoueurs(2);
}

Partie::Partie(const Partie &orig) {
}

Partie::Partie(const int& nbJoueurs) {
    Joueur *nouveauJoueur;
    for (int i(0); i < nbJoueurs; i++) {
        nouveauJoueur = new Joueur();
        joueurs.push_back(nouveauJoueur);
    }
}

Partie::~Partie() {
}

void Partie::toString() const {
    using namespace std;
    cout << "Liste des joueurs :" << endl ;
    for(int i(0); i < joueurs.size(); i++) {
        cout << "  " << joueurs[i]->getNom() << endl;
    }
}

void Partie::ajouterJoueur() {
    joueurs.push_back(new Joueur());
}

void Partie::ajouterJoueur(Joueur *joueur) {
    joueurs.push_back(joueur);
}

void Partie::ajouterJoueurs(const int &nbJoueurs) {
    for (int i(0); i < nbJoueurs; i++) ajouterJoueur();
}

