#include <stdio.h>

void fct(int i);
void fct2(int n);



int main() 
{
    int i = 5;
    fct(i);
    fct2(i);
    return 0;
}



void fct(int i) 
{
    printf ("fct affiche : %d\n", i);
}

void fct2(int n) 
{
    printf("fct2 affiche : %d\n", n);
}