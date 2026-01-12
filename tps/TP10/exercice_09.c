#include <stdio.h>

int incremente(int n);

int main(void){
 int n = 3; 
 printf("Avant, n = %d\n", n); 
 incremente(n); 
 printf("Hum... n = %d\n", n); 
 n = incremente(n); 
 printf("Après, n = %d\n", n); 
 return 0; 
}

int incremente(int n){
    return n + 1;
}