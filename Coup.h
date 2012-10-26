#ifndef COUP_H
#define	COUP_H

#include <string>
#include <iostream>

class Coup {
public:
    Coup();
    Coup(const std::string &nom);
    Coup(const Coup &orig);
    virtual ~Coup();
    virtual std::string getNom() const = 0;
    void afficher(std::ostream &flux) const;
protected:
    std::string nom;
    
};

std::ostream &operator<<(std::ostream &flux, const Coup &coup);
bool operator==(const Coup &coup1, const Coup &coup2);


#endif	/* COUP_H */

