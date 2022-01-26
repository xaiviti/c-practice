/*
Problem: Write a function-oriented program that emulates the sqr() function of pascal programming language. Display the square and square root values of the input n.
*/
#include <stdio.h>
#include <math.h>

int main() {
    //declaration
    int n;
    //input
    printf("Square and Square Root\n");
    printf("Enter a value: ");
    scanf("%d", &n);
    printf("Square value: %d\n", (n*n));
    printf("Square Root value: %f", sqrt(n));
    
    return 0;
}
