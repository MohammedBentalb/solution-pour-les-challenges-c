#include "header.h"

struct Book books[MAX_BOOKS_NUMBER] = {0};


void cleanInputBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

bool stringCompare(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(tolower(str1[i]) != tolower(str2[i])){
            return false;
        }
        i++;
    }

    return str1[i] == '\0' && str2[i] == '\0';
}

void addBook(){
    char titre[100];
    char autheur[100];
    int prix;
    int quantite;
    int i = 0;

    printf("\n");
    printf("\n");
    printf("le nom de livre / romon: ");
    fgets(titre, sizeof(titre), stdin);
    
    printf("l'autheur de livre / romon: ");
    fgets(autheur, sizeof(autheur), stdin);
    
    printf("le prix de livre / romon: ");
    scanf("%d", &prix);
    cleanInputBuffer();

    printf("la quantite de livre / romon: ");
    scanf("%d", &quantite);
    cleanInputBuffer();

    while(i < MAX_BOOKS_NUMBER && books[i].autheur[0] != '\0'){
        i++;
    }    
    
    if(i == 99){
        printf("Library est plein!!");
        return;
    }

    titre[strcspn(titre, "\n")] = '\0';
    autheur[strcspn(autheur, "\n")] = '\0';
    
    strcpy(books[i].titre, titre);
    strcpy(books[i].autheur, autheur);
    books[i].prix = prix;
    books[i].quantite = quantite;

    printf("Book have been Added\n");
    printf("\n");
    printf("\n");
}

void listBooks(){

    int i = 0;
    int count = 0;

    printf("\n");
    printf("\n");

    while(i < MAX_BOOKS_NUMBER && books[i].autheur[0] != '\0'){
        count++;
        printf("--------------------------------------\n");
        printf("le livre N'%d:\n", i + 1);
        printf("le titre de liver: %s\n", books[i].titre);
        printf("l'autheur de liver: %s\n", books[i].autheur);
        printf("le prix de liver: %d\n", books[i].prix);
        printf("la quantite de liver: %d\n", books[i].quantite);
        printf("--------------------------------------\n");
        printf("\n");
        i++;
    }
    if(count == 0){
        printf("Aucun livre disponible pour etre imprime.\n");
        return;
    }
    printf("Tous les livres disponibles ont ete imprimes!!!\n");
    printf("\n");
    printf("\n");
}

void searchForBook(){
 
    char titre[100];
    int i = 0;
    int count = 0;
    bool found = false;

    printf("\n");
    printf("\n");

    printf("Ecrivez le titre du livre que vous souhaitez trouver : ");
    fgets(titre, sizeof(titre), stdin);

    titre[strcspn(titre, "\n")] = '\0';

    while(i < MAX_BOOKS_NUMBER && books[i].autheur != '\0'){
        count++;
        if(stringCompare(books[i].titre, titre)){
            found = true;
            break;
        }
        i++;
    }

    if(!found && count == 0){
        printf("La bibliotheque est vide !!\n");
        return;
    }else if (!found){
        printf("le titre du livre n'a pas pu etre trouve.\n");
        return;
    }

    printf("--------------------------------------\n");
    printf("le livre N'%d:\n", i + 1);
    printf("le titre de liver: %s\n", books[i].titre);
    printf("l'autheur de liver: %s\n", books[i].autheur);
    printf("le prix de liver: %d\n", books[i].prix);
    printf("la quantite de liver: %d\n", books[i].quantite);
    printf("--------------------------------------\n");
    printf("\n");
    printf("\n");

}

void deleteBook(){
    char titre[100];
    int i = 0;
    int count = 0;
    bool found = false;

    printf("\n");
    printf("\n");
    
    printf("Ecrivez le titre du livre que vous souhaitez supprimer : ");
    fgets(titre, sizeof(titre), stdin);

    titre[strcspn(titre, "\n")] = '\0';

    while(i < MAX_BOOKS_NUMBER && books[i].autheur != '\0'){
        if(stringCompare(books[i].titre, titre)) {
            found = true;
            break;
        } 
        count++;
        i++;
    }
    
    if(!found && count == 0){
        printf("La bibliotheque est vide !!\n");
        return;
    }else if (!found){
        printf("le titre du livre n'a pas pu etre trouve.\n");
        return;
    }
    
    for(int j = i; j < MAX_BOOKS_NUMBER - 1; j++){
        books[j] = books[j + 1];
    }

    printf("le livre prevu a ete supprime!!\n");
    printf("\n");
    printf("\n");
}

void showTotalBooks(){
    int total = 0;
    int i = 0;
    int count = 0;

    while(i < MAX_BOOKS_NUMBER && books[i].autheur[0] != '\0'){
        total += books[i].quantite;
        count++;
        i++;
    }

    if(count == 0){
        printf("la bibliotheque est vide");
        return;
    }
    printf("\n");
    printf("\n");
    
    printf("La quantite de livres disponibles dans la bibliotheque est : %d", total);

}

void changeQuantity(){
    char titre[100];
    int i = 0, count = 0, newQuantity = 0;
    bool found = false;
    
    printf("\n");
    printf("\n");
    
    printf("Donnez le titre du livre que vous souhaitez modifier : ");
    fgets(titre, sizeof(titre), stdin);
    titre[strcspn(titre, "\n")] = '\0';

    while(i < MAX_BOOKS_NUMBER && books[i].autheur[0] != '\0'){
        count++;
        if(stringCompare(books[i].titre, titre)){
            found = true;
            break;
        }
        i++;
    }

    if(!found && count == 0){
        printf("La bibliotheque est vide !!\n");
        return;
    }else if (!found){
        printf("le titre du livre n'a pas pu etre trouve.\n");
        return;
    }
    printf("Quelle est la nouvelle quantite du livre selectionne : ");
    scanf("%d", &newQuantity);
    cleanInputBuffer();

    books[i].quantite = newQuantity;

    printf("La quantit a ete modifiee pour le livre intitule : %s", books[i].titre);
}

