// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main()
{
    int num1, sum;
    printf("Enter a number: ") ;
    scanf("%d", &num1);

    sum = (num1 * (num1 + 1)) / 2;
    printf("Sum of first %d natural numbers = %d\n", num1, sum);
    return 0;

}
