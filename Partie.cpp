#include "Partie.h"

using namespace std;

Partie::Partie() {
}

Partie* Partie::getPartieAvecIA() {
    Partie *p = new Partie();
    
    IA *ia = new IA(p);
    Humain *h = new Humain();
    p->ajouterJoueur(ia);
    p->ajouterJoueur(h);
    
    return p;
}

Partie::Partie(const playerType &typeJoueurs) : numeroTour(0) {
    ajouterJoueurs(2, typeJoueurs);
}

Partie::Partie(const Partie &orig) {
}

Partie::Partie(const int& nbJoueurs, const playerType &typeJoueurs) : numeroTour(0) {
    Joueur *nouveauJoueur;
    for (int i(0); i < nbJoueurs; i++) {
        nouveauJoueur = new Joueur();
        joueurs.push_back(nouveauJoueur);
    }
}

Partie::~Partie() {
}

// affiche la liste des joueurs
void Partie::toString() const {
    cout << "Liste des joueurs :" << endl ;
    for(int i(0); i < joueurs.size(); i++) {
        cout << "  " << joueurs[i]->getNom() << " [classe = " << typeid(*joueurs[i]).name() << "]" << endl;
    }
}

void Partie::ajouterJoueur(const playerType &typeJoueurs) {
    switch (typeJoueurs) {
        case TYPE_JOUEUR:
            joueurs.push_back(new Joueur());
            break;
        case TYPE_HUMAIN:
            joueurs.push_back(new Humain());
            break;
        case TYPE_IA:
            joueurs.push_back(new IA());
            break;
        default:
            throw new unknownPlayerTypeException();
    }
    
}

void Partie::ajouterJoueur(Joueur *joueur) {
    joueurs.push_back(joueur);
}

void Partie::ajouterJoueurs(const int &nbJoueurs, const playerType &typeJoueurs) {
    for (int i(0); i < nbJoueurs; i++) ajouterJoueur(typeJoueurs);
}

// tour de jeu pour 2 joueurs uniquement
void Partie::jouerTour() {
    
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
    
    afficherScore();
    
    // supprimer les coups
    delete coup0;
    delete coup1;
}

void Partie::jouerTours(const int &nbTours) {
    
    for (int i(0); i < nbTours; i++) jouerTour();
    
    // afficher le total de Feuilles, Pierres et Ciseaux
    cout << "Total Feuilles : " << Feuille::getNbFeuilles() << endl;
    cout << "Total Pierres : " << Pierre::getNbPierres() << endl;
    cout << "Total Ciseaux : " << Ciseau::getNbCiseaux() << endl;
    
}

void Partie::afficherScore() const {
    
    cout << "Scores :" << endl;
    for(int i(0); i < joueurs.size(); i++) {
        cout << "  " << joueurs[i]->getNom() << " -> " << joueurs[i]->getScore() << endl;
    }
    
}

Humain* Partie::getJoueurHumain() const {
    
    for (int i(0); i < joueurs.size(); i++)
        if (typeid(*joueurs[i]) == typeid(Humain))
            return static_cast<Humain*>(joueurs[i]);
    
}