/*
Total Tuition Fees and its Breakdown
-Units
-Amount per unit
-Miscellaneous
-discount in online class
-modes of payment:
	-full payment
	-installment
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
	//declaration
	double units, amountPerUnit, baseTuitionFee, modeOfPayment;
	
	printf("Tuition Fee Calculator \n");
	printf("-------------------------------- \n");
	printf("Mode of Payments: \n");
	printf("(1) Full Payment \n");
	printf("(2) Installment \n");
	printf("-------------------------------- \n");
	printf("Enter the number of units: ");
	scanf("%lf", &units);
	printf("Enter the amount per Unit: ");
	scanf("%lf", &amountPerUnit);
	baseTuitionFee = units * amountPerUnit;
	printf("Base Tuition is %lf", baseTuitionFee);
	printf("Enter the mode of payment: ");
	scanf("%f", &modeOfPayment);
}
