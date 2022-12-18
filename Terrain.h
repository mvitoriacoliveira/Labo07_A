//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_TERRAIN_H
#define LABO07_A_TERRAIN_H
#include "vector"
#include "Robot.h"

using DataTerrain = Robot*;
using Ligne = std::vector<DataTerrain>;
using TerrainJeu = std::vector<Ligne>;

class Terrain {
   friend class Robot;
public:
   Terrain(int largeur, int hauteur);
   void ajoutRobot(const Robot& r);
private:

};


#endif //LABO07_A_TERRAIN_H
