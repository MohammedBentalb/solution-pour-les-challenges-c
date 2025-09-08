#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX_BOOKS_NUMBER 100

struct Book{
    char titre[100];
    char autheur[100];
    int prix;
    int quantite;
};

extern struct Book books[MAX_BOOKS_NUMBER];

void cleanInputBuffer();
bool stringCompare(char str1[], char str2[]);
void addBook();
void listBooks();
void searchForBook();
void deleteBook();
void showTotalBooks();
void changeQuantity();


#endif