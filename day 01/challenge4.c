#include <stdio.h>


int main(){

    int note = 0;

    printf("Entrez une note numérique : ");
    scanf("%d", &note);

    if(note > 100 || note < 0){
        printf("Data invalide!");
        return 0;
    }

    switch (note / 10)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }

    return 0;
}