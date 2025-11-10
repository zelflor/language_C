#include <stdio.h>

int main() { // fonction principal
    int n = 8; // initialisateur de n
    // initialisation de i a 0, tant que i est inferieur ou egal a n, et a chaque fin de boucle ajouter 1 a i
    for (int i = 0; i <= n; i++) { 
        printf("%d ", i); // afficher i
    }
    return 0;
}
// Ce programme utilise une boucle for pour afficher les nombres de 0 à N. La variable sert de compteur et est incrémentée de 1 à chaque itération.
