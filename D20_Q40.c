// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main()
{
    long long num, result = 0, place = 1; 
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit == 0)
            result += 1 * place;
        else if (digit == 1)
            result += 0 * place;
        else
        {
            printf("Invalid binary digit found!\n");
            return 1;
        }
        num /= 10;
        place *= 10;
    }

    printf("1's complement: %lld\n", result);
    return 0;
}
