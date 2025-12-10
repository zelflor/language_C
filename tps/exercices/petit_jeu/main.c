// paper pls

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


void generedIDCard(char npcname[], unsigned int nbrerror);


int main(){


    int life = 10;
    char npcNamesList[7][15] = {"Jane", "Pierre", "Hortense", "Raphael", "Quentin", "Simon", "Marc"};
    int actualmoney = 300;

    int taxes = 100;



    do {
        actualmoney = actualmoney - taxes;

        if (actualmoney <= 0){
            printf("\n-------------------------------------------------------------\n");
            printf("Vous avez perdu, l\'Etat decide de vous envoyer en prison vous et votre famille\n");
            printf("\n-------------------------------------------------------------\n");

            return 0;
        }

        printf("\n-------------------------------------------------------------\n");
        printf("\nUne nouvelle journee commence");
        printf("\n Vous avez %d money", actualmoney);
        printf("\n Vous payer %d Taxes", taxes);
        printf("\n Il vous reste que %d erreurs \n", life);
        printf("\n-------------------------------------------------------------\n");
        Sleep(3000);
        // Nombre de NPC par jour
        int nbrNPCRow = 0;
        srand(time(0));
        nbrNPCRow = rand() % 3 + 1;

        // Pour chaque NPC
        for (int i = 0; i <= nbrNPCRow; i++){
            int errorinaday = 0;
            // Recuperer sont nom
            int NPCNameIndex = 0;
            srand(time(0));
            NPCNameIndex = rand() % 7 + 0;
            char NPCName[15];
            strcpy(NPCName, npcNamesList[NPCNameIndex]);

            printf("%s se pointe a la frontiere \n", NPCName);

            // If c'est un terrorist
            int ifBomber = 0;
            srand(time(0));
            ifBomber = rand() % 2 + 0;
            generedIDCard(NPCName, ifBomber);

            unsigned int letHimTravelBorder = 0;
            printf("\n-------------------------------------------------------------\n");
            printf("Le laisser passer la frontiere? (0 pour non, 1 pour oui) \n");
            
            scanf("%u", &letHimTravelBorder);

            if (letHimTravelBorder == 1){
                if (ifBomber == 1){
                    life--;

                    printf("\n Un attentat a lieu, vous vous refugiez dans un abri\n");
                    errorinaday++;
                    Sleep(6000);
                    break;
                }else {
                    printf("\n Camarade, L Etat vous remercie \n");
                    Sleep(3000);
                }
            }else {
                if (ifBomber == 0){
                    actualmoney = actualmoney - taxes + 100;
                    printf("\n Vous vous etes trompe, L Etat perd un travailleur\n");
                    errorinaday++;
                    Sleep(6000);
                }else {
                    printf("\n Camarade, L Etat vous remercie \n");
                    Sleep(3000);
                }
            }
            printf("\n-------------------------------------------------------------\n");
            printf("\n Fin de journee, vous avez fait %d erreurs aujourd'hui \n", errorinaday);
            int moneygetday = (taxes * 2) - errorinaday * 20;
            printf("Vous gagner : %d \n \n", moneygetday);
            actualmoney = actualmoney + moneygetday;
            printf("\n-------------------------------------------------------------\n");

        }


    }while(life > 0);





    

    return 0;
}


void generedIDCard(char npcname[], unsigned int nbrerror){
    char denycountryList[5][15] = {"TRUC", "QUENTIN", "RUSSIE", "MEOW", "HelIo"};
    char allowcountryList[5][15] = {"Opera", "FireFox", "Pays random", "Hello", ":3"};
    
    printf("################################################\n");
    printf("%s", npcname);
    char npccountry[15];
    int countryindex = 0;
    srand(time(0));
    countryindex = rand() % 5 + 0;
    if (nbrerror == 1){
        npccountry[15] = denycountryList[countryindex][15];
    }else {
        npccountry[15] = allowcountryList[countryindex][15];
    }
    printf("\nPays : %s", npccountry);
    printf("\n################################################\n");
}