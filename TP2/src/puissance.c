#include <stdio.h>

int main() {
    int a = 2;      // base
    int b = 3;      // exposant
    int resultat = 1;
    int i;

    // Calcul de a^b
    for (i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    // Affichage du résultat
    printf("%d a la puissance %d = %d\n", a, b, resultat);

    return 0;
}
