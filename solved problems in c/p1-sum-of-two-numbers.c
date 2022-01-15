/*
Problem: Write a C program that calculates the sum of two input
numbers, and display the result.
*/
#include <stdio.h>

int main(){
    //declaration
    int input1, input2, sum;
    
    //inputs
    printf("Enter the first number: \n");
    scanf("%d\n", &input1);
    printf("Enter the second number: \n");
    scanf("%d\n", &input2);
    
    //computation
    sum = input1 + input2;
    
    //result
    printf("The sum of %d and %d is %d", input1, input2, sum);
    
    return 0;
}
