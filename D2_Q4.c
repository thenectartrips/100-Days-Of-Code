// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main()
{

    int radius ;

    printf("Enter the radius =");
    scanf("%d", &radius);

    printf("The area of circle with radius %d is = %f\n ", radius, 3.14 * radius * radius);
    printf("The circumference of circle with radius %d is = %f ", radius, 2 * 3.14 * radius);
    return 0;
}