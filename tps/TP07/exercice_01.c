#include <stdio.h>

int main(){


    for (int i = 0; i <= 127; i++){
        printf("%5d", i);
        if (i % 9 == 0 && i != 0) {
            printf("\n");
        }
        
        
    }
    return 0;
}