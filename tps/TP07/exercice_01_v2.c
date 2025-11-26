#include <stdio.h>

int main(){

    int nbrRow = 0;
    int nbrColumn = 0;
    int nbrMax = 0;
    do {
        printf("Saisir un nombre entre 0 et 127: ");
        scanf("%d", &nbrMax);
    }while (nbrMax < 0 || nbrMax > 127);
    
    printf("     ");
    while (nbrColumn <= 9)
    {
        
        printf("%5d", nbrColumn);
        nbrColumn++;
    }
    printf("\n");
    printf("%5d", nbrRow);
    nbrRow += 10;
    int i = 0;
    for (int j = 1; j <= nbrMax; j++){

        if (i <= 31){
            printf("    X");
        }else {
            printf("%5c", i);
            
        }
        // printf("%2d", i);
        
        if (j % 10 == 0 && j != 0) {
            
            printf("\n");
            printf("%5d", nbrRow);
            nbrRow += 10;
            

        }
        
    i++;
    }
    return 0;
}