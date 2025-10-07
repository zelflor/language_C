// Exercice 3 +

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int menuQuestion;
    printf("Souhaitez-vous : \n");
    printf("    - (1) Lire un état\n");
    printf("    - (2) Modifier un état\n");
    printf("Choix : ");
    scanf("%d", &menuQuestion);
    unsigned char statut;
    printf("\n\nEntrez la valeur actuelle de l'octet de statut (en décimal) : ");
    scanf("%d", &statut);
    printf("Statut actuel : 0x%02X (hex), %d (decimal)", statut, statut);
    switch (menuQuestion)
    {
    case 1:
        
        break;
    case 2:
        break;

    default:
        printf("\nAucune modification apporter.");
        break;
    }
    // unsigned char statut = 0b00000000;
    // unsigned char masqueVentilateur = 0b00000001;
    // unsigned char masqueReveilSonde = 0b00000010;
    // unsigned char masqueForceFroid = 0b00000100;

    // if ((statut & masqueVentilateur) !=0){
    //     printf ("Ventilateur actif");
    // }else {
    //     printf ("Ventilateur inactif");
    // }


    // statut = statut ^ masqueForceFroid;
    // printf("\n %u", statut);
    // printf(" \n %02X", statut);

    // statut = statut ^ masqueReveilSonde;

    // printf("\n %u", statut);
    // printf(" \n %02X", statut);
    
    // statut = statut ^ masqueReveilSonde;

    // printf("\n %u", statut);
    // printf(" \n %02X", statut);
    return 0;
}

// int main() {
  
//     unsigned char statut = 0b00000000;
//     // Bit n° |	État surveillé | 	0 = ...  |	1 = ...

//     // 0 |	Ventilateur |	Inactif |	Actif
//     unsigned char masqueVentilateur = 0b00000001;

//     // unsigned char octet_test = 0b00000101;
//     // unsigned char masque = 0b00000110;
//     // unsigned char octet_test = octet_test ^ masque;  // 0000 0101 ^ 0000 0110 = 0000 0011

//      // 1 |	Sonde |	Réveillée |	En veille
//     unsigned char masqueSonde = 0b00000010;
//     // 2 |	Refroidissement |	Normal |	Forcé
//     unsigned char masqueRefroidissement = 0b00000100;
//     // 3 |	Mode maintenance |	Inactif |	En cours
//     unsigned char masqueMaintenance = 0b00001000;
//     // 4 |	Température critique |	Normale |	Alerte
//     unsigned char masqueTempCritique = 0b00010000;
//     // 5 |	Niveau d’eau |	Normal |	Bas
//     unsigned char masqueNiveauEau = 0b00100000;
//     // 6 |	Surveillance automatique |	Activée |	Désactivée
//     unsigned char masqueSurveillance  = 0b01000000;
//     // 7 |	Arrêt d’urgence |	Non détectée |	Urgence
//     unsigned char masqueurgence = 0b10000000;


//     return 0;
// }
