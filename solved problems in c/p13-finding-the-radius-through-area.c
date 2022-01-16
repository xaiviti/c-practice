/*
Problem: Write a program that computes the radius of a circle. Derive your formula from the given equation: A = pi*radius**2, then display the output.
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    float area, radius;
    
    //Input
    printf("Finding the radius using the area of the circle: \n");
    printf("Enter the area of the circle: ");
    scanf("%f", &area);
    
    //computation
    radius = sqrt(area/(3.1416));
    
    //Output
    printf("The radius of the circle with an area of %f is %f \n", area, radius);
    
    return 0;
}