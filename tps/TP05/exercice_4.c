#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int nombreAdeviner = rand() % 100 + 1;
    int proposition;

    do {
        printf("Devinez le nombre (1-100) : ");
        scanf("%d", &proposition);

        if (proposition < nombreAdeviner) {
            printf("Trop petit!\n");
        } else if (proposition > nombreAdeviner) {
            printf("Trop grand!\n");
        }
    } while (proposition != nombreAdeviner);

    printf("Bravo! Vous avez trouve %d.\n", nombreAdeviner);
    return 0;
}