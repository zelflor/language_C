#include <stdio.h>

int main(){

    int nbrRow = 1;
    int nbrColumn = 0;
    while (nbrColumn <= 10)
    {
        printf("%5d", nbrColumn);
        nbrColumn++;
    }
    printf("\n    0");
    
    
    for (int i = 0; i <= 127; i++){
        if (i <= 31){
            printf("    X");
        }else {
            printf("%5c", i);
        }
        
        if (i % 10 == 0 && i != 0) {
            printf("\n");
            printf("%5d", nbrRow);
            nbrRow++;
        }
        
        
    }
    return 0;
}