#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[50];
    char author[50];
    int pages;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int count;
};

void addBook(struct Library *lib) {
    if(lib->count >= MAX_BOOKS) {
        printf("Sorry, the library is full.\n");
        return;
    }
    
    struct Book *book = &lib->books[lib->count];
    
    printf("Enter book title: ");
    scanf("%s", book->title);
    printf("Enter book author: ");
    scanf("%s", book->author);
    printf("Enter number of pages: ");
    scanf("%d", &book->pages);
    
    printf("Book added to the library.\n");
    
    lib->count++;
}

void displayBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
}

void displayAllBooks(struct Library lib) {
    if(lib.count == 0) {
        printf("The library is empty.\n");
        return;
    }
    
    int i;
    printf("All books in the library:\n");
    for(i = 0; i < lib.count; i++) {
        printf("Book %d:\n", i+1);
        displayBook(lib.books[i]);
    }
}

void listBooksByAuthor(struct Library lib) {
    char author[50];
    int i, count = 0;
    
    printf("Enter author name: ");
    scanf("%s", author);
    
    printf("Books by %s:\n", author);
    for(i = 0; i < lib.count; i++) {
        if(strcmp(lib.books[i].author, author) == 0) {
            displayBook(lib.books[i]);
            count++;
        }
    }
    
    if(count == 0) {
        printf("No books found for author %s.\n", author);
    }
}

void listBookCount(struct Library lib) {
    printf("There are %d books in the library.\n", lib.count);
}

int main() {
    struct Library lib = {"count = 0" };
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1. Add book details.\n");
        printf("2. Display book details.\n");
        printf("3. List all books of given author.\n");
        printf("4. List the count of books in the library.\n");
        printf("5. Exit.\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addBook(&lib);
                break;
            case 2:
                displayAllBooks(lib);
                break;
            case 3:
                listBooksByAuthor(lib);
                break;
            case 4:
                listBookCount(lib);
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
    
    return 0;
}

