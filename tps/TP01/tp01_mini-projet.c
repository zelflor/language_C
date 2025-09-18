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
<<<<<<< HEAD
    float debitpourcent;
=======
    unsigned int debitpourcent;
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e
    int pariteSonde;
    unsigned short numDiagnext;

    // Demande à l'utilisateur d'entrer les valeurs
    
    printf("Bienvenue dans le Diagnostic du système Sentinel ! \n");
    printf("Entrer la valeur de la temperature de l'eau dans le circuit 1 en °c\n");
    scanf(" %f", &tempEau1);
    
    printf("Entrer la valeur de la temperature de l'eau dans le circuit 2 en °c\n");
    scanf(" %f", &tempEau2);

    printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 1 en °c \n");
    scanf(" %f", &tempZone1);

    printf("Entrer la valeur de la temperature de la salle des serveurs de la zone 2 en °c \n");
    scanf(" %f", &tempZone2);

    printf("Entrer la pression dans les circuits en hPa\n");
    scanf(" %u", &pression);

    printf("Entrer le débit de l'eau dans les circuits en hPa\n");
    scanf(" %u", &debit);

    printf("Entrer le numero de diagnostic\n");
<<<<<<< HEAD
    scanf("%hu", &numDiag);
    
    printf("Entrer l'identifiant de la sonde\n");
    scanf(" %hu", &idSonde);
=======
    scanf("%u", &numDiag);
    
    printf("Entrer l'identifiant de la sonde\n");
    scanf(" %u", &idSonde);
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e

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
<<<<<<< HEAD
    tempEauGap = fabs(tempEauGap);

    // Calcul de l'écart de température des zones
    tempzoneGap = tempZone1 - tempZone2; 
    tempzoneGap = fabs(tempzoneGap); 
=======
    tempEauGap = abs(tempEauGap);

    // Calcul de l'écart de température des zones
    tempzoneGap = tempZone1 - tempZone2; 
    tempzoneGap = abs(tempzoneGap); 
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e

    // Conversion de la pression en Pa

    pressionPa = pression * 100;

    // Calcul du niveau de débit en %
<<<<<<< HEAD
    debitpourcent = ((float)debit / 300.0f) * 100.0f;
=======
    debitpourcent = debit / 300;
    debitpourcent = debitpourcent * 100;
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e
    

    // Incrémentation du numéro de diagnostic
    numDiagnext = numDiag + 1;

    
    // Détermination de la parité du numéro de sonde
    pariteSonde = idSonde % 2;



// Affichage formaté
    printf("\n-----------------------------------------------------\n");
    printf("          🔍 DIAGNOSTIC DU SYSTEME SENTINEL\n");
    printf("-----------------------------------------------------\n");
    printf("🔢 Numero prochain diagnostic   : %hu \n \n", numDiagnext);

<<<<<<< HEAD
    printf("🆔 Sonde ID                     : %hu \n", idSonde);
=======
    printf("🆔 Sonde ID                     : %d \n", idSonde);
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e
    printf("🆔 Parite sonde                 : %d \n\n", pariteSonde);

    printf("📁 Chemin log                   : %s \n\n", cheminLog);

    printf("🌡️ Temp. eau 1                  : %.2f \n", tempEau1);
    printf("🌡️ Temp. eau 2                  : %.2f \n", tempEau2);
    printf("📊 Ecart temp. eau              : %.2f \n\n", tempEauGap);

    printf("🌡️ Temp. zone 1                 : %.2f \n", tempZone1);
    printf("🌡️ Temp. zone 2                 : %.2f \n", tempZone2);
    printf("📊 Ecart temp. eau              : %.2f \n\n", tempzoneGap);

<<<<<<< HEAD
    printf("🧪 Pression circuit             : %u Pa\n", pressionPa);
    printf("🚿 Debit                        : %u L/min\n", debit);
    printf("🚿 Niveau de debit              : %f %% \n", debitpourcent);
=======
    printf("🧪 Pression circuit             : %d Pa\n", pressionPa);
    printf("🚿 Debit                        : %u L/min\n", debit);
    printf("🚿 Niveau de debit              : %d %% \n", debitpourcent);
>>>>>>> 392afe934de39b234d234b0c08b27cc75803c86e
    printf("--------------------------------------------------------\n");



    return 0;
}
