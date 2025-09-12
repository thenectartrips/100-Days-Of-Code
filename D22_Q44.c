// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += (float)numerator / denominator;

        numerator += 2;
        if (i == 1)
            denominator += 3;
        else
            denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
