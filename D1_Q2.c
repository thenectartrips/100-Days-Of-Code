//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    
    printf("Enter first number: ") ;
    scanf("%d", &num1);

    printf("Enter second number: ") ;
    scanf("%d", &num2);

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        printf("Division by zero is not allowed!\n");
        quotient = 0; 
    }

    
    printf("\nResults:\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        printf("Quotient = %.2f\n", quotient);
    }

    return 0;
}


