//
// Created by mvito on 12/12/2022.
//

#include "Terrain.h"

Terrain::Terrain(const int largeur, const int hauteur) {
   TerrainJeu terrain(hauteur);
   Ligne l(largeur);

  for(int i = 0; i < hauteur; ++i){
     for(int j = 0; j < largeur; ++j){
        terrain[i][j] = l[j];
     }
     
  }


}

void Terrain::ajoutRobot(const Robot &r) {
  //TerrainJeu[r.coordXY[0]][r.coordXY[1]] = r;
}



