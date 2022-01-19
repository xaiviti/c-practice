/*
Problem: Write a program that calculates the sum of the given sequence numbers:
1 + 2 + 3 + 4 + 5
*/
#include <stdio.h>

int main() {
    // declaration
    int sum;
    //input
    
    
    //Solution
    printf("Add a basic sequence \n");
    for(int i=1; i<=5; i++){
        sum += i;
    }
    printf("Sum is %d", sum);
    
    
    return 0;
}