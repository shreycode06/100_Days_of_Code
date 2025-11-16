/* 
Q1. Write a program to input two numbers and display their sum.

Sample Run:
---------------------------------
Enter first number: 7
Enter second number: 12

-> Sum = 19.00

---------------------------------
*/

#include <stdio.h>

int main() {
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n-> Sum = %.2f\n", a + b);

    return 0;
}

