#include <stdio.h>

int main() {
    int tab[5];
    // Saisie des valeurs
    for (int i = 0; i < 5; i++) {
        printf("Entrez la valeur %d : ", i);
        scanf("%d", &tab[i]);
    }
    // Affichage à l'envers
    printf("Tableau à l'envers : ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    return 0;
}