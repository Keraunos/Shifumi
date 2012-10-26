#include "Pierre.h"

using namespace std;

Pierre::Pierre() : Coup("Pierre") {
}

Pierre::Pierre(const Pierre &orig) {
}

Pierre::~Pierre() {
}

string Pierre::getNom() const{
    return nom;
}