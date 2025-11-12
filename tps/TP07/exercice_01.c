#include <stdio.h>

int main(){

    int nbrRow = 1;
    printf("    0    1    2    3    4    5    6    7    8    9   10\n    0");
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