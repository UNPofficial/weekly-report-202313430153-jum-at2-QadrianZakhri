#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan data buku
typedef struct Book {
    char title[100];
    char author[100];
    int year;
} Book;

// Struktur untuk simpul Double Linked List
typedef struct Node {
    Book book;
    struct Node* prev;
    struct Node* next;
} Node;

// Fungsi untuk membuat simpul baru
Node* createNode(char* title, char* author, int year) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->book.title, title);
    strcpy(newNode->book.author, author);
    newNode->book.year = year;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan simpul baru ke dalam Double Linked List
void addNode(Node** head, char* title, char* author, int year) {
    Node* newNode = createNode(title, author, year);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Fungsi untuk menghapus simpul dari Double Linked List berdasarkan judul buku
void removeNode(Node** head, char* title) {
    Node* temp = *head;
    while (temp != NULL && strcmp(temp->book.title, title) != 0) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Book not found.\n");
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Fungsi untuk mencetak daftar buku dalam Double Linked List
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("Title: %s, Author: %s, Year: %d\n", temp->book.title, temp->book.author, temp->book.year);
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;

    addNode(&head, "The Great Gatsby", "F. Scott Fitzgerald", 1925);
    addNode(&head, "To Kill a Mockingbird", "Harper Lee", 1960);
    addNode(&head, "1984", "George Orwell", 1949);

    printf("Books in the library:\n");
    printList(head);

    printf("\nRemoving '1984'...\n");
    removeNode(&head, "1984");

    printf("Books in the library after removal:\n");
    printList(head);

    // Free memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
