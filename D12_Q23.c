// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main()
{
    int days;
    printf("Enter the number of days late: ") ;
    scanf("%d", &days);
    if (days <= 5)
    {
        printf("Fine ₹%d\n", days * 2);
    }
    else if (days <= 10)
    {
        printf("Fine ₹%d\n", days * 4);
    }
    else if (days <= 15)
    {
        printf("Fine ₹%d\n", days * 6);
    }
    else if (days <= 20)
    {
        printf("Fine ₹%d\n", days * 7);
    }
    else if (days <= 25)
    {
        printf("Fine ₹%d\n", days * 8);
    }
    else if (days <= 30)
    {
        printf("Membership Cancelled\n");
    }
    else
    {
        printf("Entry Restricted\n");
    }

    return 0;

}
