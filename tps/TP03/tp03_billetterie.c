#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int age;
    int typeSeance;

    float categoriesTarif = 0;
    int standardPrice = 10;
    int thirddPrice = 12;
    int premiumPrice = 15;

    int selectPrice = 0;

    printf("\nSaisir votre âge :");
    scanf("%d", &age);
    printf("\n");

    if (age < 12){
        printf("Catégorie tarifaire : Enfant (-50%%)");
        categoriesTarif = 50;
    }else if (12 < age < 25){
        printf("Catégorie tarifaire : Jeune (-20%%)");
        categoriesTarif = 20;
    }else if (26 < age < 59){
        printf("Catégorie tarifaire : Adulte (Pas de réduction)");
        categoriesTarif = 0;
    }else if (age > 60){
        printf("Catégorie tarifaire : Senior (-30%%)");
        categoriesTarif = 30;
    }else {
        printf("Age non valide");
    }
    
    printf("\n--------------------------------------\n");
    printf("1 - Standard  (%d Euro)\n", standardPrice);
    printf("2 - 3D        (%d Euro)\n", thirddPrice);
    printf("3 - Premium   (%d Euro)\n", premiumPrice);
    printf("\nChoisissez le type de séance : \n");
    scanf("%d", &typeSeance);


    switch (typeSeance)
    {
    case 1:
        printf("Vous avez choisi : ");
        printf("Film standard - Prix de base %d Euro\n", standardPrice);
        selectPrice = standardPrice;
        break;
    case 2:
        printf("Vous avez choisi : ");
        printf("Film en 3D - Prix de base %d Euro\n", thirddPrice);
        selectPrice = thirddPrice;
        break;
    case 3:
        printf("Vous avez choisi : ");
        printf("Film Premium - Prix de base %d Euro\n", premiumPrice);
        selectPrice = premiumPrice;
        break;
    
    default:
        printf("Votre type de film existe pas \n");
        break;
    }
    unsigned int finalPrice = 0;

    finalPrice = (selectPrice * (1.0f - (categoriesTarif / 100.0f)));
    printf("Prix final du billet %u", finalPrice);

    return 0;
}