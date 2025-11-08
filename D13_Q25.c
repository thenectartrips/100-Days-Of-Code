// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main()
{
    float num1, num2 ;
    char operator;
    printf("Enter two numbers = ") ;
    scanf("%f %f", &num1, &num2) ;

    printf("Enter the operation you want to perform (+, -, *, /, %) = ") ;
    scanf(" %c", &operator) ;

    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2) ;
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2) ;
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2) ;
        break;
    case '/':
        if (num2 != 0)
            printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2) ;
        else
            printf("Error: Division by zero is not allowed.") ;
        break;
    case '%':
        if ((int)num2 != 0)
            printf("%d %% %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
        else
            printf("Error: Modulus by zero is not allowed.");
        break;
    default:
        printf("Error: Invalid operator.");
    }
    return 0;
}










