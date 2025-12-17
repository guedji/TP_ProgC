#include <stdio.h>

int main() {

    /* Déclaration des tableaux */
    char noms[5][20] = {
        "Dupont", "Martin", "Diallo", "Benali", "Nguyen"
    };

    char prenoms[5][20] = {
        "Alice", "Karim", "Aminata", "Youssef", "Linh"
    };

    char adresses[5][50] = {
        "Paris",
        "Lyon",
        "Marseille",
        "Toulouse",
        "Lille"
    };

    float note_c[5] = {
        14.5, 12.0, 16.0, 13.5, 15.0
    };

    float note_sys[5] = {
        13.0, 11.5, 15.5, 14.0, 16.5
    };

    int i;

    /* Affichage des informations */
    for (i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom      : %s\n", noms[i]);
        printf("Prenom   : %s\n", prenoms[i]);
        printf("Adresse  : %s\n", adresses[i]);
        printf("Note C   : %.2f\n", note_c[i]);
        printf("Note SE  : %.2f\n", note_sys[i]);
        printf("----------------------------\n");
    }

    return 0;
}
