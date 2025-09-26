// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main()
{
    int a[3][3], rowSum[3];

    printf("Enter 9 elements for 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    // Print row sums
    printf("\nRow sums are:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
