#include <stdio.h>

int main() {
    int n;
    printf("Saisir le chiffre de la table attendue");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i ++) { // Trous 1, 2, 3
        printf("%d x %d = %d\n", n, i, n * i); // Trou 4, 5
    }

    return 0;
}