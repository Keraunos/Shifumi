#ifndef JOUEUR_H
#define	JOUEUR_H

#include <cmath>
#include <ctime>

#include "Coup.h"
#include "Feuille.h"
#include "Pierre.h"
#include "Ciseau.h"

class Joueur {
public:
    Joueur();
    Joueur(const std::string &_nom);
    Joueur(const Joueur &orig);
    virtual ~Joueur();
    Coup* obtenirCoup();
    std::string getNom() const;
    void setNom(const std::string &nom);
    void ajouterPoint();
    int getScore() const;
    static int nomId;
private:
    std::string nom;
    int score;
};

#endif	/* JOUEUR_H */

