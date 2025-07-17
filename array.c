#include <stdio.h>

int main() {

    // BASICS

    // Q) Declare an array of 5 integers and print all the elements.

    // int a[5];

    // for(int i = 1; i <= 5; i++) {
    //     a[i - 1] = i;
    // }

    // for(int i = 0; i < 5; i++) {
    //     printf("%d\n", a[i]);
    // }

    // Q) Read 10 integers from the user and print them in reverse order.

    // int a[10];

    // printf("Enter 10 numbers: \n");
    // for(int i = 0; i < 10; i++) {
    //     scanf("%d", &a[i]);
    // }

    // for(int j = 9; j >= 0; j--) {
    //     printf("%d ", a[j]);
    // }

    // Q) Find the sum of elements in a 1D array.

    // int a[5] = {1, 2, 3, 4};
    // int sum = 0;

    // for(int i = 0; i < 5; i++) {
    //     sum += a[i];
    // }

    // printf("Sum: %d", sum);

    // Q) Count how many positive, negative, and zero values are in an array.

    // int a[] = {1, -2, 0, 4, -5, 0, 0};
    // int positive = 0, negative = 0, zero = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if(a[i] > 0) {
    //         positive++;
    //     }
    //     else if(a[i] < 0) {
    //         negative++;
    //     }
    //     else {
    //         zero++;
    //     }
    // }

    // printf("Positive numbers: %d\n", positive);
    // printf("Negative numbers: %d\n", negative);
    // printf("Zeroes: %d\n", zero);

    // Q) Find the maximum and minimum element in an array.

    // int a[10] = {1, 2, 3, 4, 8, 3, 11};
    // int max, min;

    // for(int i = 0; i < (sizeof(a)/sizeof(a[0])) - 1; i++) {
    //     if(a[i + 1] > a[i]) {
    //         max = a[i + 1];
    //     }
    //     else if(a[i + 1] > a[i]) {
    //         min = a[i + 1];
    //     }
    // }

    // printf("Max: %d\n", max);
    // printf("Min: %d", min);

    // INTERMEDIATE

    // Q) Check if a given number is present in the array (linear search).

    // int a[5] = {1, 3, 4, 2, 5};
    // int element = 5, isFound = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if(element == a[i]) {
    //         isFound = 1;
    //         break;
    //     }
    // }

    // if(isFound) {
    //     printf("Element found!\n");
    // }
    // else {
    //     printf("Element not found!\n");
    // }

    // Q) Count how many times a particular number appears in the array.

    // int a[7] = {1, 3, 1, 3, 1, 1, 1};
    // int element = 1, count = 0;

    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     if (element == a[i]) {
    //         count++;
    //     }
    // }

    // printf("Element %d found %d times in the array.", element, count);

    // Q) Find the second largest element in an array.

    // int a[7] = {7, 6, 5, 4, 3, 2, 1};
    // int temp;

    // for(int i = 0; i < (sizeof(a)/sizeof(a[0])) - 1; i++) {
    //     for(int j = 0; j < (sizeof(a)/sizeof(a[0])) - i - 1; j++) {
    //         if(a[j + 1] < a[j]) {
    //             temp = a[j + 1];
    //             a[j + 1] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    //     printf("%d\n", a[i]);
    // }
    
    // printf("Second largest element is: %d", a[(sizeof(a)/sizeof(a[0])) - 2]);

    return 0;
}