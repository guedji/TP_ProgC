#include <stdio.h>
#include <string.h>

/* Définition de la structure Etudiant */
struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[60];
    float note_c;
    float note_sys;
};

int main() {

    /* Tableau de 5 étudiant.e.s */
    struct Etudiant etudiants[5];

    /* Initialisation des données */

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_c = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_c = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Diallo");
    strcpy(etudiants[2].prenom, "Aminata");
    strcpy(etudiants[2].adresse, "15, Rue de la Republique, Paris");
    etudiants[2].note_c = 15.5;
    etudiants[2].note_sys = 13.8;

    strcpy(etudiants[3].nom, "Benali");
    strcpy(etudiants[3].prenom, "Youssef");
    strcpy(etudiants[3].adresse, "10, Avenue Jean Jaures, Marseille");
    etudiants[3].note_c = 13.0;
    etudiants[3].note_sys = 14.5;

    strcpy(etudiants[4].nom, "Nguyen");
    strcpy(etudiants[4].prenom, "Linh");
    strcpy(etudiants[4].adresse, "8, Rue Pasteur, Lille");
    etudiants[4].note_c = 17.0;
    etudiants[4].note_sys = 16.2;

    /* Affichage des informations */
    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prenom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note C  : %.2f\n", etudiants[i].note_c);
        printf("Note SE : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------\n");
    }

    return 0;
}
