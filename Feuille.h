#ifndef FEUILLE_H
#define	FEUILLE_H

#include "Coup.h"

class Feuille : public Coup {
public:
    Feuille();
    Feuille(const Feuille &orig);
    virtual ~Feuille();
    virtual std::string getNom() const;
    virtual std::string getDominant() const;
private:

};

#endif	/* FEUILLE_H */

