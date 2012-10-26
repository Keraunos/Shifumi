
#include <cstdlib>
#include <string>
#include <iostream>
#include "Coup.h"
#include "Feuille.h"
#include "Pierre.h"
#include "Ciseau.h"

using namespace std;

/*
 * Main function
 */
int main(int argc, char** argv) {
    
    Feuille f1, f2;
    Pierre p1, p2;
    Ciseau c1, c2;
    
    // test operateur <<
    cout << "Affichage des types (Feuille, Pierre, Ciseau) :" << endl;
    cout << f1 << endl;
    cout << p1 << endl;
    cout << c1 << endl;
    
    // test operateur ==
    cout << endl << "valeur attendue : 1" << endl;
    cout << (f1 == f2) << endl;
    cout << (p1 == p2) << endl;
    cout << (c1 == c2) << endl;
    cout << "valeur attendue : 0" << endl;
    cout << (f1 == p2) << endl;
    cout << (f1 == c2) << endl;
    cout << (p1 == c2) << endl;
    
    // test operateur <
    
    
    return 0;
}

