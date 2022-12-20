//---------------------------------------------------------
// Fichier        : Robot.h
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Fichier permettant de créer les robots et de les déplacer.
// Modifications  :
// Remarque(s)    :
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#ifndef LABO07_A_ROBOT_H
#define LABO07_A_ROBOT_H

#include "array"
#include <random>       //utilisation des fonctions pour générer un nombre random
#include "annexes.h"

using Data = int;
using Coord = std::array<Data,2>;

class Robot {
   friend class Terrain;
public:
	Robot(int MAX_LARGEUR, int MAX_HAUTEUR);
	void setCoordX(int val);
	void setCoordY(int val);
	int getCoordX() const;
	int getCoordY() const;
   int getId() const;
	void deplacement();
	bool aPosition(int ligne, int col);
	bool caseValable(Coord& prochCase) const;

private:
   enum Deplacement {HAUT, BAS, GAUCHE, DROITE};
	Coord coordXY;
   int id;
   static int nbrRobot;
};


#endif //LABO07_A_ROBOT_H
