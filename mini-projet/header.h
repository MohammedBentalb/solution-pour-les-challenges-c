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
    char isbn[20];
    int prix;
    int quantite;
};

extern struct Book books[MAX_BOOKS_NUMBER];

bool stringCompare(char str1[], char str2[]);
void cleanInputBuffer();
void addBook();
void listBooks();
void searchForBook();
void deleteBook();
void showTotalBooks();
void changeQuantity();
void sortingBooks(int choise, bool asce);
void searchByIsbn(char target[]);
void sortingBooks(int choice, bool asce);
int AvailableBooksNumber();
int binarySearch(char target[], int size);
int stringNumberCompare(char s1[], char s2[]);


#endif