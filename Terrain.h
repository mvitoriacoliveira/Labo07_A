//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_TERRAIN_H
#define LABO07_A_TERRAIN_H
#include "vector"
#include "Robot.h"
#include <ostream>

using DataTerrain = Robot*;
using Ligne = std::vector<DataTerrain>;
using TerrainJeu = std::vector<Ligne>;

class Terrain {
   friend class Robot;
	friend std::ostream& operator<<(std::ostream& os, const Terrain& t);
	bool caseOccupee(const Terrain& t);
public:
   Terrain(int largeur, int hauteur);
   void ajoutRobot(const Robot& r);
private:
<<<<<<<<< Temporary merge branch 1

=========
	const int largeur;
	const int hauteur;
>>>>>>>>> Temporary merge branch 2
};


#endif //LABO07_A_TERRAIN_H
