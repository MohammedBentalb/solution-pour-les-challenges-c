#include <stdio.h>

int main(){

    int montant = 0 , les20 = 0, les5 = 0, les10 = 0, les1 = 0;

    printf("Donne le montant on dollar american: ");
    scanf("%d", &montant);

    
    les20 = montant / 20;
    montant -= les20 * 20;
    
    les10 = montant / 10;
    montant -= les10 * 10;
    
    les5 = montant / 5;
    montant -= les5 * 5;
    
    les1 = montant;

    printf("Billets de 20$ : %d\nBillets de 10$ : %d\nBillets de 5$ : %d\nBillets de 1$ : %d\n", les20, les10, les5, les1);


    return 0;
}