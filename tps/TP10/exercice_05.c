#include <stdio.h>

// Prototype

int printBase(unsigned int n, unsigned char base);

int main() 
{

    // Saisie d'un entier
    int x;
    printf("Entrez un entier positif : ");
    scanf("%d", &x);

    // Affiche l'entier dans les trois bases
    // Appels de la fonction

    printBase(x, 8);
    printBase(x, 10);
    printBase(x, 16);

    return 0;
}

// Définition


int printBase(unsigned int n, unsigned char base)
{
    if (base == 8){
        printf("En octet : %o \n", n);
    }else if (base == 10){
        printf("En decimal : %d \n", n);
    }else if (base == 16){
        printf("En decimal : %x \n", n);
    }else {
        printf("Base pas prise en charge \n");
    }
    return 0;
}
