#ifndef IA_H
#define	IA_H

#include "Joueur.h"
#include "Partie.h"
#include "Humain.h"
#include "Feuille.h"
#include "Pierre.h"
#include "Ciseau.h"

class Partie;

class unknownCoupTypeException {};

class IA : public Joueur {
public:
    IA();
    IA(const Partie *partie);
    IA(const IA& orig);
    virtual ~IA();
    virtual Coup* obtenirCoup();
private:
    const Partie *partie;
};

#endif	/* IA_H */

