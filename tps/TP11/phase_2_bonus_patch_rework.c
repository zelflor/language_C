#include <stdio.h>
#include <string.h>
#include <assert.h>

#define NB_PLACES 60 
#define FENETRES 0
#define COULOIR 1
#define LIBRE 0
#define OCCUPEE 1

/**
  * @brief definir toute les places a 0.
  *
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  */
void initWagon(int wagon[][NB_PLACES / 2]);

/**
  * @brief afficher le wagon.
  *
  * affiche sous la forme :
  * 000000000000
  * 000000000000
  * 
  * 000000000000
  * 000000000000
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  */
void afficherWagon(int wagon[][NB_PLACES / 2]);


/**
  * @brief Réserve une place spécifique.
  *
  * Demande l'identifiant de la place puis compte et regarde si la place est prise ou non
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int 0 si la place a été réservée avec succès, -1 si la place n'est disponible
  */
int reserverunePlace(int wagon[][NB_PLACES / 2]);



/**
  * @brief Réserve une place côté Fenetres.
  *
  * Recherche la première place libre (0) côté Fenetres, en partant de l'indice 0.
  * Passe cette place à 1 pour indiquer une réservation.
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int 0 si une place a été réservée avec succès, -1 si aucune place Fenetres n'est disponible
  */
int reserverUnePlaceFenetres(int wagon[][NB_PLACES / 2]);


/**
  * @brief Réserve une place côté Couloir.
  *
  * Recherche la première place libre (0) côté Couloir, en partant de l'indice 0.
  * Passe cette place à 1 pour indiquer une réservation.
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int 0 si une place a été réservée avec succès, -1 si aucune place Couloir n'est disponible
  */
int reserverUnePlaceCouloir(int wagon[][NB_PLACES / 2]);


/**
  * @brief donne le bilan des places occupees.
  *
  * Affiche le nombre de places prises de tout les cotés (fenetres, couloir)
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int total de place occupée
  */
int faireBilanPlacesOccupees(int wagon[][NB_PLACES / 2]);


/**
  * @brief libere une place côté Couloir.
  *
  * Recherche la première place libre (1) côté Couloir, en partant de l'indice 0.
  * Passe cette place à 0 pour indiquer une réservation.
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int 0 si une place a été liberé avec succès, -1 si toute les places sont libre
  */
int libererUnePlaceCouloir(int wagon[][NB_PLACES / 2]);


/**
  * @brief libere une place côté Fenetres.
  *
  * Recherche la première place libre (1) côté Fenetres, en partant de l'indice 0.
  * Passe cette place à 0 pour indiquer une réservation.
  *
  * @param wagon tableau NB_PLACES représentant les places du wagon
  * @return int 0 si une place a été liberé avec succès, -1 si toute les places sont libre
  */
int libererUnePlaceFenetres(int wagon[][NB_PLACES / 2]);

/**
  * @brief affiche le menu
  *
  * Affiche toute les possibilité dans le menu
  * puis return la saisie
  *
  * @return int saisie de l'utilisateur (permet de gerer les actions)
  */
int afficherMenu(void);



int main(void){
    int wagon[2][NB_PLACES / 2];
    initWagon(wagon);
    int exit = 0;
    while (exit == 0)
    {
    
    
    int saisie = afficherMenu();
    int result;

    switch (saisie)
    {
    case 1:
        
        result = reserverunePlace(wagon);
        if (result == 0){
            printf("\n La place a bien ete reserver!");
        }else {
            printf("\n La place est deja occupe.");
        }
        break;

    case 2:
        result = reserverUnePlaceCouloir(wagon);
        if (result == 0){
            printf("\n Une place a bien ete reserver!");
        }else {
            printf("\n Il n y a plus de place cote couloir.");
        }
        break;

    case 3:
        result = reserverUnePlaceFenetres(wagon);
        if (result == 0){
            printf("\n Une place a bien ete reserver!");
        }else {
            printf("\n Il n y a plus de place cote fenetres.");
        }
        break;
    case 4:
        result = faireBilanPlacesOccupees(wagon);
        printf("\nPlaces : %d / %d", result, NB_PLACES);
        break;
    case 5:
        result = libererUnePlaceCouloir(wagon);
        if (result == 0){
            printf("\n Une place a bien ete liberer!");
        }else {
            printf("\n Toute les places sont libre.");
        }
        break;
    case 6:
        result = libererUnePlaceFenetres(wagon);
        if (result == 0){
            printf("\n Une place a bien ete liberer!");
        }else {
            printf("\n Toute les places sont libre.");
        }
        break;
    case 7:
        afficherWagon(wagon);
        break;
    case 8:
        exit++;
        break;
    default:
        break;
    }

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
        printf("\n Saisir l identifiant de la place : ");
        scanf("%d", &saisieIdPlace);
    }while (saisieIdPlace < 1 || saisieIdPlace > NB_PLACES);
    saisieIdPlace--;
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
    printf("\n----------------------------");
    printf("\n1 - reserver une place specifique");
    printf("\n2 - reserver une place Couloir");
    printf("\n3 - reserver une place Fenetres");
    printf("\n4 - afficher le bilan des places occupees");
    printf("\n5 - liberer une place Couloir");
    printf("\n6 - liberer une place Fenetres");
    printf("\n7 - afficher le wagon");
    printf("\n8 - quitter\n");
    
    int saisie;    
    do {
        scanf("%d", &saisie);
    }while (saisie <= 0 || saisie > 8);
    printf("\n----------------------------\n");
    return saisie;
}

int reserverUnePlaceFenetres(int wagon[][NB_PLACES / 2]){
    for (int i = 0; i < NB_PLACES / 2; i++)
    {
        if (wagon[FENETRES][i] == 0){
            wagon[FENETRES][i] = 1;
            return 0;
        }
    }
    return -1;
        
}

int reserverUnePlaceCouloir(int wagon[][NB_PLACES / 2]){
    for (int i = 0; i < NB_PLACES / 2; i++)
    {
        if (wagon[COULOIR][i] == 0){
            wagon[COULOIR][i] = 1;
            return 0;
        }
    }
    return -1;
        
}

int faireBilanPlacesOccupees(int wagon[][NB_PLACES / 2]){
    int nbr_place_couloir = 0, nbr_place_fenetres = 0;
    for (int i = 0; i < NB_PLACES / 2; i++)
    {
        if (wagon[COULOIR][i] == 1){
            nbr_place_couloir++;
        }
        if (wagon[FENETRES][i] == 1){
            nbr_place_fenetres++;
        }
    }
    printf("\nnombre de places occupees cote Fenetres : %d", nbr_place_fenetres);
    printf("\nnombre de places occupees cote Couloir : %d", nbr_place_couloir);

    return nbr_place_couloir + nbr_place_fenetres;
}

int libererUnePlaceFenetres(int wagon[][NB_PLACES / 2]){
    for (int i = 0; i < NB_PLACES / 2; i++)
    {
        if (wagon[FENETRES][i] == 1){
            wagon[FENETRES][i] = 0;
            return 0;
        }
    }
    return -1;
        
}

int libererUnePlaceCouloir(int wagon[][NB_PLACES / 2]){
    for (int i = 0; i < NB_PLACES / 2; i++)
    {
        if (wagon[COULOIR][i] == 1){
            wagon[COULOIR][i] = 0;
            return 0;
        }
    }
    return -1;
        
}