#include <stdio.h>

int main() {
    int somme = 0;

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si divisible par 11 → ignorer ce nombre
        if (i % 11 == 0) {
            continue;
        }

        // Si divisible par 5 ou 7 → ajouter
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → arrêter
        if (somme > 5000) {
            break;
        }
    }

    // Affichage résultat
    printf("Somme finale = %d\n", somme);

    return 0;
}
