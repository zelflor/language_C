#include <stdio.h>

int main(){

    float nbrFirst, nbrSecond, result;
    char operande;

    printf("Entrez le premier nombre : \n");
    scanf("%f", &nbrFirst);
    printf("\nEntrez l'operande (+,-,*,/)\n");
    scanf(" %c", &operande);
    printf("\nEntrez le deuxieme nombre : \n");
    scanf("%f", &nbrSecond);


    switch (operande)
    {
    case '+':
        result = nbrFirst + nbrSecond;
        break;
    case '-':
        result = nbrFirst - nbrSecond;
        break;
    case '*':
        result = nbrFirst * nbrSecond;
        break;
    case '/':
        result = nbrFirst / nbrSecond;
        break;
    default:
        printf("Aucun operande choisie");
        break;
    }
    if(operande == '+' || operande == '-' || operande == '*' || operande == '/'){
        printf("\n  %f %c %f = %f",nbrFirst, operande, nbrSecond, result);
    }
    
    return 0;
}