#include <stdio.h>

int main() {
    int i = -1;
    // do {
    //     printf("%d ", i);
    //     i--;
    // } while (i > 0);
    while(i > 0){
        printf("%d ", i);
        i--;
    }
    
    return 0;
}

// Que va afficher ce programme ? 
// 5 4 3 2 1

// Que se passerait-il si on remplaçait do-while par while avec la même initialisation de i 
// rien

// Que se passerait-il avec un do-while et avec while si i était initialisé à -1.
// si c'est while sa affiche rien alors que do while sa affiche -1