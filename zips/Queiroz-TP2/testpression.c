#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    unsigned int pression;

    char pressionNormale;
    
    printf("Entrer la pression dans les circuits en hPa\n");
    scanf("%u", &pression);

    if (pression < 100){
        pressionNormale = 1;
    }

    printf("%hhd", pressionNormale);
    return 0;
}