/*
Problem: Write a function-oriented program that computes the area of a rectangle. Use the formula: Area=Length*width
*/
#include <stdio.h>
#include <math.h>


int main() {
    //declaration
    int length, width;
    int area;
    //input
    printf("Area of the Rectangle\n");
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);
    area = areaOfRectangle(length, width);
    printf("Area with length %d and width %d is %d\n", length, width, area);
    
    return 0;
}

int areaOfRectangle(int length, int width){
    int area = length * width;
    return area;
}