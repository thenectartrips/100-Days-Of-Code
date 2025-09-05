//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main(){
    int n, binary_number = 0, place = 1, remainder; 
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0){
        remainder = n % 2;          
        binary_number += remainder * place;    
        n = n / 2;         
        place *= 10;
    }
    printf("Binary representation = %d\n", binary_number);


    return 0;
}