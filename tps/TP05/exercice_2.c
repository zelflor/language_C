#include <stdio.h>

int main() {
    int nombre;
    do {
        printf("Saisissez un nombre strictement positif : ");
        scanf("%d", &nombre);
    } while (nombre <= 0);

    printf("Merci pour votre saisie valide : %d\n", nombre);
    return 0;
}