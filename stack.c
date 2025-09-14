#include <stdio.h>
#include <string.h>

int size = 50, top = -1;
char stack[50];

int isEmpty() {
    return top == -1;
}

void push(char a) {
    if(top == size - 1) {
        printf("Stack Overflow!");
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
    if(isEmpty()){
        return '\0';
    }
    else {
        return stack[top--];
    }
}


int main() {

    char string[50];
    int flag = 1;
    char a;

    printf("Enter the string to check if it has balanced parenthesis or not: ");
    fgets(string, sizeof(string), stdin);

    // for(int i = 0; i < sizeof(string) / sizeof(string[0]); i++) {
    //     if(string[i] == '(' || string[i] == '{' || string[i] == '[') {
    //         push(string[i]);
    //     }
    // }
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] == '(' || string[i] == '{' || string[i] == '[') {
            push(string[i]);
        }
        if (string[i] == ')' || string[i] == '}' || string[i] == ']') {
            a = pop();
            
            if( a != '(' && string[i] == ')' 
             || a != '{' && string[i] == '}'
             || a != '[' && string[i] == ']'
            ) {
                flag = 0;
                break;
            }
            else {
                flag = 1;
            }
        }
    }
    if(!isEmpty())
        flag = 0;

    if(flag == 0) {
        printf("Unblanced!");
    }
    else {
        printf("Balanced!");
    }

    

    return 0;
}