#ifndef COUP_H
#define	COUP_H

#include <string>

class Coup {
public:
    Coup();
    Coup(const Coup& orig);
    virtual ~Coup();
    virtual std::string getNom() const = 0;
protected:
    std::string nom;
    
};

#endif	/* COUP_H */

