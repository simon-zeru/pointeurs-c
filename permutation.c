#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void permuter(int *adr_a, int *adr_b) {
    int entier_a = *adr_a;
    int entier_b = *adr_b;

    *adr_a = entier_b;
    *adr_b = entier_a;
}


int main(void) {
    int e1 = 2;
    int e2 = 4;
    int* adr_1 = &e1;
    int* adr_2 = &e2;

    printf("*adresse 1 : %d", *adr_1);
    printf("\n*adresse 2 : %d", *adr_2);
    permuter(adr_1, adr_2);
    printf("\n*adresse 1 après appel : %d", *adr_1);
    printf("\n*adresse 2 après appel : %d", *adr_2);

    return EXIT_SUCCESS;
}