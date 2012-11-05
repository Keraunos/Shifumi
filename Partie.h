#ifndef PARTIE_H
#define	PARTIE_H

#include <string>
#include <vector>

#include "Joueur.h"


class Partie {
public:
    Partie();
    Partie(const Partie& orig);
    Partie(const int& nbJoueurs);
    virtual ~Partie();
    void toString() const;
    void jouerTour();
    void afficherScore() const;
    void ajouterJoueur();
    void ajouterJoueur(Joueur *joueur);
    void ajouterJoueurs(const int &nbJoueurs);
private:
    std::vector<Joueur*> joueurs;
    int numeroTour;
};

#endif	/* PARTIE_H */

