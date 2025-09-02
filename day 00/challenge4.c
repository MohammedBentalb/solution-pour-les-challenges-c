#include <stdio.h>

int main(){

    float montant = 0.0, apresTax = 0.0;

    printf("Entrez un montant : ");
    scanf("%f", &montant);
    
    apresTax = montant * 1.05;
    
    printf("Avec taxe ajoutee : %.2f", apresTax);


    return 0;
}