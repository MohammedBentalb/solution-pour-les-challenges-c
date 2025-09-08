#include <stdio.h>
#include <stdbool.h>
 /**
  * Modifiez le programme repdigit.c pour qu'il affiche quels chiffres (le cas échéant)
ont été répétés.
  */

int main(){

    bool digit_seen[10] = {false}, digit_repeated[10] =  {false}, seen = false;
    int digit;
    long n;

    printf("Entrez un nombre: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            digit_repeated[digit] = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if(!seen){
        printf("Aucun numéro n'a été répété !");
        return 0;
    }

    printf("Chiffre(s) répété(s): ");
    for(int i = 0; i < 10; i++){
        if(digit_repeated[i]){
            printf(" %d", i);
        }
    }
    printf("\n");


    return 0;
}