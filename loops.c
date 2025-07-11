#include <stdio.h>
#include <math.h>

int main() {
    
    // BASICS

    // Q) Print numbers from 1 to 10 using a while loop.
    
    // int n = 1;

    // while(n <= 10) {
    //     printf("%d\n", n);
    //     n++;
    // }

    // Q) Print all even numbers between 1 and 100 using while.

    // int n = 1;

    // while(n <= 100) {
    //     n % 2 == 0 ? printf("%d\n", n) : printf("");
    //     n++;
    // }

    // Q) Take a number n from the user, and print its multiplication table using while.

    // int n, i = 1;

    // printf("Enter the number: ");
    // scanf("%d", &n);

    // while(i <= 10) {
    //     printf("%d x %d = %d\n", i, n, i * n);
    //     i++;
    // }

    // Q) Print the sum of first N natural numbers using a while loop.

    // int n, i = 1, sum = 0;

    // printf("Enter a positive number: ");
    // scanf("%d", &n);

    // while(i <= n) {
    //     sum += i;
    //     i++;
    // }

    // printf("Sum of %d natural numbers is: %d", n, sum);

    // Q) Reverse and print digits of a number using while loop.
        // Example: input 1234 → output: 4321

    // int n = 123456, rem;

    // while(n != 0) {
    //     rem = n % 10;
    //     printf("%d", rem);
    //     n  /= 10;
    // }

    // Q) Print the square of numbers from 1 to 10.

    // for(int i = 1; i <= 10; i++) {
    //     printf("%d\n", i * i);
    // }

    // Q) Print the factorial of a number using a for loop.

    // int n = 4, fact = 1;

    // for(int i = 1; i <= n; i++) {
    //     fact *= i;
    // }
    // printf("Factorial of %d is %d.", n, fact);

    // Q) Count the number of digits in a number.

    // int n = 1234, rem;

    // for(;n != 0;) {
    //     rem = n % 10;
    //     printf("%d", rem);
    //     n /= 10;
    // }

    // Q) Print the Fibonacci series up to N terms.

    // int n = 10, first = 0, second = 1 , next;

    // for(int i = 1; i <= n; i++) {
    //     printf("%d\n", first); 
    //     next = first + second;
    //     first = second;
    //     second = next;
    // }

    // Q) Write a program to check if a number is prime using a for loop.

    // int n = 17, isPrime;

    // if (n <= 1) {
    //     isPrime = 0;
    // }
    // else {
    //     for(int i = 2; i <= sqrt(n); i++) {
    //         if (n % i == 0) {
    //             isPrime = 0;
    //             break;
    //         }
    //     }
    // }

    // if (isPrime) {
    //     printf("Prime number");
    // }
    // else {
    //     printf("not a prime number");
    // }

    // Q) Print this pattern using nested for loops:
        // * * * * *
        // * * * * *
        // * * * * *
    
    // for(int i = 1; i <= 3; i++) {
    //     for(int j = 1; j <= 5; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // Q) Print a right-angled triangle:
        // *
        // * *
        // * * *
        // * * * *
    
    for(int i = 1; i <= 4; i++) {
        for(int j = i; j <= i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}