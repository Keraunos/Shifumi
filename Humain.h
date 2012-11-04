#ifndef HUMAIN_H
#define	HUMAIN_H

#include "Joueur.h"

class Humain : public Joueur {
public:
    Humain();
    Humain(const Humain &orig);
    virtual ~Humain();
private:

};

#endif	/* HUMAIN_H */

