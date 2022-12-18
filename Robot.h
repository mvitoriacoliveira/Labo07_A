//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_ROBOT_H
#define LABO07_A_ROBOT_H

#include "array"
#include "random"       //utilisation des fonctions pour générer un nombre random


enum Deplacement {HAUT, BAS, GAUCHE, DROITE};
using Data = int;
using Coord = std::array<Data,2>;

class Robot {
public:
	Robot(int MAX_LARGEUR, int MAX_HAUTEUR);
   Robot();
	void setCoordX(int val);
	void setCoordY(int val);
	int getCoordX() const;
	int getCoordY() const;
	void deplacement(Coord coord);
private:
	int numAleatoire(int min, int max);
	static int id;
	Coord coordXY;
};


#endif //LABO07_A_ROBOT_H
