#include <stdio.h>
#include <math.h>

int main(){

    int n = 0, i = 1;

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    while(i < n){
        if((int)pow(i, 2) > n) break;
        if( i % 2 == 0){
            printf("%d\n", (int)pow(i, 2));
        }
        i++;
    }


    return 0;
}