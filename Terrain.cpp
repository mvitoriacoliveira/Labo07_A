//
// Created by mvito on 12/12/2022.
//

#include "Terrain.h"
#include "annexes.h" // symboles d'affichage
#include <iostream> 	//cout

using namespace std;

Terrain::Terrain(int lrg, const int htr) : largeur(lrg), hauteur(htr) {}

void Terrain::ajoutRobot(const Robot &r) {
  // TerrainJeu[r.coordXY[0]][r.coordXY[1]] = r;
}

std::ostream& operator<<(std::ostream& os, const Terrain& t){
	for(int i = 0; i < (t.hauteur) + 2; ++i){
		for (int j = 0; j < t.largeur + 2; ++j){
			if (i == 0 or i == t.hauteur + 1) {
				os << LMT_HOR;
			} else if (j == 0 or j == t.largeur + 1){
				os << LMT_VERT;
			} else {
				os << " ";
				//si robot, alors cout son nom/numéro cmpObj
			}
		}
		os << endl;
	}
	return os;
}

//TODO le terrain doit avoir accès aux positions des robots qui s'y déplacent
// terrain est friend class de robot



