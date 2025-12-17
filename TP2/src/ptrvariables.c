#include <stdio.h>

int main() {

    /* Déclaration des variables */
    char c = 0x12;
    short s = 0x1234;
    int i = 0xA47865FF;
    long int li = 0x12345678;
    long long int lli = 0x1122334455667788;
    float f = 2.0f;
    double d = 4.0;
    long double ld = 8.0L;

    /* Déclaration des pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant la manipulation ===\n");

    printf("Adresse c  : %p | Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse s  : %p | Valeur : %04x\n", (void



