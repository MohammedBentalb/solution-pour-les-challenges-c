#include "header.h"


int main (){
    bool breakIt = false;
    int choix = 0, searchChoice = 0, sortChoice = 0, asceChoice = 0;
    char isbn[20] = {0};
    
    do {
        printf("\n");
        printf("\n");
        printf("******************************************************************\n");
        printf("*                 Welcome to mohammed's library                  *\n");
        printf("*----------------------------------------------------------------*\n");
        printf("*                 1.Ajouter un livre.                            *\n");
        printf("*                 2.Listez tous les livres disponibles.          *\n");
        printf("*                 3.Rechercher un livre par son nom.             *\n");
        printf("*                 4.Mettre a jour la quantite d'un livre.        *\n");
        printf("*                 5.Supprimer un livre.                          *\n");
        printf("*                 6.Afficher le nombre total de livres.          *\n");
        printf("*                 7.Sortie the program.                          *\n");
        printf("******************************************************************\n");

        scanf("%d", &choix);
        cleanInputBuffer();
        
        switch (choix)
            {
            case 1:
                printf("-->Ajouter un livre.\n");
                addBook();
                break;
            case 2:
                printf("-->Listez tous les livres disponibles.\n");
                printf("   1.Sort By title.\n   2.Sort by quantity.\n   3.Sort By ISBN.\n");
                scanf("%d", &sortChoice);
                cleanInputBuffer();

                printf("      1.ascending.\n      2.descending.\n");
                scanf("%d", &asceChoice);
                cleanInputBuffer();
                
                sortingBooks(sortChoice, asceChoice == 1);
                listBooks();
                break;
            case 3:
                printf("-->Chercher un livre.\n");
                printf("   1.Chercher par son nom.\n   2.Chercher par son ISBN.\n");
                scanf("%d", &searchChoice);
                cleanInputBuffer();

                switch(searchChoice){
                    case 1:
                        searchForBook();
                    break;
                    case 2:
                        printf("   Write the book's ISBN: \n");
                        fgets(isbn, sizeof(isbn), stdin);
                        isbn[strcspn(isbn, "\n")] = '\0';
                        
                        searchByIsbn(isbn);
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                printf("-->Mettre à jour la quantite d'un livre.\n");
                changeQuantity();
                break;
            case 5:
                printf("-->Supprimer un livre.\n");
                deleteBook();
                break;
            case 6:
                printf("-->Afficher le nombre total de livres.\n");
                showTotalBooks();
                break;
            case 7:
                printf("-->Sortie.\n");
                breakIt = true;
                break;
                
            default:
                printf("Input Invalide.\n");
                break;
            }
    } while (!breakIt);

    return 0;
}

