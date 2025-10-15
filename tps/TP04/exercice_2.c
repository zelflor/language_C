#include <stdio.h>

int main() {
    int N = 5;
    int somme = 0;
    int i = 0;

    while (i <= N) {
        printf("%d ", i);
        
        somme = somme + i;
        i++;
    }

    printf("La somme est %d\n", somme);
    return 0;
}