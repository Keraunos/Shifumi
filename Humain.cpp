#include "Humain.h"
#include "Utils.h"

using namespace std;

Humain::Humain() {
}

Humain::Humain(const Humain &orig) {
}

Humain::~Humain() {
}

Coup* Humain::obtenirCoup() const {
    
    const string userPrompt = string(this->getNom().append(" >> "));
    cout << userPrompt << PROMPT_COUP << endl ;
    
    
    // demander a l'utilisateur de choisir son coup
    string in("");
    int choice(0);
    do {
        // prompt a string to avoid unexpected behaviors with int prompts
        cout << userPrompt;
        getline(cin, in);
        choice = myUtils::fromString<int>(in);
#ifdef DEBUG
        cout << "valeur convertie >> " << choice << endl;
#endif
    } while(choice < 1 || choice > 3);
    
    // traiter le choix utilisateur et retourner le coup idoine
    try {
        cout << userPrompt << " coup choisi => ";
        switch (choice) {
            case 1:
                cout << FEUILLE << endl;
                return new Feuille(this);
                break;
            case 2:
                cout << PIERRE << endl;
                return new Pierre(this);
                break;
            case 3:
                cout << CISEAU << endl;
                return new Ciseau(this);
                break;
            default: throw unexpectedUserChoiceException();
        }
    } catch (unexpectedUserChoiceException uUCE) {
#ifdef DEBUG
        cout << "Unexpected user choice exception: " << endl;
        cout << "  expected 1, 2 or 3" << endl;
        cout << "  received " << choice << endl;
#else
        cout << "Une erreur inconnue est survenue." << endl;
#endif
        exit(UNEXPECTED_USER_CHOICE);
    }
    
    
}