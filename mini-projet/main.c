#include "header.h"


int main (){
    bool breakIt = false;
    int choix = 0;
    
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
                printf("Ajouter un livre.\n");
                addBook();
                break;
            case 2:
                printf("Listez tous les livres disponibles.\n");
                listBooks();
                break;
            case 3:
                printf("Rechercher un livre par son nom.\n");
                searchForBook();
                break;
            case 4:
                printf("Mettre à jour la quantite d'un livre.\n");
                changeQuantity();
                break;
            case 5:
                printf("Supprimer un livre.\n");
                deleteBook();
                break;
            case 6:
                printf("Afficher le nombre total de livres.\n");
                showTotalBooks();
                break;
            case 7:
                printf("Sortie.\n");
                breakIt = true;
                break;
                
            default:
                printf("Input Invalide.\n");
                break;
            }
    } while (!breakIt);

    return 0;
}

