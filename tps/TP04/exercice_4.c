#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main() {
    srand(time(0));
    int nombreAdeviner = rand() % 100 + 1;

    int correct = 0;
    int tryNbr = 0;

    int GuessNbr = 0;

    while (correct != 1)
    {
        printf("donnez un nombre guess : \n");
        scanf("%d", &GuessNbr);
        
        if (GuessNbr < nombreAdeviner){
            printf("Le nombre est trop petit \n");
            tryNbr++;
        }else if (GuessNbr > nombreAdeviner){
            printf("Le nombre est trop grand \n");
            tryNbr++;
        }else if (GuessNbr = nombreAdeviner){
            printf("Bravo vous avez trouver %d, vous avez tenter %d d'essai\n" , nombreAdeviner, tryNbr);
            correct++;
        }else {
            printf("Une erreur est survenu \n");
        }
    }
    

    return 0;
}