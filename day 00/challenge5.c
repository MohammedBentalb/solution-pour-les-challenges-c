#include <stdio.h>


int main(){

    int x = 0, result = 0;

    printf("Donnez la valeur de x: ");
    scanf("%d", &x);

    result = 3 * x * x * x * x * x + 2 * x * x * x * x + 5 * x * x * x - x * x + 7 * x - 6;

    printf("La resultat de l'equation est : %d", result);

    return 0;
}