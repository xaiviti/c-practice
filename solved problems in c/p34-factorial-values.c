/*
Problem: Write a program that computes the factorial value of n (as input) and displays it.
*/
#include <stdio.h>

int main() {
    // initiators
    int num, factorial, i;
    
    //inputs
    printf("Factorial value\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    //solution
    factorial = 1;
    for(i=num;i>=1;i--){
        factorial = factorial * i;
    }
    
    printf("\n");
    printf("Factorial value is %d", factorial);
    
    return 0;
}