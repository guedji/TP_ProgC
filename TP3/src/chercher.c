#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, entier, trouve = 0;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des entiers aléatoires entre 0 et 99 */
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 100; // valeurs entre 0 et 99
    }

    /* Affichage du tableau */
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    /* Demande de l'entier à chercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    /* Recherche de l'entier */
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == entier) {
            trouve = 1;
            break;
        }
    }

    /* Affichage du résultat */
    if (trouve) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}
