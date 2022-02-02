/*
	The Calculator:
	Functions:
		-addition
		-subtraction
		-multiplication
		-division
		-percentage
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
	//declaration
	int choices, numbers;
	int i, add, sum;
	int subtract1, subtract2, difference;
	int num1, num2, product;
	int dividend, divisor, quotient;
	double percentage, value, result;
	
	//choices
	printf("THE BASIC CALCULATOR\n");
	printf("------------------------------------\n");
	printf("Operations:: \n");
	printf("------------------------------------\n");
	printf("(1) Addition\n");
	printf("(2) Subtraction\n");
	printf("(3) Multiplication\n");
	printf("(4) Division\n");
	printf("(5) Percentage\n");
	printf("(0) Exit\n");
	printf("------------------------------------\n");
	printf("Select the operation to be used: ");
	scanf("%d", &choices);
	switch(choices){
		case 0:
			break;
		case 1:
			numbers = 0;
			printf("Enter how many numbers to add: ");
			scanf("%d", &numbers);
			sum = 0;
			for(i=0; i<numbers; i++){
				printf("Enter a number to add: ");
				scanf("%d", &add);
				sum = sum + add;
			}
			printf("Sum is %d", sum);
			break;
		case 2:
			printf("Note: Only 2 numbers at a time\n");
			printf("Enter the minuend: ");
			scanf("%d", &subtract1);
			printf("Enter the subtrahend: ");
			scanf("%d", &subtract2);
			difference = subtract1 - subtract2;
			printf("Difference is %d", difference);
			break;
		case 3:
			printf("Note: Only 2 numbers at a time\n");
			printf("Enter 1st number: ");
			scanf("%d", &num1);
			printf("Enter 2nd number: ");
			scanf("%d", &num2);
			product = num1 * num2;
			printf("Product is %d", product);
			break;
		case 4:
			printf("Note: Only 2 numbers at a time\n");
			printf("Enter the dividend: ");
			scanf("%d", &dividend);
			printf("Enter the divisor: ");
			scanf("%d", &divisor);
			quotient = dividend / divisor;
			printf("Quotient is %d", quotient);
			break;
		case 5:
			printf("Enter the percentage in decimal: ");
			scanf("%lf", &percentage);
			printf("Enter the value: ");
			scanf("%lf", &value);
			result = value * (percentage/100);
			printf("Result is %lf", result);
			break;
		default:
			printf("Error!\n");
			break;
	}
}


