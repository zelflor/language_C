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
    nbrRow = nbrMax / 10;

    for (int i = 1; i <= nbrRow; i++){
        printf("\n%5d", (i * 10));
        
        for(int j = nbrColumn * i; j < (nbrColumn * i) + nbrColumn; j++){
            if (j <= nbrMax){
                if (j <= 31){
                printf("    X");
                }else {
                    printf("%5c", j);
                }
            }

           
        }
    }
    
    return 0;
}
