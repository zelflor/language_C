#include <stdio.h>

// Prototype

int premier(unsigned int n);

int main()
{
    unsigned int x, p;

    // Saisie d'un entier positif
    printf("Entrez un entier positif : ");
    scanf("%u", &x);

    // Analyse si l'entier saisi est un nombre premier
    p = premier(x);

    switch (p) 
    {
        case 0: printf("Par convention, 0 et 1 ne sont pas des nombres premiers.\n"); break;
        case 1: printf("%u est un nombre premier.\n", x); break;
        default: printf("%u est un diviseur de %u.\n", p, x); break;
    }
    return 0;
}

// Définition
int premier(unsigned int n){
    int i;
    if (n == 1 || n ==0) return 0; // cas 1
    for (i = 2; i < n; i++)
        if (n % i == 0) return i; // cas 3
    return 1; // cas 2
}
// Analyse la primalité de n
/* Retourne 
- cas 1 : 0 si $n = 0$ ou $n = 1$
- cas 2 :1 si n est premier, 
- cas 3 : un diviseur de n si n n'est pas premier
*/
