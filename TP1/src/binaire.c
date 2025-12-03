#include <stdio.h>

void afficher_binaire_bitwise(int n) {
    printf("Binaire (bitwise) de %d : ", n);

    // on parcourt les 32 bits de l'entier
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // extrait le bit i
        printf("%d", bit);

        // optionnel : espace tous les 4 bits
        if (i % 4 == 0 && i != 0)
            printf(" ");
    }
    printf("\n");
}

void afficher_binaire_division(int n) {
    printf("Binaire (division) de %d : ", n);

    int bits[32];
    int index = 0;

    int temp = n;

    // cas particulier : n = 0
    if (temp == 0) {
        printf("0\n");
        return;
    }

    // division par 2 + modulo pour générer les bits
    while (temp > 0 && index < 32) {
        bits[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    // affichage en ordre inverse (de MSB vers LSB)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }

    printf("\n");
}

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];
        afficher_binaire_bitwise(n);
        afficher_binaire_division(n);
        printf("\n");
    }

    return 0;
}
