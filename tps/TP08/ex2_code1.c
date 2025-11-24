#include <stdio.h>

int main() {
    int nombres[5] = {3, 7, 2, 5, 9};
    int somme = 0;
    for (int i = 0; i < 5; i++) {
        somme = somme + i;
    }
    printf("Somme : %d", somme);
    return 0;
}