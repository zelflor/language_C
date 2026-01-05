// Demonstration des variables locals
#include <stdio.h>

int main(){

    int i = 2, n = 1;

    printf("%d", i);

    if (n == 1){
        int i = 3;
        printf("%d", i);
    }
    printf("%d", i);

    return 0;
}