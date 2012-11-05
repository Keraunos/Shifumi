#ifndef CONFIG_H
#define	CONFIG_H

#include <string>

//#define DEBUG

// failures
#define UNEXPECTED_USER_CHOICE  1
#define UNKNOWN_PLAYER_TYPE     2
#define UNKNOWN_COUP_TYPE        3

// player types
#define TYPE_JOUEUR     0
#define TYPE_HUMAIN     1
#define TYPE_IA         2

typedef int playerType;

// "coup" types
#define TYPE_FEUILLE    0
#define TYPE_PIERRE     1
#define TYPE_CISEAU     2

const std::string FEUILLE("Feuille");
const std::string PIERRE("Pierre");
const std::string CISEAU("Ciseau");
const std::string PROMPT_COUP("Feuille (1) / Pierre (2) / Ciseau (3) ?");

#endif	/* CONFIG_H */
