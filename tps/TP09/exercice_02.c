#include <stdio.h>

int main() {

    char saisie[30] = { 0 };

    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    printf("La chaine saisie est \"%s\"", saisie);
    printf("\n-----------------------------------------------------------\n");


    printf("AFFICHAGE CARACTERE PAR CARACTERE DE LA CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    for (int i = 0; i <= 10; i++){
        printf("%c ", saisie[i]);
    }
    printf("\n-----------------------------------------------------------\n");
    

    printf("AFFICHER LE NOMBRE DE CARACTERES DANS UNE CHAINE\n");
    printf("Saisir une chaine de caracteres : ");
    scanf("%s", saisie);
    int nbrTaille = 0;
    while (saisie[nbrTaille] != '\0'){
        nbrTaille++;
    }
    

    printf("La chaine \"%s\" a %d caracteres", saisie, nbrTaille);
    printf("\n-----------------------------------------------------------\n");



    char chaine1[10];
    char chaine2[10];
    printf("SAISIR DEUX CHAINES ET CONCATENER CHAINE2 A CHAINE1\n");
    printf("Saisir chaine 1 :");
    scanf("%9s", chaine1);
    printf("Saisir chaine 2 :");
    scanf("%9s", chaine2);

    int nbrTaillechaine1 = 0;
    while (chaine1[nbrTaillechaine1] != '\0'){
        nbrTaillechaine1++;
    }

    int nbrTaillechaine2 = 0;
    while (chaine1[nbrTaillechaine2] != '\0'){
        nbrTaillechaine2++;
    }

    int nbrTaillechaines = nbrTaillechaine1 + nbrTaillechaine2;
    
    char chaines[nbrTaillechaines];
    
    
    for (int i = 0; i < nbrTaillechaines; i++ ){
        if (i >= nbrTaillechaine1){
            chaines[i] = chaine2[i  - nbrTaillechaine1];
        }else {
            chaines[i] = chaine1[i];
            
        }
        
    }
    
    

    printf("La concatenation de Chaine1 + Chaine2 donne \"%s\" ", chaines);
    

    printf("\n-----------------------------------------------------------\n");
    



    printf("SAISIR UNE CHAINE ET L'AFFICHER A L'ENVERS\n");
    printf("Saisir une chaine de caracteres : ");
     char saisieenvers[30] = { 0 };
    scanf("%29s", &saisieenvers);
    int nbrMaxTaille = 0;
    for (int z = 0; z < 29; z++){
        if (saisieenvers[z] != 0){
            nbrMaxTaille++;
        }
        
    }
    for (int a = nbrMaxTaille; a >= 0; a--){
        printf("%c", saisieenvers[a]);
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