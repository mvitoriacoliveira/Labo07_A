//---------------------------------------------------------
// Fichier        : Terrain.cpp
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Fichier contenant l'algorithme de création du terrain et
//                  de son affichage.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include "Terrain.h"
#include "annexes.h" // symboles d'affichage
#include <iostream> 	//cout

Terrain::Terrain(const int lrg, const int htr) : largeur(lrg), hauteur(htr){}

void Terrain::ajoutRobot(const Robot &r) {
   vecRobot.push_back(r);
}

//TODO changer le nom de la fonction
bool Terrain::caseOccupee(size_t ligne, size_t col) const {
   for(size_t i = 0; i < Terrain::vecRobot.size(); ++i){
      if(vecRobot.at(i).getCoordX() == ligne and vecRobot.at(i).getCoordY() == col){
         std::cout << vecRobot.at(i).getId();
         return true;
      }
   }
   return false;
}

void Terrain::afficher() {
   for(int i = 0; i < (hauteur) + 2; ++i) {
      for (int j = 0; j < largeur + 2; ++j) {
         if (i == 0 or i == hauteur + 1) {
            std::cout << LMT_HOR;
         } else if (j == 0 or j == largeur + 1) {
            std::cout << LMT_VERT;
         }
         else if(!caseOccupee(i, j)){
            std::cout << " ";
         }
      }
      std::cout << std::endl;
   }
}

void Terrain::deplacementRobot() {
   std::random_device rd;
   std::shuffle(vecRobot.begin(), vecRobot.end(), rd);

   for(int i = 0; i < hauteur; ++i){
      for(int j = 0; j < largeur; ++j){
         for(size_t k = 0; k < vecRobot.size(); ++k){
            //if(!caseOccupee(i, j)){
            //   vecRobot.at(k).deplacement();
            //}
            //else{
               //tué le robot à la case
            //}
         }
      }
   }
}



