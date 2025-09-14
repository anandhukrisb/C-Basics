#include <stdio.h>
#include <malloc.h>
#include <string.h>

int size = 50;
int top = -1;
char stack[50];

int isFull() {
    return top == size - 1;
}

int isEmpty() {
    return top == -1;
}

void push(char a) {

    if(isFull()) {
        printf("\nThe Stack is full!");
    }
    else if(top == -1) {
        top = 0;
        stack[top] = a;
    }
    else {
        stack[++top] = a;
    }
}

char pop() {
    if(isEmpty()) {
        printf("\nThe Stack is Empty!");
    }
    else {
        return stack[top--];
    }
}

void peek() {
    if(isEmpty()) {
        printf("\nThe stack is empty!");
        return;
    }

    printf("\nThe top most element is %c", stack[top]);
}

void display() {
    for(int i = 0; i < top + 1; i++) {
        printf("\n%c\t", stack[i]);
    }
}

int menu() {
    
    int choice;

    printf("\n1) Push\n2) Pop\n3) Peek\n4) Display\n5) Exit\nEnter your choice: ");
    scanf("%d", &choice);

    return choice; 
}

void processStack() {

    int a;
    int ch;

    for(ch = menu(); ch != 5; ch = menu()) {
        switch(ch) {
            case 1:
                printf("\nEnter the Element to push: ");
                scanf("%d", &a);
                push(a);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Please enter a valid number");
                break;
        }
    }
}

int main() {

    
    // processStack();

    char string[50];
    printf("Enter your name: ");
    fgets(string, sizeof(string), stdin);

    string[strlen(string) - 1] = '\0';

    for(int i = 0; i < strlen(string); i++) 
        push(string[i]);

    printf("\n");

    printf("Your password: ");
    for(int i = 0; i < strlen(string); i++)
        printf("%c", pop());

    return 0;
}