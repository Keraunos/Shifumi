#ifndef PIERRE_H
#define	PIERRE_H

#include "Coup.h"

class Pierre : public Coup {
public:
    Pierre();
    Pierre(const void *joueur);
    Pierre(const Pierre &orig);
    virtual ~Pierre();
    virtual std::string getNom() const;
    virtual std::string getDominant() const;
private:

};

#endif	/* PIERRE_H */

