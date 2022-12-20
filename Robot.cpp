//---------------------------------------------------------
// Fichier        : Robot.cpp
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Fichier contenant l'agorithme de création d'un robot et de son déplacement
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include "Robot.h"

int Robot::nbrRobot = 0;

Robot::Robot(const int maxLargeur, const int maxHauteur){
   // Incrémente l'cmpObj afin qu'il soit unique pour chaque robot créé
	Robot::id = ++nbrRobot;

   coordXY[0] = numAleatoire(1, maxHauteur);
   coordXY[1] = numAleatoire(1, maxLargeur);
}

void Robot::setCoordX(int val) {
	coordXY[0] = val;
}
void Robot::setCoordY(int val){
	coordXY[1] = val;
}

int Robot::getCoordX() const{
	return coordXY[0];
}
int Robot::getCoordY() const {
	return coordXY[1];
};

int Robot::getId() const{
	return id;
}

void Robot::deplacement() {
   int num = numAleatoire((int)Deplacement::HAUT, (int)Deplacement::DROITE);

   switch (num) {
      case Deplacement::DROITE:
         ++this->coordXY[0];
         break;
      case Deplacement::GAUCHE:
         --this->coordXY[0];
         break;
      case Deplacement::HAUT:
         ++this->coordXY[1];
         break;
      case Deplacement::BAS:
         --this->coordXY[1];
         break;
   }
}


