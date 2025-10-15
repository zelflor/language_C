#include <stdio.h>
#include <stdlib.h> // Pour les fonctions rand() et srand()
#include <time.h>  // pour la fonction time() 

int main() {
    srand(time(0)); // Initialise le générateur de nombres aléatoires
    int nombreAdeviner = rand() % 100 + 1; // Nombre aléatoire entre 1 et 100

    // Écrire ici le code pour demander à l'utilisateur de deviner

    return 0;
}