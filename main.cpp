#include <iostream>
#include "Robot.h"
#include "Terrain.h"
#include "annexes.h"
#include <string>

using namespace std;

int main() {

	cout << MSG_BIENVENUE << endl;
	const int LARGEUR = saisie(MSG_LRG, MSG_ERREUR, MIN_LRG, MAX_LRG);
	const int HAUTEUR = saisie(MSG_HTR, MSG_ERREUR, MIN_HTR, MAX_HTR);
	const int NB_OBJ = saisie(MSG_NB_OBJ, MSG_ERREUR, MIN_NB_OBJ, MAX_NB_OBJ);

	Terrain T(LARGEUR, HAUTEUR);

	for (int i = 0; i < NB_OBJ; ++i){
			T.ajoutRobot(Robot(LARGEUR, HAUTEUR));
	}

	//do{

	for (int i = 0; i < NB_OBJ; ++i){
		T.vecRobot.at(i)
	}
	Robot R1(20, 10);
	T.ajoutRobot(R1);
	Robot R2(20, 10);
	T.ajoutRobot(R2);

	cout 	<< "R" << R1.getId() << " = (" << R1.getCoordX() << ", " << R1.getCoordY()
			<< ")" << endl;

	cout 	<< "R" << R2.getId() << " = (" << R2.getCoordX() << ", " << R2.getCoordY()
			 << ")" << endl;
	//fin test

	//} while(nbRobots > 1)

	cout << T;

	return EXIT_SUCCESS;
}
