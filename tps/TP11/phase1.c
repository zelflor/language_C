#include <stdio.h>
#include <string.h>
#include <assert.h>

#define NB_PLACES 30
#define FENETRES 0
#define COULOIR 1
#define LIBRE 0
#define OCCUPEE 1

/**
  * @brief Réserve une place côté Fenetres.
  *
  * Recherche la première place libre (0) côté Fenetres, en partant de l'indice 0.
  * Passe cette place à 1 pour indiquer une réservation.
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return int 0 si une place a été réservée avec succès, -1 si aucune place Fenetres n'est disponible
  */
int reserverUnePlaceFenetres(int wagon[][NB_PLACES]);

/**
  * @brief met toutes les places à 0.
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return ?
  */
void initWagon(int wagon[][NB_PLACES]);


/**
  * @brief Affiche le Wagon
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return void
  */
void afficherWagon(int wagon[][NB_PLACES]);

/**
  * @brief la première place libre côté Fenetres (de l’indice 0 vers 29) est mise à 1
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0 si une place a été réservée , -1 si toutes les places Fenetres sont déjà occupées
  */
int reserverUnePlaceFenetres(int wagon[][NB_PLACES]);

int reserverUnePlaceCouloir(int wagon[][NB_PLACES]);

int reserverUnePlace(int wagon[][NB_PLACES]);

int main(void){
    int wagon[2][NB_PLACES];
    initWagon(wagon);

    reserverUnePlaceFenetres(wagon);
    reserverUnePlaceFenetres(wagon);
    afficherWagon(wagon);

    reserverUnePlaceCouloir(wagon);
    reserverUnePlaceCouloir(wagon);

    for(int i = 0; i < 60; i++){
        reserverUnePlace(wagon);
    }
    afficherWagon(wagon);
    int result = reserverUnePlace(wagon);
    if (result == -1){
        printf("\nplus de place");
    }
    return 0;
}

void initWagon(int wagon[][NB_PLACES]){
    for (int i = 0; i < NB_PLACES ;i++){
        wagon[FENETRES][i] = LIBRE;
        wagon[COULOIR][i] = LIBRE;
    }
}

void afficherWagon(int wagon[][NB_PLACES]){
    printf("\nPlaces Fenetres \n");
    for (int n = 0; n < NB_PLACES; n++)
    {
        printf("%d", wagon[FENETRES][n]);
    }
        printf("\nPlaces Couloir \n");
    for (int n = 0; n < NB_PLACES; n++)
    {
        printf("%d", wagon[COULOIR][n]);
    }
}

int reserverUnePlace(int wagon[][NB_PLACES]){
    for (int n = 0; n < NB_PLACES; n++)
    {  
        if (wagon[FENETRES][n] == 0){
            wagon[FENETRES][n] = 1;
            return 0;
            break;
        }
        
    }

    for (int n = 0; n < NB_PLACES; n++)
    {
        if (wagon[COULOIR][n] == 0){
            wagon[COULOIR][n] = 1;
            return 0;
            break;
        }
    }
    return -1;

}

int reserverUnePlaceFenetres(int wagon[][NB_PLACES]){
    for (int n = 0; n < NB_PLACES; n++)
    {  
        if (wagon[FENETRES][n] == 0){
            wagon[FENETRES][n] = 1;
            return 0;
            break;
        }
        
    }

    return -1;

}

int reserverUnePlaceCouloir(int wagon[][NB_PLACES]){
    for (int n = 0; n < NB_PLACES; n++)
    {  
        if (wagon[COULOIR][n] == 0){
            wagon[COULOIR][n] = 1;
            return 0;
            break;
        }
        
    }

    return -1;

}