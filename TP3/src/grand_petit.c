#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tableau[TAILLE];
    int i;
    int min, max;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs entre 1 et 1000 */
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    /* Initialisation du min et du max */
    min = tableau[0];
    max = tableau[0];

    /* Recherche du minimum et du maximum */
    for (i = 1; i < TAILLE; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    /* Affichage des résultats */
    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);

    return 0;
}
