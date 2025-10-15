#include <stdio.h>

int main() {
    int nombre, nbrcorrect;
    nbrcorrect = 0;

    while (nbrcorrect != 1)
    {
        printf("Saisissez un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);

        if(nombre >= 1 && nombre <= 100){
            nbrcorrect = 1;
        }
    }

    printf("Merci pour votre saisie valide : %d\n", nombre);
    return 0;
}