#include <stdio.h>

int main() {

    char saisie[30] = { 0 };

    printf("Saisir une chaine de caracteres : ");
    scanf("%s", &saisie);
    printf("La chaine saisie est \"%s\"", saisie);
    printf("\n-----------------------------------------------------------\n");


    printf("AFFICHAGE CARACTERE PAR CARACTERE DE LA CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", &saisie);
    for (int i = 0; i <= 10; i++){
        printf("%c ", saisie[i]);
    }
    printf("\n-----------------------------------------------------------\n");
    

    printf("AFFICHER LE NOMBRE DE CARACTERES DANS UNE CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", &saisie);
    int nbrMaxTaille = 0;
    for (int y = 0; y < 29; y++){
        if (saisie[y] != 0){
            nbrMaxTaille++;
        }
        
    }

    printf("La chaine \"%s\" a %d caracteres", saisie, nbrMaxTaille);
    printf("\n-----------------------------------------------------------\n");



    char chaine1[10];
    char chaine2[10];
    printf("SAISIR DEUX CHAINES ET CONCATENER CHAINE2 A CHAINE1\n");
    printf("Saisir chaine 1 :");
    scanf("%s", &chaine1);
    printf("Saisir chaine 2 :");
    scanf("%s", &chaine2);

    printf("La concatenation de Chaine1 + Chaine2 donne \"%s%s\" ", chaine1, chaine2);
    

    printf("\n-----------------------------------------------------------\n");
    

    printf("SAISIR UNE CHAINE ET L'AFFICHER A L'ENVERS\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", &saisie);
    nbrMaxTaille = 0;
    for (int z = 0; z < 29; z++){
        if (saisie[z] != 0){
            nbrMaxTaille++;
        }
        
    }
    for (int a = nbrMaxTaille; a >= 0; a--){
        printf("%c", saisie[a]);
    }

    printf("\n-----------------------------------------------------------\n");
    printf("SAISIR UNE CHAINE ET COMPTER LE OCCURENCES DE LA LETTRE 'a' DANS LA CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", &saisie);
    
    int nbrATaille = 0;
    for (int b = 0; b < 29; b++){
            if (saisie[b] == 'a'){
                nbrATaille++;
            }
            
    }
    printf("Il y a %d lettre(s) 'a' dans \"%s\"", nbrATaille, saisie);

    return 0;
}