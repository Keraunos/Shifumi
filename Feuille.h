#ifndef FEUILLE_H
#define	FEUILLE_H

#include "Coup.h"

class Feuille : public Coup {
public:
    Feuille();
    Feuille(const Joueur *joueur);
    Feuille(const Feuille &orig);
    virtual ~Feuille();
    virtual std::string getNom() const;
    virtual std::string getDominant() const;
    static int getNbFeuilles();
private:
    static int nbFeuilles;
};

#endif	/* FEUILLE_H */

