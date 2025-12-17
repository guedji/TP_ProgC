#include <stdio.h>

int main() {
    int d = 0x10001000;   // valeur de test
    int bit4, bit20;

    // Extraction du 4e bit de gauche (bit 28)
    bit4 = (d >> 28) & 1;

    // Extraction du 20e bit de gauche (bit 12)
    bit20 = (d >> 12) & 1;

    // Vérification des deux bits
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
