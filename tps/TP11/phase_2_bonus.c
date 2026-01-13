#include <stdio.h>
#include <string.h>
#include <assert.h>

#define NB_PLACES 60
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




/**
  * @brief la première place libre côté Fenetres (de l’indice 0 vers 29) est mise à 1
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0 si une place a été réservée , -1 si toutes les places Fenetres sont déjà occupées
  */
int reserverUnePlaceCouloir(int wagon[][NB_PLACES]);





/**
  * @brief la première place libre côté Couloir (de l’indice 0 vers 29) est mise à 1
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0 si une place a été réservée , -1 si toutes les places Couloir sont déjà occupées
  */
int reserverUnePlace(int wagon[][NB_PLACES]);




/**
  * @brief afficher les stats des couloirs (couloirs et fenetres)
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return le nombre de place prise
  */
int faireBilanPlacesOccupees(int wagon[][NB_PLACES]);


/**
  * @brief la première place libre côté Fenetre (de l’indice 0 vers 29) est mise à 0
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0 si une place a été réservée , -1 si toutes les places Fenetre sont déjà occupées
  */
int libererUnePlaceFenetres(int wagon[][NB_PLACES]);



/**
  * @brief la première place libre côté Couloir (de l’indice 0 vers 29) est mise à 0
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0 si une place a été réservée , -1 si toutes les places Couloir sont déjà occupées
  */
int libererUnePlaceCouloir(int wagon[][NB_PLACES]);


/**
  * @brief la première place libre côté Couloir (de l’indice 0 vers 29) est mise à 0
  *
  *
  * @param wagon tableau 2x30 représentant les places du wagon
  * @return 0
  */
int afficherMenu(int wagon[][NB_PLACES]);






int main(void){
    int wagon[2][NB_PLACES];
    initWagon(wagon);
    afficherMenu(wagon);
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
    for (int n = 0; n < NB_PLACES / 2; n++)
    {
        printf("%d", wagon[FENETRES][n]);
    }


    printf("\nPlaces Couloir \n");
    for (int n = 0; n < NB_PLACES / 2; n++)
    {
        printf("%d", wagon[COULOIR][n]);
    }

    printf("\nPlaces Couloir \n");
    for (int n = NB_PLACES / 2 ; n < NB_PLACES; n++)
    {
        printf("%d", wagon[COULOIR][n]);
    }
    
    printf("\nPlaces Fenetres \n");

    for (int n = NB_PLACES / 2 ; n < NB_PLACES; n++)
    {
        printf("%d", wagon[FENETRES][n]);
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


int faireBilanPlacesOccupees(int wagon[][NB_PLACES]){
    int nbrPlacesFenetres = 0,nbrPlacesCouloir = 0, nbrPlacesTotal = 0;
    
    for (int n = 0; n < NB_PLACES; n++)
        {  
            if (wagon[COULOIR][n] == 1){
                nbrPlacesCouloir++;
            }
            if (wagon[FENETRES][n] == 1){
                nbrPlacesFenetres++;
            }
            
        }
    printf("\n Place occupees cote Fenetres : %d / %d", nbrPlacesFenetres, NB_PLACES);
    printf("\n Place occupees cote Couloir : %d / %d", nbrPlacesCouloir, NB_PLACES);
    nbrPlacesTotal = nbrPlacesCouloir + nbrPlacesFenetres;
    return nbrPlacesTotal;

}

int libererUnePlaceFenetres(int wagon[][NB_PLACES]){
    for (int n = 0; n < NB_PLACES; n++)
    {  
        if (wagon[FENETRES][n] == 1){
            wagon[FENETRES][n] = 0;
            return 0;
            break;
        }
        
    }

    return -1;

}

int libererUnePlaceCouloir(int wagon[][NB_PLACES]){
    for (int n = 0; n < NB_PLACES; n++)
    {  
        if (wagon[COULOIR][n] == 1){
            wagon[COULOIR][n] = 0;
            return 0;
            break;
        }
        
    }

    return -1;

}

int afficherMenu(int wagon[][NB_PLACES]){
    int saisie, returnValue;

    do {
        printf("\n1 - reserver une place Couloir");
        printf("\n2 - reserver une place Fenetres");
        printf("\n3 - afficher le bilan des places occupees");
        printf("\n4 - liberer une place Couloir");
        printf("\n5 - liberer une place Fenetres");
        printf("\n6 - afficher le wagon");
        printf("\n7 - quitter \n");
        scanf("%d", &saisie);

        if (saisie == 1){
            returnValue = reserverUnePlaceCouloir(wagon);
            if (returnValue == -1){
                printf("\n Aucune place Couloir disponible. \n");
            }
        }else if (saisie == 2){
            returnValue = reserverUnePlaceFenetres(wagon);
            if (returnValue == -1){
                printf("\n Aucune place Fenetres disponible. \n");
            }
        }else if (saisie == 3){
            faireBilanPlacesOccupees(wagon);
        }else if (saisie == 4){
            returnValue = libererUnePlaceCouloir(wagon);
            if (returnValue == -1){
                printf("\nToutes les places Couloir sont déjà libres. \n");
            }
        }else if (saisie == 5){
            returnValue = libererUnePlaceFenetres(wagon);
            if (returnValue == -1){
                printf("\nToutes les places Fenetres sont déjà libres. \n");
            }
        }else if (saisie == 6){
            afficherWagon(wagon);
        }
       
    }while (saisie != 7);

}