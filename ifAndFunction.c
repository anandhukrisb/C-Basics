/*

First uncomment all the user defined functions and 
then uncomment the function evoking one by one.!!

*/




#include <stdio.h>

// void greet() {
//     printf("Welcome to C programming!");
// }

// void printTable() {
//     for(int i = 1; i <= 10; i++) {
//         printf("%d x 5 = %d\n", i, i * 5);
//     }
// }

// void displayName() {
//     printf("My name is Anandhu\n");
// }

// void displayAge() {
//     printf("Im 21 years old\n");
// }

// void displayCollege() {
//     printf("My college is Rajagiri College of Social Sciences\n");
// }

// void printSquare(int n) {
//     printf("Square of %d is %d", n, n * n);
// }

// void calculateArea(float r) {
//     const float PI = 3.14;
//     printf("Area of circle with radius %.3f is %.3f", r, PI * r * r);
// }

// void checkEvenOdd(int number) {
//     number % 2 == 0 ? printf("Even number") : printf("Odd number");
// }

// float getPi() {
//     return 3.14;
// }

// int add(int a, int b) {
//     return a + b;
// }

// float average(float a, float b) {
//     return (a + b) / 2;
// }

// int max(int a, int b) {
//     if(a > b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }

// int isVowel(int ch) {
//     switch (ch) {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         return 1;
//         break;
//     default:
//         return 0;
//         break;
//     }
// }

// int isLeapYear(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int checkEligibility(int age, char gender) {

//     if (age >= 18 && ( gender == 'M' || gender == 'F')) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int isDivisible(int num) {

//     if(num % 3 == 0 && num % 5 == 0) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// char getGradeFromMarks(int marks) {
    
//     if (marks >= 90) {
//         return 'A';
//     }
//     else if ( marks >= 75) {
//         return 'B';
//     }
//     else if (marks >= 50) {
//         return 'C';
//     }
//     else {
//         return 'F';
//     }
// }

// int calculator(int a, int b, char op) {

//     switch (op) {
//         case '+':
//             return a + b;
//             break;
//         case '-':
//             return a - b;
//             break;
//         case '*':
//             return a * b;
//             break;
//         case '/':
//             if (b == 0) {
//                 printf("You cannot divide a number by zero!!");
//                 return 0;
//             }
//             else {
//                 return a / b;
//             }
//             break;
//         default:
//             printf("Enter a valid choice!");
//             break;
//     }
// }

// int getCategory(int age) {
//     if (age >= 0 && age <=12) {
//         printf("You are a child!");
//     }
//     else if (age >= 13 && age <=19) {
//         printf("You are a teen!");
//     }
//     else if (age >= 20 && age <=59) {
//         printf("You are an adult!");
//     }
//     else {
//         printf("You are a senior!");
//     }
// }

int main() {

    // BASICS

    // Q) Write a function void greet() that prints “Welcome to C programming!”
    
    //  greet();

    // Q) Create a function void printTable() that prints the multiplication table of 5.

    // printTable();

    // Q) Write a main() function that calls 3 different void functions to print your name, age, and college.

    // displayName();
    // displayAge();
    // displayCollege();

    // Level 2

    // Q) Create a function void printSquare(int n) that prints the square of the given number.

    // int n = 3;

    // printSquare(n);

    // Q) Write a function void calculateArea(float radius) that prints area of a circle.

    // float radius = 2;

    // calculateArea(radius);

    // Q) Create a void checkEvenOdd(int number) function that prints whether the number is even or odd (use if inside function).

    // int number = 3;

    // checkEvenOdd(number);

    // Q) Write a function float getPi() that returns the value of pi (3.1416). Use it to calculate area in main.

    // float pi = getPi();
    // int radius = 2;

    // printf("Area: %f", pi * radius * radius);

    // Q) Create int add(int a, int b) and return the sum.

    // printf("%d",add(3,3));

    // Q) Create float average(float a, float b) and return average of two numbers.

    // printf("%.3f",average(3.2, 1.8));

    // Q) Write a function int max(int x, int y) that returns the bigger number (use if).

    // printf("Max: %d", max(8,6));

    // Q) Write a function int isVowel(char ch) that returns 1 if vowel, 0 otherwise.

    // printf("%d", isVowel('r'));

    // Q) Create a function int isLeapYear(int year) that returns 1 if it is a leap year, 0 otherwise (use logical operators).

    // printf("%d", isLeapYear(2001));

    // Q) int checkEligibility(int age, char gender) – returns 1 if:

        // age >= 18

        // and (gender is ‘M’ or ‘F’)

    // printf("%d",checkEligibility(18, 'M'));

    // Q) int isDivisible(int num) – return 1 if divisible by 3 and 5.

    // printf("%d",isDivisible(45));

    // Q) char getGradeFromMarks(int marks) – return 'A', 'B', 'C', or 'F' based on:

        // 90 = A

        // 75 = B

        // 50 = C

        // else F
        // (use nested if or switch)

    // printf("%c",getGradeFromMarks(92));

    // Q) Write void calculator(int a, int b, char op) to perform +, -, *, / using switch.

    // int a, b, op;
    // printf("Enter the first number: ");
    // scanf("%d", &a);

    // printf("Enter the second number: ");
    // scanf("%d", &b);

    // printf("Enter the operation to do: ");
    // scanf(" %c", &op);

    // printf("\n%d", calculator(a, b, op));

    // Q) int getCategory(int age) – returns:

        // 1: Child (0–12)

        // 2: Teen (13–19)

        // 3: Adult (20–59)

        // 4: Senior (60+)

    // int age = 60;
    // getCategory(age);

    return 0;
}