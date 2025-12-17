#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, entier;
    int gauche, droite, milieu;
    int trouve = 0;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des entiers aléatoires */
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;  // valeurs 0 à 999
    }

    /* Tri du tableau par ordre croissant (tri à bulles pour simplicité) */
    for (i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - 1 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    /* Affichage du tableau trié */
    printf("Tableau trie :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    /* Saisie de l'entier à chercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    /* Recherche dichotomique */
    gauche = 0;
    droite = TAILLE - 1;

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == entier) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < entier) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
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
