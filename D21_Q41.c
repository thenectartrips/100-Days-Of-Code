// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main()
{
    int num, temp, first, last, pow = 1;

    printf("Enter a number: ") ;
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    // find first digit and its place value
    while (temp >= 10)
    {
        temp /= 10;
        pow *= 10;
    }
    first = temp;

    if (num < 10)
    {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // remove first and last digit, then rebuild number
    int swapped = last * pow + (num % pow) / 10 * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}

