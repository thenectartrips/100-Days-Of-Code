//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(){
    int num , input_number , reversed_number = 0, remainder;
    printf("Enter an integer: ") ;
    scanf("%d", &num);
    input_number = num; 
    while (num != 0){
        remainder = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        num /= 10;
    }
    printf("Reversed Number = %d\n", reversed_number);
    return 0;

}
