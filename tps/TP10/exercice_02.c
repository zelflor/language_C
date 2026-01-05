#include <stdio.h>

// Prototype de la fonction qui calcule le carré d'un entier

int carre(int n);

int main() 
{
    int x = 8;
    printf("%d * %d = %d\n", x, x, carre(x));
    return 0;
}

// Définition de la fonction qui calcule le carré d'un entier

int carre(int n){
    return n * n;
}