#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int carre_copie(int n) {
    return n*n;
}

void carre_adresse(int *adr_n) {
    int e = *adr_n;
    e = carre_copie(e);
    *adr_n = e;
}

int main(void) {
    int e = 2;
    printf("valeur de l'entier passé en paramètre avant l'appel de carre_copie : %d", e);
    carre_copie(e);
    printf("\nvaleur de l'entier passé en paramètre après l'appel de carre_copie : %d", e);
    int* adresse_e = &e;
    printf("\nvaleur de l'entier passé en paramètre avant l'appel de carre_adresse : %d", *adresse_e);
    carre_adresse(adresse_e);
    printf("\nvaleur de l'entier passé en paramètre après l'appel de carre_adresse  : %d", *adresse_e);

    return EXIT_SUCCESS;
}