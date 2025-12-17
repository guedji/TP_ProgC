#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[50];
    char concat[50];

    int i = 0;
    int longueur = 0;

    /* 1. Calcul de la longueur de chaine1 */
    while (chaine1[i] != '\0') {
        longueur++;
        i++;
    }

    printf("Longueur de la premiere chaine : %d\n", longueur);

    /* 2. Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';   // fin de chaîne

    printf("Chaine copiee : %s\n", copie);

    /* 3. Concatenation de chaine1 et chaine2 */
    i = 0;
    int j = 0;

    // Copier chaine1 dans concat
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    // Ajouter chaine2 à la fin
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';  // fin de chaîne

    printf("Chaine concatenee : %s\n", concat);

    return 0;
}
