// Problem: Write a program that converts the input dollar to its peso exchange rate equivalent. Assume that the present exchange rate is 51.50 pesos against the dollar. Then display the peso equivalent exchange rate.
#include <stdio.h>

int main() {
    // declaration
    float dollar, peso;
    
    //Input
    printf("Converting Dollar to Philippine Peso: \n");
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollar);
    
    //computation
    peso = dollar*(51.50);
    
    //Output
    printf("%f Dollars is %f Pesos \n", dollar, peso);
    
    return 0;
}