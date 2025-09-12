// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int num, originalNum, temp, digit, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
