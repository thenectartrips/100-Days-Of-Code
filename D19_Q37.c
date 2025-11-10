/* (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.

Input 1:
4 5
Output 1:
20
Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main()
{
    int num1, num2, maximum, lcm;
    printf("Enter two positive integers: ") ;
    scanf("%d %d", &num1, &num2) ;
    maximum = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (maximum % num1 == 0 && maximum % num2 == 0)
        {
            lcm = maximum;
            break;
        }
        ++maximum;
    }

    printf("LCM of %d and %d is: %d", num1, num2, lcm);
    return 0;
}


