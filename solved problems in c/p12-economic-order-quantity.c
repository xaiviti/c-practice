/*
Problem: Determine the most economical quantity to be stocked for each product that a manufacturing company has in its inventory. This quantity, called economic order quantity (EOQ) is calculated as follows:
EOQ = ((2RS/I)**1/2)
where, 	R = total yearly production requirement
	S = set up cost per order
	I = inventory carrying cost per unit
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    float EOQ, yearsOfProductionReq, costPerOrder, costPerUnit;
    
    //Input
    printf("Calculating the Economic Order Quantity: \n");
    printf("Enter the total yearly production requirement: ");
    scanf("%f", &yearsOfProductionReq);
    printf("Enter the set up cost per order: ");
    scanf("%f", &costPerOrder);
    printf("Enter the inventory carrying cost per unit: ");
    scanf("%f", &costPerUnit);
    
    //computation
    EOQ = sqrt((2*yearsOfProductionReq*costPerOrder)/costPerUnit);
    
    //Output
    printf("The Economic Order Quantity is %f \n", EOQ);
    
    return 0;
}