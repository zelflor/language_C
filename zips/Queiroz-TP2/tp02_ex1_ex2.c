// Exercice 1
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>


// int main() {
//     float tempEau1;
//     float tempEau2;
//     float tempZone1;
//     float tempZone2;
    
//     printf("Entrer la valeur de la temperature de l'eau dans le circuit 1 en °c\n");
//     scanf(" %f", &tempEau1);
    
//     printf("Entrer la valeur de la temperature de l'eau dans le circuit 2 en °c\n");
//     scanf(" %f", &tempEau2);

//     printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 1 en °c \n");
//     scanf(" %f", &tempZone1);

//     printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 2 en °c \n");
//     scanf(" %f", &tempZone2);

//     if (tempEau1 > tempEau2){
//         printf("La temperature la plus élevée du circuit 1 est : %f\n", tempEau1);
//     }else {
//         printf("La temperature la plus élevée du circuit 2 est : %f\n", tempEau2);
//     }

//     if (tempZone1 > tempZone2){
//         printf("La temperature la plus élevée de la salle des serveurs est : %f\n", tempEau1);
//     }else {
//         printf("La temperature la plus élevée de la salle des serveurs est : %f\n", tempEau2);
//     }

//     return 0;
// }

// Exercice 2
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// icônes pour affichage (à insérer comme un caractère)
// 🌡️📊🧪🚿🆔📁🔍🛑

int main() {
    // Déclaration des variables
    float tempEau1;
    float tempEau2;
    float tempZone1;
    float tempZone2;
    unsigned int pression;
    unsigned int debit;

    unsigned short numDiag;
    unsigned short idSonde;
    char cheminLog[50];

    // All variables for calc
    float tempEauMoyenne;
    float tempzoneMoyenne;
    float tempEauGap;
    float tempzoneGap;
    unsigned int pressionPa;
    float debitpourcent;
    int pariteSonde;
    unsigned short numDiagnext;

    // All new variables TP2
    int tempEauStable;
    int tempZonesStable;
    char pressionNormale;
    int debitOk;
    int sondeDefaut;
    char alerteSysteme;

    // Demande à l'utilisateur d'entrer les valeurs
    
    printf("Bienvenue dans le Diagnostic du système Sentinel ! \n");
    printf("Entrer la valeur de la temperature de l'eau dans le circuit 1 en °c\n");
    scanf("%f", &tempEau1);
    
    printf("Entrer la valeur de la temperature de l'eau dans le circuit 2 en °c\n");
    scanf("%f", &tempEau2);

    printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 1 en °c \n");
    scanf("%f", &tempZone1);

    printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 2 en °c \n");
    scanf("%f", &tempZone2);

    printf("Entrer la pression dans les circuits en hPa\n");
    scanf("%u", &pression);

    printf("Entrer le débit de l'eau dans les circuits en hPa\n");
    scanf("%u", &debit);

    printf("Entrer le numero de diagnostic\n");
    scanf("%hu", &numDiag);
    
    printf("Entrer l'identifiant de la sonde\n");
    scanf("%hu", &idSonde);

    printf("Enfin entrer le chemin du fichier de sauvegarde\n");
    scanf(" %29s", cheminLog);
 



    // Calcul de la température moyenne des eaux de refroidissement
    tempEauMoyenne = tempEau1 + tempEau2;
    tempEauMoyenne = tempEauMoyenne / 2;


    // Calcul de la température moyenne des zones
 
    tempzoneMoyenne = tempZone1 + tempZone2;
    tempzoneMoyenne = tempzoneMoyenne / 2;

    // Calcul de l'écart de température des eaux
    tempEauGap = tempEau1 - tempEau2; 
    tempEauGap = fabs(tempEauGap);

    // Calcul de l'écart de température des zones
    tempzoneGap = tempZone1 - tempZone2; 
    tempzoneGap = fabs(tempzoneGap); 

    // Conversion de la pression en Pa

    pressionPa = pression * 100;

    // Calcul du niveau de débit en %
    debitpourcent = ((float)debit / 300.0f) * 100.0f;
    

    // Incrémentation du numéro de diagnostic
    numDiagnext = numDiag + 1;

    
    // Détermination de la parité du numéro de sonde
    pariteSonde = idSonde % 2;

    //  écart est inférieur a 0.4
    if (tempEau1 < 15 && tempEau1 < 15){
        if (tempEau1 - tempEau2 <= 0.4f){
            tempEauStable = 1;
        }
    }

    if (tempZone1 - tempZone2 <= 1){
        // printf("true");
        if (tempZone1 >= 20 && tempZone1 < 25 && tempZone2 >= 20 && tempZone2 < 25){
            // printf("true");
            tempZonesStable = 1;
        }
    }
    // si pression est plus elever que 100
    if (pression > 100){
        pressionNormale = 1;
    }

    // si debit est entre 200 et 300
    if (200 < debit < 300){
        debitOk = 1;
    }

    // si idsonde est divisible par 2
    if (idSonde % 2){
        sondeDefaut = 0;
    }else {
        sondeDefaut = 1;
    }

    // verification si des valeurs ne sont pas bonne et donc mettre 1 a alerte
    if (tempEauStable != 1 || tempZonesStable != 1 ||  pressionNormale !=1 || debitOk !=1 || sondeDefaut == 1){
        alerteSysteme = 1;
    }
    

// Affichage formaté
    printf("\n-----------------------------------------------------\n");
    printf("          🔍 DIAGNOSTIC DU SYSTEME SENTINEL\n");
    printf("-----------------------------------------------------\n");
    printf("Numero prochain diagnostic   : %hu \n \n", numDiagnext);

    printf("Sonde ID                     : %hu \n", idSonde);
    printf("Parite sonde                 : %d \n\n", pariteSonde);

    printf("Chemin log                   : %s \n\n", cheminLog);

    printf("Temp. eau 1                  : %.2f \n", tempEau1);
    printf("Temp. eau 2                  : %.2f \n", tempEau2);
    printf("Ecart temp. eau              : %.2f \n\n", tempEauGap);

    printf("Temp. zone 1                 : %.2f \n", tempZone1);
    printf("Temp. zone 2                 : %.2f \n", tempZone2);
    printf("Ecart temp. eau              : %.2f \n\n", tempzoneGap);

    printf("Pression circuit             : %u Pa\n", pressionPa);
    printf("Debit                        : %u L/min\n", debit);
    printf("Niveau de debit              : %.2f %% \n \n", debitpourcent);
    printf("[Temperature eaux stable]        : %d \n", tempEauStable);
    printf("[Temperature zones stable]       : %d \n", tempZonesStable);
    
    printf("[Pression normale]               : %hhd \n", pressionNormale);
    printf("[Debit correct]                  : %d \n", debitOk);
    printf("[Defaut Sonde]                   : %d \n", sondeDefaut);
    printf("--------------------------------------------------------\n");
    printf("Alerte systeme                : %hhd\n", alerteSysteme);


    return 0;
}
