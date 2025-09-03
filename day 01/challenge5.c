#include <stdio.h>


int main(){

    int m = 0, n = 0, middle = 0, divider = 1;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &m, &n);


    if(n < 0 || m < 0){
        return 0;
    }

    middle = m < n ? m : n;


    for(int i = 1; i <= middle; i++){
        divider = (m % i == 0) && (n % i == 0) ? i : divider;
    }

    printf("%d", divider);

    return 0;
}