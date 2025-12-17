#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tableau[TAILLE];
    int i, j, temp;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des entiers aléatoires entre 0 et 99 */
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 100; // valeurs entre 0 et 99
    }

    /* Affichage du tableau non trié */
    printf("Tableau non trie :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    /* Tri à bulles */
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - 1 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    /* Affichage du tableau trié */
    printf("Tableau trie par ordre croissant :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
