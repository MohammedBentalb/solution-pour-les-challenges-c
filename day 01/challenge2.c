#include <stdio.h>


int main(){

    int userInput = 0, newNumber = 0;

    printf("Entrez un numbre: ");
    scanf("%d", &userInput);

    if(userInput < 10) {
        printf("nous pouvons pas inverser se nombre la %d\n", userInput);
        return 0;
    }

    while(userInput > 0){
        newNumber *= 10;
        newNumber += userInput % 10;
        userInput /= 10;
    }


    printf("Le nombre inversé est : %d", newNumber);
    return 0;
}