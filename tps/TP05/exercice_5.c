#include <stdio.h>
#include <string.h>


int main() {
    char motDePasse[] = "secret123";
    char saisie[20];

    do {
        printf("Entrez le mot de passe : ");
        scanf(" %s", &saisie);

        if (strcmp(saisie, motDePasse) != 0) {
            printf("Mot de passe incorrect. Reessayez.\n");
        }
    } while (strcmp(saisie, motDePasse) != 0);

    printf("Acces autorise!\n");
    return 0;
}