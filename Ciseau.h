#ifndef CISEAU_H
#define	CISEAU_H

#include "Coup.h"

class Ciseau : public Coup {
public:
    Ciseau();
    Ciseau(const void *joueur);
    Ciseau(const Ciseau &orig);
    virtual ~Ciseau();
    virtual std::string getNom() const;
    virtual std::string getDominant() const;
private:

};

#endif	/* CISEAU_H */

