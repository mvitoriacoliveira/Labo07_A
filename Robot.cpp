//
// Created by mvito on 12/12/2022.
//

#include "Robot.h"

int Robot::cmpObj = 0;

//faire include de terrain et prendre maxLargeur et maxHauteur depuis ce fichier?

Robot::Robot(const int maxLargeur, const int maxHauteur){
   // Incrémente l'cmpObj afin qu'il soit unique pour chaque robot créé
	Robot::id = ++cmpObj;

   coordXY[0] = numAleatoire(0, maxLargeur);
   coordXY[1] = numAleatoire(0, maxHauteur);
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

int Robot::numAleatoire(int min, int max) {
	//min = (int)Deplacement::HAUT;
	//max = (int)Deplacement::DROITE;

	// Algorithme de génération d'un nombre aléatoire dans un intervalle donné en paramètre
	// Source : https://cplusplus.com/reference/random/default_random_engine
	std::random_device                  rand_dev;
	std::default_random_engine          generator(rand_dev());
	std::uniform_int_distribution<int>  distr(min, max);

	int num = distr(generator);
	return num;
}

void Robot::deplacement(Coord coord) {
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


