//---------------------------------------------------------
// Fichier        : Terrain.h
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Fichier permettant de créer le terrain et gérant l'affichage.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO07_A_TERRAIN_H
#define LABO07_A_TERRAIN_H
#include "vector"
#include "Robot.h"
#include <ostream>
#include <algorithm>

class Terrain {
   friend class Robot;
public:
   Terrain(int largeur, int hauteur);
   void ajoutRobot(const Robot& r);
   bool caseOccupee(size_t ligne, size_t col) const;
   void afficher();
   void deplacementRobot();
private:
   std::vector<Robot> vecRobot;
	const int largeur;
	const int hauteur;
};


#endif //LABO07_A_TERRAIN_H
