//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_TERRAIN_H
#define LABO07_A_TERRAIN_H

#include "vector"
#include "Robot.h"
#include <ostream>

class Terrain {
   friend class Robot;
	friend std::ostream& operator<<(std::ostream& os, const Terrain& t);
public:
   Terrain(int largeur, int hauteur);
   void ajoutRobot(const Robot& r);
   bool caseOccupee(size_t ligne, size_t col) const;
   void afficher();
private:
   std::vector<Robot> vecRobot;
   const int largeur;
	const int hauteur;
};


#endif //LABO07_A_TERRAIN_H
