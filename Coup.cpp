#include "Coup.h"

using namespace std;

Coup::Coup() {
}

Coup::Coup(const Coup &orig) {
}

Coup::Coup(const string &nom) : nom(nom) {
}

Coup::~Coup() {
}

void Coup::afficher(std::ostream &flux) const {
    
    cout << "type : " << getNom();
}

std::ostream &operator<<(std::ostream &flux, const Coup &coup) {
    
    coup.afficher(flux);
    return flux;
}

bool operator==(const Coup &coup1, const Coup &coup2) {
    
    if (coup1.getNom().compare(coup2.getNom()) == 0) {
        return true;
    } else {
        return false;
    }
    
}


