#ifndef PARTIE_H
#define	PARTIE_H

#include <string>
#include <vector>

#include "Joueur.h"
#include "Humain.h"
#include "IA.h"

class unknownPlayerTypeException {};

class Partie {
public:
    Partie(const playerType &typeJoueurs);
    Partie(const Partie& orig);
    Partie(const int& nbJoueurs, const playerType &typeJoueurs);
    virtual ~Partie();
    void toString() const;
    void jouerTour();
    void jouerTours(const int &nbTours);
    void afficherScore() const;
    void ajouterJoueur(const playerType &typeJoueurs);
    void ajouterJoueur(Joueur *joueur);
    void ajouterJoueurs(const int &nbJoueurs, const playerType &typeJoueurs);
private:
    std::vector<Joueur*> joueurs;
    int numeroTour;
};

#endif	/* PARTIE_H */

