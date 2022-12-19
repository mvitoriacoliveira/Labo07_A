
#ifndef LABO07_A_ANNEXES_H
#define LABO07_A_ANNEXES_H

#include <string>
#include <random>

//------------------------------------------------------
// Constantes de saisie
//TODO
const std::string MSG_BIENVENUE = "Ce programme ...";
const std::string MSG_ERREUR = "Saisie invalide...";
const std::string MSG_LRG = "largeur ";
const std::string MSG_HTR = "hauteur ";
const std::string MSG_NB_OBJ = "nbre object ";

//------------------------------------------------------
// Bornes de saisie
const int MIN_HTR = 0;
const int MAX_HTR = 1000;
const int MIN_LRG = 0;
const int MAX_LRG = 1000;
const int MIN_NB_OBJ = 0;
const int MAX_NB_OBJ = 9;

//-----------------------------------
// Constantes d'affichage
const char LMT_HOR = '-';
const char LMT_VERT = '|';

/**
 *  Affiche un message de bienvenue et vérifie si la saisie utilisateur est comprise
 *  entre min et max. Retourne la valeur saisie par l'utilisateur si celle-ci
 *  est correcte, autrement affiche un message d'erreur.
 *
 *  Repris de la démo : https://github.com/gmbreguet/PRG1_DEMO/blob/40f1ef41f8f2ee1d8c1a1c7fc1cc562b88e620c8/04_Fonctions/04_nbreJoursMois.cpp#L45
 */
int saisie(const std::string& msgInvite,
			  const std::string& msgErreur,
			  int min,
			  int max);

int numAleatoire(int min, int max);

void affichage(const int largeur, const int hauteur);

#endif //LABO07_A_ANNEXES_H
