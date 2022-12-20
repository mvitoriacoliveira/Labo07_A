//
// Created by mvito on 12/12/2022.
// faire un shuffle de la liste des vecteurs avant de les déplacer comme ça ils se déplacent aléatoirement.

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


