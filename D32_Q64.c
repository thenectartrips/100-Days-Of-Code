// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    long long num ;
    int count[10] = {0};
    int digit, maxDigit, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (digit = 0; digit < 10; digit++)
    {
        if (count[digit] > maxCount)
        {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }

    printf("The digit that occurs most times is %d (occurs %d times).\n", maxDigit, maxCount);

    return 0;
}

