//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_ROBOT_H
#define LABO07_A_ROBOT_H

#include "array"
#include <random>       //utilisation des fonctions pour générer un nombre random
//#include "Terrain.h"

using Data = int;
using Coord = std::array<Data,2>;

class Robot {
   //friend class Terrain;
public:
	Robot(int MAX_LARGEUR, int MAX_HAUTEUR);
	void setCoordX(int val);
	void setCoordY(int val);
	int getCoordX() const;
	int getCoordY() const;
   int getId() const;
	void deplacement();
private:
   enum Deplacement {HAUT, BAS, GAUCHE, DROITE};
	int numAleatoire(int min, int max);
	//Position robot
	Coord coordXY;
   int id;
   static int nbrRobot;
	//un robot se deplace sur un terrain précis, mettre en donnée?
};


#endif //LABO07_A_ROBOT_H
