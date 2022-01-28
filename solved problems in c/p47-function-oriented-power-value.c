/*
Problem: Write a function-oriented program that calculates the power of value of the input base number and exponent number. Then display the power value.
Input base: 5
Input exponent: 3
Power value: 125
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int base, power;
    
    // input
    printf("Power Value Function\n");
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Power: ");
    scanf("%d", &power);
    int result = powerValue(base,power);
    printf("\nPower Value is %d", result);
    
    return 0;
}

int powerValue(base,power){
    int powerValue = pow(base,power);
    return powerValue;
}