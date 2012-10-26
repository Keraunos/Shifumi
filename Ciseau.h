#ifndef CISEAU_H
#define	CISEAU_H

#include "Coup.h"

class Ciseau : public Coup {
public:
    Ciseau();
    Ciseau(const Ciseau &orig);
    virtual ~Ciseau();
    virtual std::string getNom() const;
private:

};

#endif	/* CISEAU_H */

