#ifndef CONFIG_H
#define	CONFIG_H

#include <string>

//#define DEBUG

// failures
#define UNEXPECTED_USER_CHOICE 1
#define UNKNOWN_PLAYER_TYPE 2

// player types
#define TYPE_JOUEUR     0
#define TYPE_HUMAIN     1
#define TYPE_IA         2

typedef int playerType;

const std::string FEUILLE("Feuille");
const std::string PIERRE("Pierre");
const std::string CISEAU("Ciseau");
const std::string PROMPT_COUP("Feuille (1) / Pierre (2) / Ciseau (3) ?");

#endif	/* CONFIG_H */
