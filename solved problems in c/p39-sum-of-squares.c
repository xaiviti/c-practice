/*
Problem: Write a program to scan a number n and then output the sum of the squares from 1 to n. Thus, if the input is 4, the output should be 30 because:
1^2+2^2+3^2+4^2
1+4+9+16 = 30
*/
#include <stdio.h>

int main() {
    // initiators
    int num, square;
    int sum=0;
    //inputs
    printf("Sum of term N\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    //solution
    for(int i=1; i<=num; i++){
        square = i * i;
        sum = sum + square;
    }
        printf("Sum of squares of the terms is %d ", sum);
    
    return 0;
}