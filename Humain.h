#ifndef HUMAIN_H
#define	HUMAIN_H

#include "Joueur.h"

class unexpectedUserChoiceException {};

class Humain : public Joueur {
public:
    Humain();
    Humain(const Humain &orig);
    virtual ~Humain();
    virtual Coup* obtenirCoup() const;
private:

};

#endif	/* HUMAIN_H */

