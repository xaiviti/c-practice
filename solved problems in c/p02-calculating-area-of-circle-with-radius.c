/*
Problem: Write a program to calculate the area of a circle and
display the result. Use the formula: A=(pi)(radius)**2 where Pi
is approximately equal to 3.1416.
*/
#include <stdio.h>

int main(){
    //declaration
    float pi = 3.1416;
    float radius, area;
    
    //inputs
    printf("Finding the Area of a circle. \n");
    printf("Enter the radius: \n");
    scanf("%f\n", &radius);
   
    
    //equation
    area = pi * radius * radius;
    
    //output
    printf("Area of the circle with radius %f is %f", radius, area);
    

    return 0;
}
