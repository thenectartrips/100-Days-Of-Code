// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of square matrix: ") ;
    scanf("%d", &n) ;

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix:\n");

    for (int k = 0; k < n; k++)
    {
        int i = 0, j = k;
        while (i < n && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for (int k = 1; k < n; k++)
    {
        int i = k, j = n - 1;
        while (i < n && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}


