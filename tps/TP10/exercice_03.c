
// Prototype

char pair(unsigned int n);

int main() 
{
    unsigned int x;

    // Saisie du nombre
    printf("Entrez un entier : ");
    scanf("%u", &x);

    // Affiche la parité (appel de la fonction)

    if ( pair(x) == 0) printf("%d est un nombre pair.", x);
    else printf("%d est un nombre impair.", x);

    return 0;
}

char pair(unsigned int n){
    if (n % 2 == 0){
        return 0;
    }else {
        return 1;
    }
}