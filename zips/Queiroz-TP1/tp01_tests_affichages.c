#include <stdio.h>


int main() {


    long val;
    printf("saisir");
    scanf("%ld", &val);
    printf("val = %ld\n", val);

    printf("Taille: %zu octets\n", sizeof(val));
    
    return 0;
}

