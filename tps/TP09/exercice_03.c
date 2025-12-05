#include <stdio.h>

int main() {

    
    char continuer = 'o';
    
    while (continuer != 'n')
    {

        printf("Saisir un mot :");
        int palindrome = 1;
        char mot[100];
        scanf(" %99s", mot);

        int taillemot = 0;
        for (int i = 0; mot[i] != '\0'; i++){
            taillemot++;
        }

        int finmot = taillemot - 1;
        int startmot = 0;


        while (startmot < finmot){
            if (mot[startmot] != mot[finmot]){
                palindrome = 0;
                break;
            }else {
                startmot++;
                finmot--;
            }
        }
        printf("\n");
        if (palindrome == 1){
            printf("%s est un palindrome", mot);
        }else {
            printf("%s n'est pas un palindrome", mot);
        }


        printf("\nVoulez-vous continuer (o/n) : ");
        scanf(" %c", &continuer);
    }
    



    return 0;
}