#include <stdio.h>

int main() {
    int choix;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Option 1 sélectionnee\n");
                break;
            case 2:
                printf("Option 2 sélectionnee\n");
                break;
            case 3:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 3);

    return 0;
}