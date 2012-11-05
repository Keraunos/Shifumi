#ifndef CISEAU_H
#define	CISEAU_H

#include "Coup.h"

class Ciseau : public Coup {
public:
    Ciseau();
    Ciseau(const Joueur *joueur);
    Ciseau(const Ciseau &orig);
    virtual ~Ciseau();
    virtual std::string getNom() const;
    virtual std::string getDominant() const;
    static int getNbCiseaux();
private:
    static int nbCiseaux;

};

#endif	/* CISEAU_H */

