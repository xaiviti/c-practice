// Problem: Write a program that takes as input the purchase price of an item (P), its expected number of years of service (Y) and its expected salvage value (S). Then outputs the yearly depreciation for the item (D). Use the formula: D = (P-S)/Y.
#include <stdio.h>

int main() {
    // declaration
    float purchasePrice, yearsOfService, salvageValue, yearlyDepreciation;
    
    //Input
    printf("Calculating the yearly depreciation: \n");
    printf("Enter the purchase price: ");
    scanf("%f", &purchasePrice);
    printf("Enter the years of service: ");
    scanf("%f", &yearsOfService);
    printf("Enter the salvage value: ");
    scanf("%f", &salvageValue);
    
    //computation
    yearlyDepreciation = ((purchasePrice-salvageValue)/yearsOfService);
    
    //Output
    printf("The yearly depreciation is %f \n", yearlyDepreciation);
    
    return 0;
}