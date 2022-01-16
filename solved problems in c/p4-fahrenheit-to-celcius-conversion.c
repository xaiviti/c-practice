/*
Problem: Write a program that converts the input Fahrenheit degree into its Celcius Degree equivalent. Use the formula: C=(5/9)*F-32. Display the result.
*/
#include <stdio.h>

int main(){
    //declaration
    float fahrenheit, celcius;
    
    //inputs
    printf("Fahrenheit to celcius conversion. \n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
   
    
    //equation
    celcius = 0.555555556*(fahrenheit-32);
    
    //output
    printf("Temperature conversion from %f fahrenheit id %f\n celcius", fahrenheit, celcius);
    

    return 0;
}
