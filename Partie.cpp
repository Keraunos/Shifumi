#include "Partie.h"

Partie::Partie() : numeroTour(0) {
    ajouterJoueurs(2);
}

Partie::Partie(const Partie &orig) {
}

Partie::Partie(const int& nbJoueurs) : numeroTour(0) {
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

void Partie::jouerTour() {
    using namespace std;
    
    numeroTour++;
    cout << " Tour no " << numeroTour << " :" << endl;
    
    Joueur *joueur0 = joueurs[0];
    Joueur *joueur1 = joueurs[1];
    Coup *coup0 = joueur0->obtenirCoup();
    Coup *coup1 = joueur1->obtenirCoup();
    
    cout << " " << joueur0->getNom() << " -> " << *coup0 << endl;
    cout << " " << joueur1->getNom() << " -> " << *coup1 << endl;
    
    if (*coup1 < *coup0) {
        joueur0->ajouterPoint();
        cout << "  " << joueur0->getNom() << " remporte le tour." << endl;
    } else if (*coup0 < *coup1) {
        joueur1->ajouterPoint();
        cout << "  " << joueur1->getNom() << " remporte le tour." << endl;
    } else {
        cout << "  => Egalite." << endl;
    }
    
}