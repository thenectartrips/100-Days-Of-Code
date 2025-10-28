//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include <stdio.h>

int main(){
    int units;
    printf("Enter the number of units consumed: ") ;
    scanf("%d", &units);
    if (units <= 100){
        printf("Bill: ₹%d\n", units * 5) ;
    }
    else if (units <= 200){
        printf("Bill: ₹%d\n", (100 * 5) + (units - 100) * 8) ;
    }
    else{
        printf("Bill: ₹%d\n", (100 * 5) + (100 * 8) + (units - 200) * 10);
    }

    return 0;

}


