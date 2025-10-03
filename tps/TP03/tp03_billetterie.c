#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int age;
    int typeSeance;

    float categoriesTarif = 0;
    int standardPrice = 10;
    int thirddPrice = 12;
    int premiumPrice = 15;
    int suppLunettes;
    char codePromo[10];

    int selectPrice = 0;

    float finalPrice = 0;

    printf("\nSaisir votre âge :");
    scanf("%d", &age);
    printf("\n");

    if (age <= 12){
        printf("Catégorie tarifaire : Enfant (-50%%)");
        categoriesTarif = 50;
    }else if (age <= 25){
        printf("Catégorie tarifaire : Jeune (-20%%)");
        categoriesTarif = 20;
    }else if (age <= 59){
        printf("Catégorie tarifaire : Adulte (Pas de réduction)");
        categoriesTarif = 0;
    }else if (age > 59){
        printf("Catégorie tarifaire : Senior (-30%%)");
        categoriesTarif = 30;
    }else {
        printf("Age non valide");
    }
    
    printf("\n--------------------------------------\n");
    printf("1 - Standard  (%d Euro)\n", standardPrice);
    printf("2 - 3D        (%d Euro)\n", thirddPrice);
    printf("3 - Premium   (%d Euro)\n", premiumPrice);
    printf("\nChoisissez le type de séance :");
    scanf("%d", &typeSeance);


    switch (typeSeance)
    {
    case 1:
        printf("\nVous avez choisi : ");
        printf("Film standard - Prix de base %d Euro\n", standardPrice);
        selectPrice = standardPrice;
        break;
    case 2:
        printf("Vous avez choisi : ");
        printf("Film en 3D - Prix de base %d Euro\n", thirddPrice);
        selectPrice = thirddPrice;

        printf("\nVoulez vous le supplément lunettes 3D ? \nEntrer 1 si oui, 0 pour non : ");
        scanf("%d", &suppLunettes);

        switch (suppLunettes)
        {
        case 1:
            suppLunettes = 1;
            break;
        
        default:
            suppLunettes = 0;
            break;
        }
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

    finalPrice = ((float)selectPrice * (1.0f - ((float)categoriesTarif / 100.0f))) + (float)suppLunettes;

    printf("\nAvez vous un code promotionnel ?");
    scanf("%s", &codePromo);
    if (strcmp(codePromo, "CINE2025") == 0){
        printf("\n Code promo de 10%% appliquer");
        finalPrice = finalPrice * (1.0f - (10.0f / 100.0f));
    }else {
        printf("\n Code promo incorrect\n");
    }
    
    


   
    printf("\nPrix final du billet : %.2f", finalPrice);

    return 0;
}