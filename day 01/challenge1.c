#include <stdio.h>


int main(){

    char ISBN[12], prefixe[12], groupe[12], codeEditeur[12], NArticle[12], NControle[12];
    char userInput[100];
    int i = 0, gIndex = 0, count = 0;

    printf("Entrez l'ISBN : ");
    scanf("%s", userInput);

    while(userInput[i] != '\0'){

        if(userInput[i] == '-'){
            switch (count) {
                case 0: prefixe[gIndex] = '\0'; break;
                case 1: groupe[gIndex] = '\0'; break;
                case 2: codeEditeur[gIndex] = '\0'; break;
                case 3: NArticle[gIndex] = '\0'; break;
                case 4: NControle[gIndex] = '\0'; break;
                default:
                    break;
            }
            gIndex = 0;
            count++;
        } else {
            switch (count) {
                case 0:
                    prefixe[gIndex] = userInput[i];
                    gIndex++;
                    break;
                case 1:
                    groupe[gIndex] = userInput[i];
                    gIndex++;
                    break;
                case 2:
                    codeEditeur[gIndex] = userInput[i];
                    gIndex++;
                    break;
                case 3:
                    NArticle[gIndex] = userInput[i];
                    gIndex++;
                    break;
                case 4:
                    NControle[gIndex] = userInput[i];
                    gIndex++;
                    break;
                default:
                    break;
            }
        }

        i++;
    }

    printf("Préfixe GS1 : %s\nIdentifiant de groupe : %s\nCode de l'éditeur : %s\nNuméro d'article : %s\nChiffre de contrôle : %s\n", prefixe, groupe, codeEditeur, NArticle, NControle);

    return 0;
}