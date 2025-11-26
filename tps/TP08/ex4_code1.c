#include <stdio.h>

int main(){

    int nbrsaisie = 0;
    do {
        printf("Saisir le nombre de notes");
        scanf("%d", &nbrsaisie);
    }while (nbrsaisie < 0);
    
    int tabNotes[nbrsaisie];

    for (int i = 0; i < nbrsaisie; i++) {
        printf("Entrez une note %d : ", i);
        scanf("%d", &tabNotes[i]);
    }

    float nbrMoyenne = 0;

    for (int i = (nbrsaisie - 1); i >= 0; i--) {
        nbrMoyenne = nbrMoyenne + tabNotes[i];
    }
    nbrMoyenne = nbrMoyenne / nbrsaisie;
    printf("La moyenne est egal a %d", nbrMoyenne);
    return 0;
}