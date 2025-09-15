#include <stdio.h>

int front = -1;
int rear = -1;
int queue[5];

int isFull() {
    return (rear + 1) % 5 == front;
}

int isEmpty() {
    return front == -1;
}

void enqueue(int a) {
    if(isFull()) {
        printf("\nQueue is full!");
        return;
    }
    if(isEmpty()) {
        front = 0;
        rear = 0;
        queue[rear] = a;
        printf("\nElement %d inserted to index %d", a, rear);
        return;
    }
    rear = (rear + 1) % 5;
    printf("\nElement %d inserted to index %d", a, rear);
    queue[rear] = a;
}

void dequeue() {
    if(front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % 5;
    }
}
void display() {
    int i = front;
    printf("\n");
    while(1) {
        printf("%d\t", queue[i]);
        if(i == rear) break;
        i = (i + 1) % 5;
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    // display();
    dequeue();
    dequeue();
    display();

    return 0;
}