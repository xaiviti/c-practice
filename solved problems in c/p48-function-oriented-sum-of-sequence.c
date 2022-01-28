/*
Problem: Write a function-oriented program that calculates the sum of the sequence number from 1 to n.
Input: 5
Output: 15
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int num;
    
    // input
    printf("Sum of Sequence Function\n");
    printf("Enter Number: ");
    scanf("%d", &num);
    int result = sumOfSequence(num);
    printf("\nSum of sequence is %d", result);
    
    return 0;
}

int sumOfSequence(num){
    int sum=0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    int sumOfSequence = sum;
    return sumOfSequence;
}