#include <stdio.h>

// Prototype

float moyenne(float a, float b, float c);

// Programme principal qui demande à l'utilisateur
// de saisir 3 notes avant d'en afficher la moyenne
int main()
{

    float note1, note2, note3, resultat;

    printf("Entrez la premiere note : ");
    scanf("%f", &note1);

    printf("Entrez la seconde note : ");
    scanf("%f", &note2);

    printf("Entrez la troisieme note : ");
    scanf("%f", &note3);

    resultat = moyenne(note1, note2, note3);

    printf("La moyenne est de %.2f", resultat);


    return 0;
}

// Définition de la fonction moyenne

float moyenne(float a, float b, float c){
    float result = a + b +c;
    result = result / 3;
    return result;
}