//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main(){
    int n, reverse_number = 0,i; 
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!= 0){
        i = n % 10;          
        reverse_number= reverse_number * 10 + i;    
        n = n / 10;         
    }
    printf("Reversed number = %d\n", reverse_number);
    return 0;
}
