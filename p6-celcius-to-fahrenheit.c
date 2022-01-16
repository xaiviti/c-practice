// Problem: Write a program that converts the input Celcius degrees into its equivalent Fahrenheit degree. Use the formula: F=(9/5)*C+32.
#include <stdio.h>

int main() {
    // declaration
    float celcius, fahrenheit;
    
    //Input
    printf("Converting Celcius to Fahrenheit: \n");
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celcius);
    
    //computation
    fahrenheit = ((1.8)*(celcius)) + 32;
    
    //Output
    printf("The value of %f Celcius is %f Fahrenheit. \n", celcius, fahrenheit);
    
    return 0;
}