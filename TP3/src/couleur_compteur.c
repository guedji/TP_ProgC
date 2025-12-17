#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

/* Structure représentant une couleur RGBA */
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

/* Structure pour compter les occurrences d'une couleur */
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurCompteur;

/* Fonction pour comparer deux couleurs */
int couleur_egale(Couleur c1, Couleur c2) {
    return (c1.R == c2.R) && (c1.G == c2.G) &&
           (c1.B == c2.B) && (c1.A == c2.A);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurCompteur distinctes[TAILLE];
    int nb_distinctes = 0;
    int i, j;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplissage du tableau avec des couleurs aléatoires */
    for (i = 0; i < TAILLE; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    /* Comptage des couleurs distinctes */
    for (i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (j = 0; j < nb_distinctes; j++) {
            if (couleur_egale(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    /* Affichage des couleurs distinctes et de leurs occurrences */
    printf("Couleurs distinctes et occurrences :\n");
    for (i = 0; i < nb_distinctes; i++) {
        printf("0x%02X 0x%02X 0x%02X 0x%02X : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}
