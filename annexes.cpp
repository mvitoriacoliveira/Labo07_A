//---------------------------------------------------------
// Fichier        : annexes.cpp
// Auteur(s)      : Cosmo De Oliveira Maria Vitória & Vasques Dario
// But            : Fichier contenant l'algorithme de saisie et
//                  de génération d'un nombre aléatoire.
// Modifications  :
// Remarque(s)    : -
// Compilation :
//    - Version C++ : 20
//    - Compilateur : Mingw-w64 g++ 12.2.0 (Vitória)
//                    Apple clang version 14.0.0 (Dario)
//---------------------------------------------------------


#include <iostream>  // cin et cout
#include <limits>    // numeric_limits
#include <string>
#include "annexes.h"

using namespace std;

int saisie(const string& msgInvite,
			  const string& msgErreur,
			  const int min,
			  const int max
) {
	int  saisie;
	bool erreur;

	do {
		// saisie et vérification
		cout << msgInvite << " [" << min << " .. " << max << "] : ";
		erreur = not(cin >> saisie) or saisie < min or saisie > max;

		// gestion du flux
		if (erreur) {
			cout << msgErreur << endl;
			cin.clear();
		}

		// vider buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while(erreur);

	return saisie;
}

int numAleatoire(int min, int max) {
   // Algorithme de génération d'un nombre aléatoire dans un intervalle donné en paramètre
   // Source : https://cplusplus.com/reference/random/default_random_engine
   std::random_device                  rand_dev;
   std::default_random_engine          generator(rand_dev());
   std::uniform_int_distribution<int>  distr(min, max);

   int num = distr(generator);
   return num;
}
