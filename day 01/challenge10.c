#include <stdio.h>
#include <ctype.h>


int main(){

    char word[100], c;
    int value = 0, i = 0;

    printf("Entrez un mot: ");
    scanf("%s", word);

    while(word[i] != '\0'){

        c = toupper(word[i]);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O' || c == 'R' || c == 'S' || c == 'T' || c == 'U'){
            value += 1;
        } else if(c == 'D' || c == 'G'){
            value += 2;
        } else if(c == 'B' || c == 'C' ||c == 'M' || c == 'P'){
            value += 3;
        } else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y'){
            value += 4;
        } else if(c == 'K'){
            value += 5;
        } else if(c == 'J' || c == 'X'){
            value += 8;
        } else if(c == 'Q' || c == 'Z'){
            value += 10;
        }
        i++;
    }

    printf("Valeur Scrabble: %d", value);

    return 0;
}