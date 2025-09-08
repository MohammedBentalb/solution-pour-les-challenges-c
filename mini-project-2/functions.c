#include "header.h"



void cleanInputBuffer(){
    int c;
    while((c = getchar() != '\n') && c != EOF);
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

void addContact(){
 
    char contactName[MAX_CHARACTER], number[MAX_CONTACT_NUMBER], email[320];
    int i = 0;

    printf("Type in the name of the contact: ");
    fgets(contactName, sizeof(contactName), stdin);
    contactName[strcspn(contactName, "\n")] = '\0';
    
    printf("\n");
    
    printf("Type in the number of the contact: ");
    fgets(number, sizeof(number), stdin);
    number[strcspn(number, "\n")] = '\0';
    
    printf("\n"); 
    
    printf("Type in the email of the contact: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
    
    printf("\n");


    while(i < MAX_CONTACTS && contactList[i].contactName[0] != '\0'){
        i++;
    }
    
    strcpy(contactList[i].contactName, contactName);
    strcpy(contactList[i].number, number);
    strcpy(contactList[i].email, email);

    printf("Contact have been added.\n");
    printf("\n");
}

void updateContact(int choice){
    char email[MAX_EMAIL_CHARACTER], number[MAX_CONTACT_NUMBER], contactName[MAX_CHARACTER];
    int i = 0, count = 0;
    bool found = false;

    printf("Enter the contact name: ");
    fgets(contactName, sizeof(contactName), stdin);
    contactName[strcspn(contactName, "\n")] = '\0';


    while(i < MAX_CONTACTS && contactList[i].contactName[0] != '\0'){ 
        count++;
        if(stringCompare(contactList[i].contactName, contactName)){
            found = true;
            break;
        }
        i++;
    }

    if(!found && count == 0){
        printf("The contact list is empty!!");
        return;
    } else if(!found){
        printf("The intended contact has not been found!!");
        return;
    }

    
    switch (choice)
    {
        case 1:
            printf("Enter the new number: ");
            fgets(number, sizeof(number), stdin);
            number[strcspn(number, "\n")] = '\0';

            strcpy(contactList[i].number, number);
            break;
            
        case 2:
            printf("Enter the new email: ");
            fgets(email, sizeof(email), stdin);
            email[strcspn(email, "\n")] = '\0';

            strcpy(contactList[i].email, email);
            break;
            
        case 3:
            printf("Enter the new number: ");
            fgets(number, sizeof(number), stdin);
            number[strcspn(number, "\n")] = '\0';
            
            strcpy(contactList[i].number, number);
            
            printf("Enter the new email: ");
            fgets(email, sizeof(email), stdin);            
            email[strcspn(email, "\n")] = '\0';

            strcpy(contactList[i].email, email);
            break;
    
    default:
        break;
    }

    printf("the intended contact have been updated\n");
    printf("\n");
}

void deleteContact(){
    char contactName[MAX_CHARACTER];
    int i = 0, count = 0;
    bool found = false;

    printf("Enter the contact name: ");
    fgets(contactName, sizeof(contactName), stdin);
    contactName[strcspn(contactName, "\n")] = '\0';

    while(i < MAX_CONTACTS && contactList[i].contactName[0] != '\0'){ 
        count++;
        if(stringCompare(contactList[i].contactName, contactName)){
            found = true;
            break;
        }
        i++;
    }

    if(!found && count == 0){
        printf("The contact list is empty!!");
        return;
    } else if(!found){
        printf("The intended contact has not been found!!");
        return;
    }

    for(int j = i; i < MAX_CONTACTS - 1; j++){
        contactList[j] = contactList[j + 1];
    }

    printf("The itended contact have been deleted!!!\n");
    printf("\n");
}