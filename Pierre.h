#ifndef PIERRE_H
#define	PIERRE_H

#include "Coup.h"

class Pierre : public Coup {
public:
    Pierre();
    Pierre(const Pierre &orig);
    virtual ~Pierre();
    virtual std::string getNom() const;
private:

};

#endif	/* PIERRE_H */

