#include <stdio.h>

int main() {
    /* 
    Exercice 1 :
    - Demande à l’utilisateur son **prénom**
    - Affiche un message de bienvenue personnalisé  
    */
   
    //connexion au système
    printf("Connexion au système...\n");
    char prenomAgent[30];
    printf("Entrez le prénom de l'agent : ");
    scanf("%29s", prenomAgent);
    // remplacer les ...
    printf("Bienvenue, agent %s Lancement du diagnostic !\n", prenomAgent);

    printf("Entrer la température du processeur : \n");
    float temperatureProcesseur;
    scanf("%f", &temperatureProcesseur);
    
    printf("Entrer le niveau de charge du CPU : \n");
    int chargeCPU;
    scanf("%d", &chargeCPU);

    printf("Entrer l'/etat du serveur : \n");
    char EtatServer;
    scanf(" %c", &EtatServer);

    printf("Temperature du processeur : %.2f (avec 2 décumales) \nNiveau de charge CPU : %2d%% \nEtat du serveur : %c", temperatureProcesseur, chargeCPU, EtatServer);
    

    /*
    Exercice 3 :
    1. Demande à l’utilisateur d’entrer :
        - La température du processeur (`float`)
        - Le niveau de charge CPU (`int`)
        - Une lettre indiquant l'état du serveur,`'A'` pour actif - `'E'` pour erreur (`char`)
    2. Affiche ensuite ces trois valeurs avec des messages clairs.
        Par exemple : 
        - "Température du processeur : 45.58 °C" (avec 2 décimales)
        - "Niveau de charge CPU : 75%"  
        - "État du serveur : A"
    */

    // Déclaration des variables
    // Notez que les variables doivent être déclarées avant leur utilisation
    // Utilisez les types appropriés pour chaque variable

    

    // Demande à l'utilisateur d'entrer les valeurs


    
    // Affichage des valeurs saisies



    
    return 0;

}