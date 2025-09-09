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
    char isbn[20];
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
    
    printf("l'ISBN de livre / romon: ");
    fgets(isbn, sizeof(isbn), stdin);
    
    while(i < MAX_BOOKS_NUMBER && books[i].autheur[0] != '\0'){
        i++;
    }    
    
    if(i == 99){
        printf("Library est plein!!");
        return;
    }

    titre[strcspn(titre, "\n")] = '\0';
    autheur[strcspn(autheur, "\n")] = '\0';
    isbn[strcspn(isbn, "\n")] = '\0';
    
    strcpy(books[i].titre, titre);
    strcpy(books[i].autheur, autheur);
    strcpy(books[i].isbn, isbn);
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
        printf("la ISBN de liver: %s\n", books[i].isbn);
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
    printf("la ISBN de liver: %s\n", books[i].isbn);
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

int stringNumberCompare(char s1[], char s2[]){
    int i = 0;

    while(s1[i] != '\0' && s2[0] != '\0'){
        if(tolower(s1[i]) < tolower(s2[i])) return -1;
        if(tolower(s1[i]) > tolower(s2[i])) return 1;

        i++;
    }

    return s1[i] - s2[i];
}

void sortingBooks(int choice, bool asce){
    int minIndex = 0;
    int size = AvailableBooksBumber();

        for(int i = 0; i < size - 1; i++){
            minIndex = i;
            for(int j = i + 1; j < size; j++){
                int cmp = 0;
                if(choice == 1){
                    cmp =  stringNumberCompare(books[minIndex].titre, books[j].titre); 
                } else if(choice == 2) {
                    cmp = books[minIndex].quantite > books[j].quantite ? 1 : -1;
                } else {
                    cmp =  stringNumberCompare(books[minIndex].isbn, books[j].isbn); 
                }
                if(asce && cmp > 0 || !asce && cmp < 0){
                    minIndex = j;
                }
            }

            if(minIndex != i){
                    struct  Book temp = books[i];
                    books[i] = books[minIndex];
                    books[minIndex] = temp;   
            }
        }
    
}

int AvailableBooksNumber(){
    int count = 0;

    while(count < MAX_BOOKS_NUMBER && books[count].titre[0] != '\0') {
        count ++;
    }

    return count;
} 

int binarySearch(char target[], int size){
        int i = 0, left = 0, right = size - 1, mid = 0, cmp = 0;

        while (i < size && books[i].isbn[0] != '\0'){
            mid = (left + right) / 2;
            
            cmp = stringNumberCompare(books[mid].isbn, target);
            if(cmp == 0){
                return mid;
            } else if (cmp < 0){
                left = mid + 1;
            } else if(cmp > 0) {
                right = mid - 1;
            }
            i++;
        }
        
        return -1;
    }


void searchByIsbn(char target[]){

    sortingBooks(3, true);
    int size = AvailableBooksNumber();
    int indexFound = binarySearch(target, size);

    if(indexFound < 0){
        printf("The indended book has not been found.\n");
        printf("\n");
        printf("\n");
        return;
    }
    
    printf("----------------------------------------------");
    printf("le livre N'%d:\n", indexFound + 1);
    printf("le titre de liver: %s\n", books[indexFound].titre);
    printf("l'autheur de liver: %s\n", books[indexFound].autheur);
    printf("le prix de liver: %d\n", books[indexFound].prix);
    printf("la quantite de liver: %d\n", books[indexFound].quantite);
    printf("la ISBN de liver: %s\n", books[indexFound].isbn);
    printf("----------------------------------------------");
    printf("\n");
    printf("\n");
    
}