#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {

    int tab_int[TAILLE];
    float tab_float[TAILLE];

    int *p_int = tab_int;
    float *p_float = tab_float;

    int i;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplissage des tableaux avec des valeurs aléatoires */
    for (i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 100 + 1;          // entiers entre 1 et 100
        *(p_float + i) = (float)(rand() % 1000) / 100.0f; // floats 0.00 à 9.99
    }

    /* Affichage AVANT modification */
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de nombres a virgule flottante (avant la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n\n");

    /* Multiplication par 3 des valeurs dont l'indice est divisible par 2 */
    for (i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    /* Affichage APRES modification */
    printf("Tableau d'entiers (apres la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de nombres a virgule flottante (apres la multiplication par 3) :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n");

    return 0;
}
