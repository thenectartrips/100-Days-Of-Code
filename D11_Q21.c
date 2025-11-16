// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number (1-12): ") ;
    scanf("%d", &month) ;
    switch (month)
    {
    case 1:
        printf("January with 31 days\n") ;
        break;
    case 2:
        printf("February with 28 days\n") ;
        break;
    case 3:
        printf("March with 31 days\n") ;
        break ;
    case 4:
        printf("April with 30 days\n") ;
        break;
    case 5:
        printf("May with 31 days\n") ;
        break;
    case 6:
        printf("June with 30 days\n") ;
        break;
    case 7:
        printf("July with 31 days\n") ;
        break;
    case 8:
        printf("August with 31 days\n");
        break;
    case 9:
        printf("September with 30 days\n");
        break;
    case 10:
        printf("October with 31 days\n");
        break;
    case 11:
        printf("November with 30 days\n");
        break;
    case 12:
        printf("December with 31 days\n");
        break;
    default:
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }
    return 0;
}










