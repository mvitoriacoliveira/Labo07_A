//
// Created by mvito on 12/12/2022.
//

#include "Robot.h"

Robot::Robot(const int MAX_LARGEUR, const int maxHauteur){
	//nom
	coordXY[0] = numAleatoire(0, MAX_LARGEUR);
	coordXY[0] = numAleatoire(0, MAX_HAUTEUR);
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

int Robot::numAleatoire(int min, int max) {
	min = (int)Deplacement::HAUT;
	max = (int)Deplacement::DROITE;

	// Algorithme de génération d'un nombre aléatoire dans un intervalle donné en paramètre
	// Source : https://cplusplus.com/reference/random/default_random_engine
	std::random_device                  rand_dev;
	std::default_random_engine          generator(rand_dev());
	std::uniform_int_distribution<int>  distr(min, max);

	int num = distr(generator);
	return num;
}


