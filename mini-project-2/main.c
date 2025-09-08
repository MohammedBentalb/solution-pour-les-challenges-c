#include "header.h"

struct Contact contactList[100] = {0};


int main(){

    int breakIt = false;
    int userChoice = 0, updateChoice = 0;
    
    do
    {
        printf("***************************************************\n");
        printf("*       Welcome to contact managment system       *\n");
        printf("***************************************************\n");
        printf("1.Add a contact to the system.                    *\n");
        printf("2.Update info of a contact in the system.         *\n");
        printf("3.Delete a contact from the system.               *\n");
        printf("4.List all contact in the system.                 *\n");
        printf("5.Search for a contact in the system.             *\n");
        printf("6.Exit the system.                                *\n");
        printf("***************************************************\n");

        scanf("%d", &userChoice);
        cleanInputBuffer();

        switch (userChoice)
            {
                case 1:
                    printf("---> Add a contact.\n");
                    addContact();
                    break;
                case 2:
                    printf("---> Update a contact.\n");

                    printf("what do you wanna update\n 1.Contact number\n 2.Email adress\n 3.All");
                    scanf("%d", &updateChoice);
                    cleanInputBuffer();
                    switch(updateChoice){
                        case 1:
                            UpdateContact(1);
                            break;
                        case 2:
                            UpdateContact(2);
                            break;
                        case 3:
                            UpdateContact(3);
                            break;
                        default:
                            printf("Invalid Data\n");
                            break;
                    }
                    break;
                case 3:
                    printf("---> Delete a contact.\n");
                    deleteContact();
                    break;
                case 4:
                    printf("---> List all contact.\n");
                    break;
                case 5:
                    printf("---> Search for a contact.\n");
                    break;
                case 6:
                    printf("---> Exit the system.\n");
                    breakIt = true;
                    break;
                
                default:
                    break;
            }


    } while (!breakIt);
    


    return 0;
}