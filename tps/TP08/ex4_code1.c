#include <stdio.h>

int main(){

    int nbrsaisie = 0;
    do {
        printf("Saisir le nombre de notes");
        scanf("%d", &nbrsaisie);
    }while (nbrsaisie < 0);
    
    int tabNotes[nbrsaisie];
    
    float nbrMoyenne = 0;
    for (int i = 0; i < nbrsaisie; i++) {
        printf("Entrez une note %d : ", i);
        scanf("%d", &tabNotes[i]);
        nbrMoyenne = nbrMoyenne + tabNotes[i];
    }




    nbrMoyenne = nbrMoyenne / (float)nbrsaisie;
    printf("La moyenne est egal a %.2f", nbrMoyenne);
    return 0;
}