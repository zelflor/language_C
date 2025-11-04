// #include <stdio.h>

// int main(){
//     int saisieNbr = 0;

//     while (saisieNbr < 1 || saisieNbr > 10)
//     {
//         printf("Saisir un nombre : \n");
//         scanf("%d", &saisieNbr);
//     }

//     printf("Vous avez saisie : %d", saisieNbr);
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int saisieNbr = 0;
    
    do {
        printf("Saisir un nombre : \n");
        scanf("%d", &saisieNbr);
    }while (saisieNbr < 1 || saisieNbr > 10);

    printf("Vous avez saisie : %d", saisieNbr);
    
    return 0;
}