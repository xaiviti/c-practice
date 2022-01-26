/*
Problem: Write a program to scan a number n and then output the sum of the powers from 1 to n.
input: 4
output: 288
*/
#include <stdio.h>
#include <math.h>

int main() {
    // initiators
    int num, power;
    int sum=0;
    //inputs
    printf("Summation of number to the power of its number\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    //solution
    for(int i=1; i<=num; i++){
        power = pow(i,i);
        sum = sum + power;
    }
    printf("Sum of the powers to n is %d", sum);
    
    
    return 0;
}