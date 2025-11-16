/* 
Q2. Write a program to input 2 numbers and display their sum, difference, product, and quotient.

Sample Run:
---------------------------------
Hi! Let's do some basic math 😊
Enter your first number: 10
Enter your second number: 5

--- Results ---
➤ Sum: 15.00
➤ Difference: 5.00
➤ Product: 50.00
➤ Quotient: 2.00

Thanks for using this mini calculator! 🎉
---------------------------------
*/

#include <stdio.h>

int main() {
    float a, b;

    printf("Hi! Let's do some basic math 😊\n");
    printf("Enter your first number: ");
    scanf("%f", &a);

    printf("Enter your second number: ");
    scanf("%f", &b);

    printf("\n--- Results ---\n");
    printf("➤ Sum: %.2f\n", a + b);
    printf("➤ Difference: %.2f\n", a - b);
    printf("➤ Product: %.2f\n", a * b);

    if (b != 0) {
        printf("➤ Quotient: %.2f\n", a / b);
    } else {
        printf("➤ Quotient: Cannot divide by zero 😕\n");
    }

    printf("\nThanks for using this mini calculator! 🎉\n");

    return 0;
}
