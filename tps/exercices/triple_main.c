#include <stdio.h>
#include "triple_fonctions.c"
int main(){
    int nombregravecool = 0;
    printf("Entrez un nombre \n");
    scanf("%d", &nombregravecool);
    int tripledejesaispas = triple(nombregravecool);
    printf("%d", tripledejesaispas);
    
    
    
    return 0;
}


