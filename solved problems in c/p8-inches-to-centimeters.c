// Problem: Write a program that converts an input inch(es) into its equivalent centimeters. Take note that one inch is equivalent to 2.54 cms.
#include <stdio.h>

int main() {
    // declaration
    float inches, centimeters;
    
    //Input
    printf("Converting Inches to Centimeters: \n");
    printf("Enter the length in inches: ");
    scanf("%f", &inches);
    
    //computation
    centimeters = inches*(2.54);
    
    //Output
    printf("%f inches is %f centimeters \n", inches, centimeters);
    
    return 0;
}