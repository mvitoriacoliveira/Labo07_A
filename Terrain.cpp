//
// Created by mvito on 12/12/2022.
//

#include "Terrain.h"
#include "annexes.h" // symboles d'affichage
#include <iostream> 	//cout

Terrain::Terrain(const int largeur, const int hauteur) : largeur(this->largeur), hauteur(this->hauteur){

}

void Terrain::ajoutRobot(const Robot &r) {
   vecRobot.push_back(r);
}

//TODO changer le nom de la fonction
//bool Terrain::caseOccupee(size_t ligne, size_t col) const {
//   for(size_t i = 0; i < Terrain::vecRobot.size(); ++i){
//      return vecRobot.at(i).coordXY[0] == col and vecRobot.at(i).coordXY[1] == col;
//  }
//}

void Terrain::afficher() {
   for(int i = 0; i < (hauteur) + 2; ++i){
      for (int j = 0; j < largeur + 2; ++j){
         if (i == 0 or i == hauteur + 1) {
            std::cout << LMT_HOR;
         } else if (j == 0 or j == largeur + 1){
            std::cout << LMT_VERT;
         } else {
            for(size_t i = 0; i < Terrain::vecRobot.size(); ++i){
               if(vecRobot.at(i).getCoordX() == i and vecRobot.at(i).getCoordY() == j){
                  std::cout << vecRobot.at(i).getId();
               }
               else{
                  std::cout << " ";
               }
            }
            //si robot, alors cout son nom/numéro cmpObj
         }
      }
      std::cout << std::endl;
   }
}


std::ostream& operator<<(std::ostream& os, const Terrain& t){
	for(int i = 0; i < (t.hauteur) + 2; ++i){
		for (int j = 0; j < t.largeur + 2; ++j){
			if (i == 0 or i == t.hauteur + 1) {
				os << LMT_HOR;
			} else if (j == 0 or j == t.largeur + 1){
				os << LMT_VERT;
			} else {
				//si robot, alors cout son nom/numéro cmpObj
			}
		}
		os << std::endl;
	}
	return os;
}



//TODO le terrain doit avoir accès aux positions des robots qui s'y déplacent
// terrain est friend class de robot



