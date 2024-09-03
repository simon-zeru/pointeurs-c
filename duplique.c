#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copier_chaine(const char *str) {
    // Calculer la taille de la chaîne à copier, y compris le caractère nul
    size_t size = strlen(str) + 1;

    // Allouer de la mémoire pour la nouvelle chaîne
    char *ptr = (char*)malloc(size);

    // Vérifier si l'allocation a réussi
    if (ptr == NULL) {
        return NULL;
    }

    // Copier la chaîne d'origine dans la mémoire allouée
    strncpy(ptr, str, size);

    return ptr;
}

int main(void) {
    char original[] = "Ma super chaine a copier";
    char *copie;  // copie à allouer dynamiquement

    // Copier la chaîne de manière dynamique
    copie = copier_chaine(original);

    if (copie != NULL) {
        // Afficher la copie de la chaîne
        printf("copie : %s\n", copie);

        // Libérer la mémoire allouée
        free(copie);
    } else {
        printf("Échec de l'allocation mémoire\n");
    }

    return EXIT_SUCCESS;
}