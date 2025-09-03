#include <stdio.h>

int main(){

    char number[50], newNumber[50];
    int i = 0;

    printf("Entrez un numéro de téléphone : ");
    scanf("%s", number);

    while(number[i] != '\0'){
        if(number[i] == 'A' || number[i] == 'B' || number[i] == 'C'){
            newNumber[i] = '2';
        } else if(number[i] == 'D' || number[i] == 'E' || number[i] == 'F'){
            newNumber[i] = '3';
        }else if(number[i] == 'G' || number[i] == 'H' || number[i] == 'I'){
            newNumber[i] = '4';
        }else if(number[i] == 'J' || number[i] == 'K' || number[i] == 'L'){
            newNumber[i] = '5';
        }else if(number[i] == 'M' || number[i] == 'N' || number[i] == 'O'){
            newNumber[i] = '6';
        }else if(number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' | number[i] == 'S'){
            newNumber[i] = '7';
        }else if(number[i] == 'T' || number[i] == 'U' || number[i] == 'V'){
            newNumber[i] = '8';
        }else if(number[i] == 'W' || number[i] == 'X' || number[i] == 'Y'){
            newNumber[i] = '9';
        } else {
            newNumber[i] = number[i];
        }
        i++;
    }

    printf("%s", newNumber);

    return 0;
}