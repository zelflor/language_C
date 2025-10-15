#include <stdio.h>
#include <windows.h>

int main() {
    int N = 10; // LA VALEUR MAX
    int i = 1; // LA VALEUR INCREMENTER
    while (i <= N) { // tant que i est inférieur a n alors 
        printf("%d ", i); // affiche la value de i
       
        Sleep(200);
        i++; // ajoute 1 a i
    }

    return 0;
}