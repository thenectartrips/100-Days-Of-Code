// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter The Length = ");
    scanf("%d", &length);

    printf("Enter The Breadth = ");
    scanf("%d", &breadth);

    printf("The Area of the Rectangle is = %d\n", length * breadth);
    printf("The Perimeter of the Rectangle is = %d", 2 * (length + breadth));
    return 0;
}
