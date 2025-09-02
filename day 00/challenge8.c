#include <stdio.h>


int main(){

    float pret = 0.0, interet = 0.0, interetM = 0.0, paiement = 0.0;
    char classment[][20] = {"premier", "deusieme", "troisieme"};

    printf("Entrez le montant du prêt : ");
    scanf("%f", &pret);

    printf("Entrez le taux d'intérêt : ");
    scanf("%f", &interet);

    printf("Entrez le paiement mensuel : ");
    scanf("%f", &paiement);

    interetM = interet / (100.0 * 12);

    for(int i = 0; i < 3; i++){
        pret += (pret * interetM);
        pret -= paiement;

        printf("Solde restant après le %s paiement: $%.2f\n", classment[i], pret);
    }

    return 0;
}