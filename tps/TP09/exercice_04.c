#include <stdio.h>
#include <string.h>

int main(){


    char mot[20] = "UNDERSCAPE";
    // Attendez vous connaissez pas Underscape ? - https://under-scape.com/

    unsigned int motTaille = strlen(mot);
    // taille du mot + \0
    char hidemot[motTaille + 1];

    // mettre tout a #
    memset(hidemot, '#', motTaille);
    // finir la chaine de caractere
    hidemot[motTaille] = '\0'; 


    // mettre la premiere et derniere lettre
    hidemot[0] = mot[0];
    hidemot[motTaille - 1] = mot[motTaille - 1];




    


    printf("JEU << DEVINER UN MOT>> \n");

    int trycount = 10;

    printf("VOUS AVEZ DROIT A %d ESSAIS \n", trycount);
    printf("%s \n", hidemot);

    for(int i = 0; i < trycount; i++){
        int actualTrycount = trycount - i;
        char lettre;
        printf("---------------------------------------------------\n");
        
        if (strcmp(mot, hidemot) == 0) {
            printf("MOT A DEVINER : %s \n", mot);
            printf("C'EST GAGNE EN %d COUPS \n", trycount - actualTrycount);
            printf("BRAVO ! \n");
            break;
        }else {
            actualTrycount--;
            printf("PROPOSER UNE LETTRE : ");
            scanf(" %c", &lettre);
            if (lettre >= 'a' && lettre <= 'z'){
                lettre = lettre - 32;
            }

            char *ptr = strchr(mot, lettre);
            if (ptr == NULL){
                printf(":-( '%c' N'EST PAS UNE LETTRE DU MOT CACHE \n", lettre);
            }else {
                for (int i = 0; i < motTaille; i++) {
                    if (mot[i] == lettre) {
                        hidemot[i] = lettre;
                    }
                }
            }

            
            printf("%s \n", hidemot);


            
            printf("IL VOUS RESTE %d COUPS \n", actualTrycount);
            if (actualTrycount == 0){
                printf("VOUS AVEZ PERDU !!!");
                break;
            }
        }


        
    }


    return 0;
}