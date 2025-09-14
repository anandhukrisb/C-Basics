#include <stdio.h>

int top = -1;
char stack[50];
char result[50];

int isEmpty() {
    return top = -1;
}

int isFull() {
    return top = 49;
}

void push(char a) {
    if(isFull()) {
        printf("\nStack Overflow!");
    }
    else {
        top++;
    }
}

char pop() {
    if(isEmpty()) {
        printf("\nStack Underflow!");
    }
    else {
        return stack[top--];
    }
}

int main() {

    

    return 0;
}