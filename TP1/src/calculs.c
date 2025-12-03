#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    int resultat;

    // Exemple de valeurs (modifiable pour tests)
    num1 = 12;
    num2 = 4;
    op = '*';   // changez ici pour tester : + - * / % & | ~

    printf("num1 = %d, num2 = %d, op = %c\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d\n", resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d\n", resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat (ET bit à bit) : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat (OU bit à bit) : %d\n", resultat);
            break;

        case '~':
            // L’opérateur ~ est unaire : s’applique seulement à num1
            resultat = ~num1;
            printf("Résultat (NON bit à bit de num1) : %d\n", resultat);
            break;

        default:
            printf("Opérateur non reconnu !\n");
    }

    return 0;
}


