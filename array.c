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

    int a[10] = {1, 2, 3, 4, 8, 3, 11};
    int max, min;

    for(int i = 0; i < (sizeof(a)/sizeof(a[0])) - 1; i++) {
        if(a[i + 1] > a[i]) {
            max = a[i + 1];
        }
        else if(a[i + 1] > a[i]) {
            min = a[i + 1];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d", min);

    return 0;
}