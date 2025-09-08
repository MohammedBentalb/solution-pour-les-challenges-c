#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100
#define MAX_CHARACTER 100 
#define MAX_EMAIL_CHARACTER 321
#define MAX_CONTACT_NUMBER 11 


struct Contact {
    char contactName[MAX_CHARACTER];
    char number[MAX_CONTACT_NUMBER];
    char email[MAX_EMAIL_CHARACTER];
};

extern struct Contact contactList[MAX_CONTACTS];

void cleanInputBuffer();
bool stringCompare(char str1[], char str2[]);
void addContact();
void updateContact(int choice);
void deleteContact();



#endif