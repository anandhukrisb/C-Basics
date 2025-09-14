#include <stdio.h>

int size = 5;
int front = -1, rear = -1;
int queue[5];

int isFull() {
    return rear == size - 1;
}

int isEmpty() {
    return (front == -1 || front > rear);
}

void enqueue(int a) {
    if(isFull()) {
        printf("\nQueue is Full!");
    }
    else if(front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = a;
    }
    else {
        queue[++rear] = a;
    }
}

void dequeue() {
    if(isEmpty()) {
        printf("\nQueue is Empty!");
    }
    else {
        front++;
    }
}

void display() {
    printf("\n");
    for(int i = front; i <= rear; i++) {
        printf("%d\t", queue[i]);
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();

    return 0;
}