//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()
{
    float Celsius = 37 , Fahrenheit;
    Fahrenheit = (9.0 / 5.0) * Celsius + 32;
    printf("The value of Fahrenheit is = %f", Fahrenheit);
    return 0;
}