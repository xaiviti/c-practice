// Problem: Write a program that exhanges the value of two variables: x and y. The output must be: the value of variable y will become the value of variable x, and vice versa.
#include <stdio.h>

int main() {
    // declaration
    float x, y, a, b;
    
    //Input
    printf("Exchanging values: \n");
    printf("Enter x value: ");
    scanf("%f", &x);
    printf("Enter y value: ");
    scanf("%f", &y);
    
    //computation
    a = x;
    b = y;
    
    //Output
    printf("%f is x and %f is y at first. Now, x is %f and y is %f \n", x, y, b, a);
    
    return 0;
}