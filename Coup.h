#ifndef COUP_H
#define	COUP_H

#include <string>
#include <iostream>

#include "Config.h"
//#include "Joueur.h"

class Joueur;


class Coup {
public:
    Coup();
    Coup(const std::string &nom, const std::string &dominant);
    Coup(const Coup &orig);
    virtual ~Coup();
    virtual std::string getNom() const = 0;
    virtual std::string getDominant() const = 0;
    void afficher(std::ostream &flux) const;
    void setJoueur(const Joueur *joueur);
    const Joueur* getJoueur() const;
protected:
    std::string nom;
    std::string dominant;
    const Joueur *joueur;
};


std::ostream &operator<<(std::ostream &flux, const Coup &coup);
bool operator==(const Coup &coup1, const Coup &coup2);
bool operator<(const Coup &coup1, const Coup &coup2);
bool operator>(const Coup &coup1, const Coup &coup2);


#endif	/* COUP_H */

