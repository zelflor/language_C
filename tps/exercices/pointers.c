#include <stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre = 5;

    triplePointeur(&nombre);
    printf("%d", nombre);

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    printf("%d", pointeurSurNombre);
    *pointeurSurNombre *= 3;
}