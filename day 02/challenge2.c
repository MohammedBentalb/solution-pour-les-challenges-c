#include <stdio.h>
#include <stdbool.h>
 /**
  * Modifiez le programme repdigit.c pour qu'il affiche quels chiffres (le cas échéant)
ont été répétés.
  */

int main(){

    int number_seen[10] = {0}, digit = 0;
    long n;

    printf("Entrez un nombre: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        number_seen[digit] += 1;
        n /= 10;
    }

    printf("Chiffre : \t");
    for(int i = 0; i < 10; i++){
        printf(" %d", i);
    }
    printf("\n");
    
    printf("COccurrences : \t");
    for(int i = 0; i < 10; i++){
            printf(" %d", number_seen[i]);
    }

    printf("\n");
    return 0;
}