//---------------------------------------------------------
// Fichier        : main.cpp
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Application permettant de déplacer des robots
//                  sur un terrain puis de les faire se combattre
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------

#include <iostream>
#include "Robot.h"
#include "Terrain.h"
#include "annexes.h"
#include <string>

using namespace std;

int main() {

	//do{

	/*
	cout << MSG_BIENVENUE << endl;
	const int LARGEUR = saisie(MSG_LRG, MSG_ERREUR, MIN_LRG, MAX_LRG);
	const int HAUTEUR = saisie(MSG_HTR, MSG_ERREUR, MIN_HTR, MAX_HTR);
	const int NB_OBJ = saisie(MSG_NB_OBJ, MSG_ERREUR, MIN_NB_OBJ, MAX_NB_OBJ);
	*/

	Terrain T(5, 4);
	Robot R1(5, 4);
	Robot R2(5, 4);
   Robot R3(5, 4);


   T.ajoutRobot(R1);
   T.ajoutRobot(R2);
   T.ajoutRobot(R3);

	cout 	<< "R" << R1.getId() << " = (" << R1.getCoordX() << ", " << R1.getCoordY()
			<< ")" << endl;

	cout 	<< "R" << R2.getId() << " = (" << R2.getCoordX() << ", " << R2.getCoordY()
			 << ")" << endl;

	//} while(nbRobots > 1)

   T.afficher();

	return EXIT_SUCCESS;
}
