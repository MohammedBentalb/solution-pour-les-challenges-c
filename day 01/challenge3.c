#include <stdio.h>

int main(){

    char date[5];
    int heurs = 0, minutes = 0;
    
    printf("Entrez une heure (24h) : ");
    scanf("%s", &date);


    if(date[1] == ':'){
        heurs = (date[0] - '0');
        minutes = (date[2] - '0') * 10 + (date[3] - '0') + heurs * 60;
    } else {
        heurs = ((date[0] - '0') * 10) + (date[1] - '0');
        minutes = (date[3] - '0') * 10 + (date[4] - '0') + heurs * 60;
    }

    printf("%d\n", minutes);

    if(minutes < 531){
        printf("L'heure de départ la plus proche est 8:00 a.m, arrivant à 10:16a.m.\n");
    } else if(minutes < 631){
        printf("L'heure de départ la plus proche est 9:43 a.m, arrivant à 11:52a.m.\n");
    } else if(minutes < 723){
        printf("L'heure de départ la plus proche est 11:19 a.m, arrivant à 1:31p.m.\n");
    } else if(minutes < 803){
        printf("L'heure de départ la plus proche est 12:47 a.m, arrivant à 3:00p.m.\n");
    }else if(minutes < 892){
        printf("L'heure de départ la plus proche est 2:00 a.m, arrivant à 4:08p.m.\n");   
    }else if(minutes < 1042){
        printf("L'heure de départ la plus proche est 3:45 a.m, arrivant à 5:55p.m.\n");
    }else if(minutes < 1222){
        printf("L'heure de départ la plus proche est 7:00 a.m, arrivant à 9:20p.m.\n");    
    } else{
        printf("L'heure de départ la plus proche est 9:45 a.m, arrivant à 1:58p.m.\n");
    }
    

    return 0;
}