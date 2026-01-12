#include <stdio.h>
#include <assert.h>

// Prototypes

/**
  * @brief Retourne le maximum entre deux entiers.
  * 
  * Compare n1 et n2 et renvoie la valeur la plus grande.
  *
  * @param n1 premier entier
  * @param n2 second entier
  * @return int la valeur maximale parmi n1 et n2
  */
int maxi(int n1, int n2);

/**
  * @brief Teste la fonction maxi
  * 
  * Propose 3 tests pour vérifier le bon 
  * fonctionnement de la fonction
  */    
void test_maxi(void);

// Programme principal
int main() {
    test_maxi();  // Appel
    return 0;
}

// Définition de la fonction maxi
int maxi(int n1, int n2) {
    if (n1 < n2) {
        return n2;
    } else {
        return n1;
    }
}
// Définition de la fonction test_maxi
void test_maxi(void) {
    assert(maxi(3, 4) == 4); // la fonction test_maxi
    assert(maxi(5, 2) == 5); // appelle la fonction maxi
    assert(maxi(7, 7) == 7); // 3 fois pour faire les tests
    printf("tests ok\n");
}