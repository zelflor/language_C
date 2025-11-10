#include <stdio.h>

int main(){
    int n = 0;
    do {
        printf("Saisir n entre 1 et 10 :");
        scanf("%d", &n);
    }while (n <= 1 && n>= 10);

    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= 10; j++)
        {
            printf("%5d", i * j);
        }
        printf("\n");
        
    }

    return 0;
}