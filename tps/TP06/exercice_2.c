#include <stdio.h>

int main() {
    int N = 3;
    int somme = 0;

    for (int i = 0; i <= N; i++) {
        somme += i;
    }

    printf("Somme = %d\n", somme);
    return 0;
}