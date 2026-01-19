#include <stdio.h>
#include <string.h>
#include <assert.h>

#define NB_PLACES 60 
#define FENETRES 0
#define COULOIR 1
#define LIBRE 0
#define OCCUPEE 1


void initWagon(int wagon[][NB_PLACES / 2]);

void afficherWagon(int wagon[][NB_PLACES / 2]);

int reserverunePlace(int wagon[][NB_PLACES / 2]);

int afficherMenu(void);

int main(void){
    int wagon[2][NB_PLACES / 2];
    initWagon(wagon);
    int i = 1;
    while (i == 1)
    {
        int result = reserverunePlace(wagon);
        if (result == 0){
            printf("\n La place a ete prise");
        }else {
            printf("\n La place est deja occupe");
        }

        afficherWagon(wagon);
    }
    

    return 0;
}

void initWagon(int wagon[][NB_PLACES / 2]){
    for (int i = 0; i < NB_PLACES / 2; i++){
        wagon[COULOIR][i] = 0;
        wagon[FENETRES][i] = 0;
    }
}

void afficherWagon(int wagon[][NB_PLACES / 2]){
    printf("\nFenetre :\n");
    for (int i = 0; i < NB_PLACES / 4; i++){
        
        printf("%d", wagon[FENETRES][i]);
    }
    printf("\nCouloir :\n");
    for (int i = 0; i < NB_PLACES / 4; i++){
        
        printf("%d", wagon[COULOIR][i]);
    }
    printf("\nCouloir :\n");
    for (int i = 0; i < NB_PLACES / 4; i++){
        
        printf("%d", wagon[COULOIR][i + NB_PLACES / 4]);
    }
    printf("\nFenetre :\n");
    for (int i = 0; i < NB_PLACES / 4; i++){
        
        printf("%d", wagon[FENETRES][i + NB_PLACES / 4]);
    }
}

int reserverunePlace(int wagon[][NB_PLACES / 2]){

    int saisieIdPlace = 0;
    do {
        printf("\n Saisir l identifiant de la place");
        scanf("%d", &saisieIdPlace);
    }while (saisieIdPlace < 0 || saisieIdPlace > NB_PLACES);

    if (saisieIdPlace < NB_PLACES / 4){
        if (wagon[FENETRES][saisieIdPlace] == 0){
            wagon[FENETRES][saisieIdPlace] = 1;
            return 0;
        }
    }else if (saisieIdPlace < NB_PLACES / 2){
        if (wagon[COULOIR][saisieIdPlace - NB_PLACES / 4] == 0){
            wagon[COULOIR][saisieIdPlace  - NB_PLACES / 4] = 1;
            return 0;
        }
    }else if (saisieIdPlace < (NB_PLACES / 4) * 3){
        if (wagon[COULOIR][saisieIdPlace - NB_PLACES / 4] == 0){
            wagon[COULOIR][saisieIdPlace  - NB_PLACES / 4] = 1;
            return 0;
        }
    }else if (saisieIdPlace >= (NB_PLACES / 4) * 3){
        if (wagon[FENETRES][saisieIdPlace - NB_PLACES / 2] == 0){
                wagon[FENETRES][saisieIdPlace  - NB_PLACES / 2] = 1;
                return 0;
        }
    }
    return -1;
}

int afficherMenu(void){
    
    printf("1 - reserver une place specifique");
    printf("2 - reserver une place Couloir");
    printf("3 - reserver une place Fenetres");
    printf("4 - afficher le bilan des places occupees");
    printf("5 - liberer une place Couloir");
    printf("6 - liberer une place Fenetres");
    printf("7 - afficher le wagon");
    printf("8 - quitter");
}