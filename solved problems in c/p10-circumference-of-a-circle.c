// Problem: Design a program to finds the circumference of a circle. Use the formula: C=2*pi*radius, where pi is approximately equivalent to 3.1416.
#include <stdio.h>

int main() {
    // declaration
    float circumference, radius;
    
    //Input
    printf("Calculating the circumference of a circle: \n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    //computation
    circumference = radius*2*(3.1416);
    
    //Output
    printf("The circumference of a circle with radius %f is %f \n", radius, circumference);
    
    return 0;
}