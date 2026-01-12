#include <stdio.h>

void incremente(int n);

int main(void) 
{
    int n = 3;
    printf("Avant, n = %d\n", n);
    incremente(n);
    printf("Après, n = %d\n", n);
    return 0;
}


void incremente(int n){
    n = n + 1;
}
