#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

node *head = NULL;

void insert(int a) {
    node *t;

    if(head == NULL) {
        head = (node *) malloc(sizeof(node));
        head -> data = a;
        head -> next = NULL;
    }
    else {
        t = head;
        while(t -> next != NULL) {
            t = t -> next;
        }

        t -> next = (node *) malloc(sizeof(node));
        t -> next -> data = a;
        t -> next -> next = NULL;
    }
}

int display() {
    node *t;

    for(t = head; t != NULL; t = t -> next) {
        printf("%d\t", t -> data);
    }
}

int delete(int a) {
    node *t;

    if(head == NULL) {
        printf("\nEmpty linked list!");
    }
    else if(head -> data == a) {
        head = head -> next;
    }
    else {
        t = head;
        while(t -> next != NULL && t -> next -> data != a) {
            t = t -> next;
        }
        if(t -> next == NULL) {
            printf("\nElement not found!");
        }
        else {
            t -> next = t -> next -> next;
        }
    }
}

int main() {

    insert(10);    
    insert(20);    
    insert(30);
    display();    
    delete(20);
    printf("\n");
    display();

    return 0;
}