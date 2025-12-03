#include <stdio.h>

int main() {

    int a = 16;
    int b = 3;

    // --- Opérations arithmétiques ---
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;        // division entière
    int modulo = a % b;

    // --- Opérateurs logiques / comparaisons ---
    int egal = (a == b);         // renvoie 1 ou 0
    int superieur = (a > b);      // renvoie 1 ou 0

    // --- Affichage ---
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b) = %d\n", addition);
    printf("Soustraction (a - b) = %d\n", soustraction);
    printf("Multiplication (a * b) = %d\n", multiplication);
    printf("Division (a / b) = %d\n", division);
    printf("Modulo (a %% b) = %d\n\n", modulo);

    printf("a == b ? %d\n", egal);
    printf("a > b ? %d\n", superieur);

    return 0;
}
