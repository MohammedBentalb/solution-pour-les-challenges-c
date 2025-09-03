#include <stdio.h>


int main(){

    int mois = 0, jour = 0, annee = 0;
    int mois2 = 0, jour2 = 0, annee2 = 0;

    printf("Entrez la première date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &mois, &jour, &annee);
   
    printf("Entrez la deuxieme date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &mois2, &jour2, &annee2);
        
    printf("%d %d %d\n", jour, mois, annee);
    printf("%d %d %d\n", jour2, mois2, annee2);

    if(annee < annee2 || (annee == annee2 && mois < mois2) || (annee == annee2 && mois == mois2 && jour < jour2)){
        printf("%d/%d/%d est plus tôt que %d/%d/0%d\n", mois, jour, annee, mois2, jour2, annee2);
    } else if(annee > annee2 || (annee == annee2 && mois > mois2) || (annee == annee2 && mois == mois2 && jour > jour2)) {
        printf("%d/%d/%d est plus tôt que %d/%d/0%d\n", mois2, jour2, annee2, mois, jour, annee);
    } else {
        printf("Les dqtes sont les memes\n");
    }

    return 0;
}