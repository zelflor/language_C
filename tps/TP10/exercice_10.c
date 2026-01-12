#include <stdio.h>


// Fonction qui saisit un entier
int SaisieEntier(void);

int main(void)
{   
    int a, b, sum;
    // Saisie du premier entier
    a = SaisieEntier();
    // Saisie du deuxième entier
    b = SaisieEntier();

    // Calcule et affiche la somme
    sum = a + b;
    printf("La somme est de %d", sum);
    return 0 ;
}

// Définition de la fonction SaisieEntier
int SaisieEntier(void)
{
    int n;
    printf("Saisir un entier : ");
    scanf("%d", &n);
    return n;
}