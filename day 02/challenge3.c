#include <stdio.h>
#include <stdbool.h>

 /**
  * Modifiez le programme repdigit.c pour qu'il affiche quels chiffres (le cas échéant)
ont été répétés.
  */

int main(){

    int number_seen[10] = {0}, digit = 0;
    long n;
    
    do
    {
        printf("Entrez un nombre: ");
        scanf("%ld", &n);

        if(n <= 0){
            break;
        }
        
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
            number_seen[i] = 0;
        }
        
        printf("\n");
    } while (true);

    return 0;
}