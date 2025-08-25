// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main()
{
    int input_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &input_seconds);

    hours = input_seconds / 3600;
    minutes = (input_seconds % 3600) / 60;
    seconds = input_seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
