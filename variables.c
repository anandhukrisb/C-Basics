#include <stdio.h>

// int globalv = 6;
// #define B 20

int main() {

    // BASICS

    // Q) Declare and print an integer, float, and character variable.

    // int num = 3;
    // double num2 = 2.34444444444333333333;
    // char ch = 'A';

    // printf("%d\n", num);
    // printf("%.15lf\n", num2);
    // printf("%c\n", ch);

    // Q) Take input of age (int), height (float), and initial (char) from the user and print them.

    // int age;
    // float height;
    // char initial;

    // printf("Enter your age: ");
    // scanf("%d", &age);

    // printf("Enter your height: ");
    // scanf("%f", &height);
    
    // printf("Enter your initial: ");
    // scanf(" %c", &initial);

    // printf("Age: %d\n", age);
    // printf("Height: %lf\n", height);
    // printf("Initial: %c\n", initial);

    // Q) Declare two integers, assign values, swap them using a temporary variable.

    // int a = 10;
    // int b = 20;
    // int temp;

    // temp = b;
    // b = a;
    // a = temp;

    // printf("a: %d\n", a);
    // printf("b: %d", b);

    // Q) Write a program to calculate and display the area of a rectangle using length and width variables.

    // int l = 3;
    // int b = 4;
    // int area;

    // area = l * b;

    // printf("Area: %d", area);

    // Q) Write a program to demonstrate multiple variable declarations in one line.

    // int a, b, c = 2;

    // a = b = 5;

    // printf("Sum: %d", a + b + c);

    // Intermediate

    // Q) Write a program to take two float numbers and print:
        // Sum
        // Difference
        // Product
        // Quotient

    // float a, b, c;

    // printf("Enter two numbers: ");
    // scanf("%f%f", &a, &b);

    // printf("Sum: %f\n", a + b);
    // printf("Difference: %f\n", a - b);
    // printf("Product: %f\n", a * b);
    // printf("Quotient: %f\n", a / b);

    // Q) Demonstrate variable re-declaration error by trying to declare a variable twice in the same scope.

    // int a;
    // int a;

    // a = 2;

    // printf("A: %d", a);

    // Q) Convert temperature from Fahrenheit to Celsius using a formula and variables.

    // float f = 64, c;

    // c = (5.0 / 9.0) * (f - 32);

    // printf("Temperature in celsius: %.2f", c);

    // Q) Declare const float PI = 3.14; and use it to calculate the area of a circle. Try changing the value and observe the error.

    // const float PI = 3.14;

    // int radius = 2;

    // printf("Area of circle: %f", PI * radius * radius);

    // ADVANCED

    // Q) Write a program showing difference between local and global variables.

    // int local = 2;

    // printf("%d\n", globalv);

    // Q) Create a program using implicit and explicit type conversion (int to float, and vice versa).

    // Implicit type conversion

    // int i = 10;
    // float f = i;

    // printf("%f", f);

    // Explicit conversion

    // int i = 10;
    
    // printf("%f", (float)i);

    // Q) Take a double number and assign it to an int. Show the data loss.

    // double data = 10.2354643;
    // int d = data;

    // printf("%d", d);

    // Q) Declare a constant integer using #define and one using const. Try modifying both.

    // const int a = 10;

    // B = 10;
    // printf("%d", a);

    // EXPERT

    // Q)  Write a program to swap 3 variables (A → B → C → A) without using extra variables.

    // int a = 40, b = 50, c = 60;

    // a = a + b + c;
    // b = a - b - c;
    // c = a - b - c;
    // a = a - b - c;
    
    // printf("A: %d\n", a);
    // printf("B: %d\n", b);
    // printf("C: %d\n", c);

    // Q) Without using %, determine if a number is even or odd (use bitwise operator).

    int n = 2;

    if (n & 1) {
        printf("%d is odd", n);
    }
    else {
        printf("%d is even", n);
    }


    return 0;
}