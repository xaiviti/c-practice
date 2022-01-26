/*
Problem: Write a function-oriented program that computes the area of a circle. Use the formula: Area = (pi)sqr(radius), where pi is approximately 3.1416.
*/
#include <stdio.h>
#include <math.h>


int main() {
    //declaration
    int radius;
    //input
    printf("Area of the Circle Function Oriented\n");
    printf("Enter the radius: ");
    scanf("%d", &radius);
    float area = areaOfCircle(radius);
    printf("Area with radius %d is %lf\n", radius, area);
    
    return 0;
}

int areaOfCircle(int radius){
    float area = (3.1416) * (radius*radius);
    return area;
}