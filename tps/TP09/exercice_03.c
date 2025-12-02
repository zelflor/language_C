#include <stdio.h>

int main() {


    char continuer = 'o';

    while (continuer != 'n')
    {
        char mot[20] = { 0 };
        
        printf("\nSaisir un mot : ");
        scanf("%s", mot);

        int nbrMaxTaille = 0;
        for (int y = 0; y < 29; y++){
            if (mot[y] != 0){
                nbrMaxTaille++;
            }
            
        }
        char reversemot[20] = { 0 };

        for (int i = 19; i >= 0; i--){
            int z = 0;
            reversemot[z] = mot[i];

            z++;
        }
        printf("%s", reversemot);
        printf("%s", mot);





        printf("\nVoulez-vous continuer (o/n) : ");
        scanf("%c", &continuer);
    }
    



    return 0;
}