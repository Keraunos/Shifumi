#include "IA.h"

using namespace std;

IA::IA() {
}

IA::IA(const Partie *partie) : partie(partie) {
    
}

IA::IA(const IA& orig) {
}

IA::~IA() {
}

Coup* IA::obtenirCoup() {
    
    vector<int> histo = partie->getJoueurHumain()->getHisto();
    
    // calculer les frequences des coup joues par l'Humain
    int nbFeuilles(0), nbPierres(0), nbCiseaux(0), total(histo.size());
    float tauxFeuilles(0), tauxPierres(0), tauxCiseaux(0);
    
    if (total == 0) {
        return this->Joueur::obtenirCoup();
    }
    
    for(int i(0); i < total; i++) {
        switch (histo[i]) {
            case TYPE_FEUILLE:
                nbFeuilles++;
                break;
            case TYPE_PIERRE:
                nbPierres++;
                break;
            case TYPE_CISEAU:
                nbCiseaux++;
                break;
            default: throw new unknownCoupTypeException();
        }
    }
    
    tauxFeuilles = (float) nbFeuilles / total;
    tauxPierres = (float) nbPierres / total;
    tauxCiseaux = (float) nbCiseaux / total;
    
    
    // effectuer un choix aleatoire pondere pour le coup a jouer,
    // en choisissant preferentiellement des coups superieurs aux coups les plus
    // frequemment joues par l'Humain
    float choix = (float) (rand() % 100) / 100;
    
    if (choix < tauxFeuilles) {
        return new Ciseau(this);
    } else if (choix >= tauxFeuilles && choix < tauxFeuilles + tauxPierres) {
        return new Feuille(this);
    } else {
        return new Pierre(this);
    }
}
