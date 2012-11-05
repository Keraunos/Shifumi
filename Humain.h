#ifndef HUMAIN_H
#define	HUMAIN_H

#include <vector>

#include "Joueur.h"

class unexpectedUserChoiceException {};

class Humain : public Joueur {
public:
    Humain();
    Humain(const Humain &orig);
    virtual ~Humain();
    virtual Coup* obtenirCoup();
    std::vector<int> getHisto() const;
private:
    std::vector<int> histo; // historique des coups joues
};

#endif	/* HUMAIN_H */

