/*
Problem: Write a program that generates and displays the fiobonacci sequence numbers of n (as input). In Fibonacci, the current third number is the sum of two previous numbers.
Input: 9
Output: 1 1 2 3 5 8 13 21 34
*/
#include <stdio.h>

int main() {
    // initiators
    int num, sum;
    int present_i = 0;
    int new_i = 1;
    //inputs
    printf("The Fibonacci Sequence \n");
    printf("Enter a number: ");
    scanf("%d", &num);
    //solution
    printf("%d ", new_i);// 1 ->
    
    for(int i=1; i<=(num-1); i++){
        
        sum = present_i + new_i; //<-(1+0) - ()
        printf("%d ", sum); // 1 - 
        present_i = new_i;
        new_i = sum;
    }
    
    return 0;
}