/*
Problem: Write a function-oriented program to convert an input fahrenheit into celcius degree. Use the formula:C=(5/9)*F-32.
*/
#include <stdio.h>

int main() {
    // declaration
    int fahrenheit;
    int c;
    
    // input
    printf("Fahnrenheit to Celcius Function\n");
    printf("Enter Fahnrenheit value: ");
    scanf("%d", &fahrenheit);
    c = celcius(fahrenheit);
    printf("\nCelcius value: %d", c);
    
    return 0;
}

int celcius(int fahrenheit){
    int celcius = (0.55555555555)*(fahrenheit-32);
    return celcius;
}