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
	double tuitionFullPayment, tuitionInstallmentDP, tuitionInstallmentTerms;
	
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
	double miscellaneous = 11589.70;
	printf("Base Tuition is %lf", baseTuitionFee);
	printf("Enter the mode of payment: ");
	scanf("%f", &modeOfPayment);
	sswitch(modeOfPayment){
		case 1:
			tuitionFullPayment = baseTuitionFee + miscellaneous;
			printf("-------------------------------------------- \n");
			printf("Total Tuition Fee: %lf\n", tuitionFullPayment);
			printf("-------------------------------------------- \n");
			printf("Breakdown: ");
			printf("---------------------------- \n");
			printf("Number of Units: &lf", units);
			printf("Amount per Unit: %lf", amountPerUnit);
			printf("Miscellaneous: %lf", amountPerUnit);
			printf("---------------------------- \n");
			break;
		case 2:
			break;
		default:
			break;
		
	}
}
