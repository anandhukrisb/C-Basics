#include <stdio.h>
#include <malloc.h>

// void swap(int *a, int *b) {
//     int temp;

//     temp = *a;
//     *a =  *b;
//     *b = temp;

// }

// void incrementAll(int *p, int size) {
//     for(int i = 0; i < size; i++) {
//         p[i] += 1;
//         printf("%d", p[i]);
//     }
// }

// void reverse(int *a, int n) {
//     for(int i = n - 1; i >= 0; i--) {
//         printf("%d", *(a + i));
//     }
// }

int main() {

    // BASICS
    
    // Q) Declare an int variable and a pointer to it. Print:

        // the variable value

        // its address

        // value using the pointer
        // (Hint: Use & and * operators)
    
    // int age = 21;
    // int *pAge = NULL;

    // pAge = &age;

    // printf("Value: %d\n", age);
    // printf("Value: %p\n", &age);
    // printf("Value: %d\n", *pAge);

    // Basic Pointer Declaration and Access
    //   Task:
    //         Declare an int variable x and assign it a value (e.g., 10).

    // int x = 10;

    //         Declare a pointer p to int and assign it the address of x.

    // int *p = &x;

    //         Print the value of x using the pointer p.

    // printf("%d", *p);

    //         Also print the address stored in p.

    // printf("%p", p);


    //  Swap Two Numbers Using Pointers

    // int a, b;

    // a = 10;
    // b = 20;

    // printf("a = %d\nb = %d\n", a, b);
    
    // swap(&a, &b);
    
    // printf("After swapping: \n");
    // printf("a = %d\nb = %d", a, b);

    // int arr[] = {1, 2, 3};

    // incrementAll(arr, 3);

    // int n;

    // printf("\nEnter the number of elements: ");
    // scanf("%d", &n);

    // int arr[n];

    // printf("\nEnter %d elements: ", n);
    // for(int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // reverse(arr, n);

    // Write a C program that:

    //     Declares an int variable (say a = 10).

    //     Declares a pointer to that variable.

    //     Prints the value of a two ways:

    //     Directly with a.

    //     Indirectly with the pointer (using *p).

    // int a = 10;
    // int *p = &a;

    // printf("%d\n", a);
    // printf("%d", *p);

    // int a = 25;
    // int *p = &a;

    // printf("%p\n", &a);
    // printf("%p\n", p);
    // printf("%d", *p);

    // int a = 5;
    // int *p = &a;
    
    // printf("%d\n", a);

    // *p = 20;
    // printf("%d", a);

    // int *p = (int *) malloc(3 * sizeof(int));


    // p[0] = 10;

    // printf("%d", p[0]);

    return 0;
}

// #include <stdio.h>

// void changeValue(int *p) {
//     *p = *p + 10;
// }

// int main() {
//     int x = 5;

//     // Try changing this call:
//     // changeValue(&x); // Option 1
//     // changeValue(x); // Option 2

//     printf("%d\n", x);
//     return 0;
// }

