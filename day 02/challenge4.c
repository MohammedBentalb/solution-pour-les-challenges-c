#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

  char sentance[256];
  int i = 0;

  printf("Entrez votre message : ");
  fgets(sentance, sizeof(sentance)/sizeof(sentance[0]),stdin);

  if(sentance[strlen(sentance) - 1] == '\n') sentance[strlen(sentance) - 1] = '\0';

  while(sentance[i]){
    sentance[i] = toupper(sentance[i]);
    switch (sentance[i]){
      case 'A': sentance[i] = '4'; break;
      case 'B': sentance[i] = '8'; break;
      case 'E': sentance[i] = '3'; break;
      case 'I': sentance[i] = '1'; break;
      case 'O': sentance[i] = '0'; break;
      case 'S': sentance[i] = '5'; break;
      default: break;
    }
    i++;
  }


  strcat(sentance, "!!!!!!!!!");

  printf("En B1FF-speak : %s", sentance);
  
    return 0;
}