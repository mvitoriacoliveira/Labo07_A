//
// Created by mvito on 12/12/2022.
//

#ifndef LABO07_A_TERRAIN_H
#define LABO07_A_TERRAIN_H
#include "Robot.h"

using DataTerrain = Robot;
using Ligne = std::vector<DataTerrain>;
using TerrainJeu = std::vector<Ligne>;

class Terrain {
   friend class Robot;
public:
   Terrain(const int largeur, const int hauteur);
   void ajoutRobot(const Robot& r);
};


#endif //LABO07_A_TERRAIN_H
