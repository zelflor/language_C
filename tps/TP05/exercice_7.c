#include <stdio.h>

int main(){

    int nbrNotes;
    int i = 0;
    int nbrTotalNotes = 0;
    float nbrMoyenne = 0;
    int nbrnoteunit = 0;
    do {

    printf("saisir le nombre de notes \n");
    scanf("%d", &nbrNotes);
    }while (nbrNotes < 0);

    while(i != nbrNotes){
        printf("Saisir une note :\n");
        scanf("%d", &nbrnoteunit);
        nbrTotalNotes = nbrTotalNotes + nbrnoteunit;
        i++;
    }

    nbrMoyenne = (float)nbrTotalNotes / (float)nbrNotes;
    printf("Voici la moyenne des notes : %.2f%%", nbrMoyenne);

    return 0;
}