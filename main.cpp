
#include <cstdlib>
#include <string>
#include <iostream>

//#include "Config.h"
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
    cout << endl << "Test operateur == :" << endl;
    cout << "Valeur attendue : 1" << endl;
    cout << (f1 == f2) << endl;
    cout << (p1 == p2) << endl;
    cout << (c1 == c2) << endl;
    cout << "valeur attendue : 0" << endl;
    cout << (f1 == p2) << endl;
    cout << (f1 == c2) << endl;
    cout << (p1 == c2) << endl;
    
    // test operateur <
    cout << endl << "Test operateur < :" << endl;
    cout << endl << "valeur attendue : 1" << endl;
    cout << (p1 < f1) << endl;
    cout << (f1 < c1) << endl;
    cout << (c1 < p1) << endl;
    cout << endl << "valeur attendue : 0" << endl;
    cout << (f1 < p1) << endl;
    cout << (c1 < f1) << endl;
    cout << (p1 < c1) << endl;
    
    
    return 0;
}

