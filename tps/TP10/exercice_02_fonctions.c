#include <stdio.h>
#include <windows.h>



void displayChaine(char param[]);

int GetTaille(char param[]);

void displayCaractere(char param[], int tailleparam);

void displayconcatener(char param1[], char param2[]);

void displayChainereverse(char param[]);

int compteroccurences(char param[], char lettre);

int main(){



    char saisie[30];
    printf("\nSaisir une chaine de caracteres :");
    scanf("%s", saisie);
    displayChaine(saisie);

    printf("-----------------------------------------------------------\n");
    printf("AFFICHAGE CARACTERE PAR CARACTERE DE LA CHAINE\n");
    printf("Saisir une chaine de caracteres :");
    scanf("%s", saisie);
    int taillesaisie = GetTaille(saisie);
    displayCaractere(saisie, taillesaisie );
    
    printf("\n-----------------------------------------------------------\n");
    printf("AFFICHER LE NOMBRE DE CARACTERES DANS UNE CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    taillesaisie = GetTaille(saisie);
    printf("\nLa chaine \"%s\" a %d caracteres", saisie, taillesaisie);


    printf("\n-----------------------------------------------------------\n");
    printf("SAISIR DEUX CHAINES ET CONCATENER CHAINE2 A CHAINE1\n");
    char chaine1[30];
    char chaine2[30];
    printf("Saisir chaine 1 : ");
    scanf("%s", chaine1);

    printf("Saisir chaine 2 : ");
    scanf("%s", chaine2);

    printf("La concatenation de %s + %s donne \"", chaine1, chaine2);
    displayconcatener(chaine1, chaine2);
    printf("\"");



    printf("\n-----------------------------------------------------------\n");
    printf("SAISIR UNE CHAINE ET L'AFFICHER A L'ENVERS\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    displayChainereverse(saisie);
    
    printf("-----------------------------------------------------------\n");
    printf("SAISIR UNE CHAINE ET COMPTER LE OCCURENCES DE LA LETTRE 'a' DANS LA CHAINE \n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    char lettre = 'a';
    int nbroccurences = compteroccurences(saisie, lettre);
    printf("Il y a %d lettre(s) '%c' dans \"%s\"", nbroccurences, lettre, saisie);

    return 0;
}





void displayChaine(char param[]){
    printf("La chaine saisie est \"%s\"  \n", param);
}

int GetTaille(char param[]){
    int tailleparam = 0;
    while (param[tailleparam] != '\0')
    {
        tailleparam++;
    }

    return tailleparam;
    
}

void displayCaractere(char param[], int tailleparam){
    for (int i = 0; i < tailleparam; i++)
    {
        printf("\n%c", param[i]);
    }
    
}

void displayconcatener(char param1[], char param2[]){
    int tailleparam1 = 0;
    while (param1[tailleparam1] != '\0')
    {
        tailleparam1++;
    }

    int tailleparam2 = 0;
    while (param2[tailleparam2] != '\0')
    {
        tailleparam2++;
    }

    int taillemax = tailleparam1 + tailleparam2;
    char concatener[taillemax];

    for (int i = 0; i < taillemax; i++){
        if (i >= tailleparam1){
            concatener[i] = param2[i - tailleparam1];
        }else {
            concatener[i] = param1[i];
        }
    }
    concatener[taillemax] = '\0';

    printf("%s", concatener);
}


void displayChainereverse(char param[]){
    int paramsize = GetTaille(param);

    for (int i = paramsize; i >= 0; i--)
    {
        printf("%c", param[i]);
    }
    
}

int compteroccurences(char param[], char lettre){

    int tailleparam1 = 0;
    while (param[tailleparam1] != '\0')
    {
        tailleparam1++;
    }

    int nbrlettreTaille = 0;
    for (int b = 0; b < tailleparam1; b++){
            if (param[b] == lettre){
                nbrlettreTaille++;
            }
            
    }
    return nbrlettreTaille;
}