#include <iostream>  // cin et cout
#include <limits>    // numeric_limits
#include <string>
#include "annexes.h"

using namespace std;

//TODO alligner msgs invite
//TODO nbre objet = 0 => fin programme ou saisie invalide?
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

//ex prof: largeur = 20 => 22x '-'
// hauteur = 10 => 10x '|' + 1&derniere lignes
//TODO imprimer terrain par surcharge d'operateur<<

void affichage(const int largeur, const int hauteur){
	for(int i = 0; i < hauteur + 2; ++i){
		for (int j = 0; j < largeur + 2; ++j){
			if (i == 0 or i == hauteur + 1) {
				cout << LMT_HOR;
			} else if (j == 0 or j == largeur + 1){
				cout << LMT_VERT;
			} else {
				cout << " ";
				//si robot, alors cout son nom/numéro cmpObj
				//it = find(vectRobot.begin(), ..end(), aPosition(i,j));
				//aPosition est foncteur
				//cout << it->getId();				
			}
		}
		cout << endl;
	}
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
