#include <stdio.h>

// PROTOTYPES DES FONCTIONS

int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
// COMPLETER ICI

int main() 
{

    int x = 8, y = 4;

    // Appel des fonctions
    printf("Fonction addition       : x + y = %d\n", addition(x, y));
    printf("Fonction soustraction   : x - y = %d\n", soustraction(x, y));
    printf("Fonction multiplication   : x - y = %d\n", multiplication(x, y));


    return 0;
}

// DEFINITIONS DES FONCTIONS

// Additionne a et b et retourne le resultat
int addition (int a, int b) 
{
    return a + b;
}

// Soustrait b à a et retourne le resultat
int soustraction (int a, int b) 
{
    return a - b;
}


// Multiplie a et b et retourne le résultat

int multiplication (int a, int b) 
{
    return a * b;
}
