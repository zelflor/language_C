#include <stdio.h>

int main() {
    char nom[20];
    printf("Entrez votre nom : ");
    scanf("%19s", nom);
    printf("Bonjour %s !", nom);
    printf("%c",nom[21]);
    return 0;
}
