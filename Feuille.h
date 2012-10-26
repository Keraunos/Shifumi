#ifndef FEUILLE_H
#define	FEUILLE_H

#include "Coup.h"

class Feuille : public Coup {
public:
    Feuille();
    Feuille(const Feuille& orig);
    virtual ~Feuille();
    virtual std::string getNom();
private:

};

#endif	/* FEUILLE_H */

