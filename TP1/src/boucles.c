#include <stdio.h>

int main() {

    int compteur = 5;   // essayer 3, 5, 7... doit être < 10

    if (compteur >= 10) {
        printf("La valeur de compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    // Affichage du triangle
    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            // Règle d'affichage du motif :
            // - si j est pair -> afficher "#"
            // - si j est impair -> afficher "*"
            // - sauf la dernière ligne (i == compteur), qui doit être remplie de "*"
            if (i == compteur) {
                printf("* ");
            } else if (j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
