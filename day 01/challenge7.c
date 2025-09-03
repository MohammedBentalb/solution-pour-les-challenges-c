#include <stdio.h>

int main(){

    int numerateur = 1, denomirateur = 1;
    int middle = 0, divider = 1;

    printf("Entrez une fraction : ");
    scanf("%d/%d", &numerateur, &denomirateur);

    middle = numerateur > denomirateur ? numerateur : denomirateur;
    for(int i = 2; i <= middle / 2; i++){
        divider = (numerateur % i == 0 && denomirateur % i == 0) ? i : divider;
    }

    printf("Sous sa forme la plus simple: %d/%d\n", numerateur / divider, denomirateur / divider);
    printf("%d", divider);

    return 0;
}