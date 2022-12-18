//
// Created by Dario Vasques on 18.12.22.
//

#include "annexe.h"

int annexe::numAleatoire(int min, int max) {
   // Algorithme de génération d'un nombre aléatoire dans un intervalle donné en paramètre
   // Source : https://cplusplus.com/reference/random/default_random_engine
   std::random_device                  rand_dev;
   std::default_random_engine          generator(rand_dev());
   std::uniform_int_distribution<int>  distr(min, max);

   int num = distr(generator);
   return num;
}