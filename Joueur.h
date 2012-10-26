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
    Joueur(const Joueur &orig);
    virtual ~Joueur();
    Coup* obtenirCoup();
private:
    
};

#endif	/* JOUEUR_H */

