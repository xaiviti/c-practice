/*
Problem: Write a program that computes and assesses the tuition fee of the students in one trimester, based on the given mode of payment below:
Plan(key)		        Discount(-) or Interest(+)
Cash(1)			        10% discount
Two-installment(2)	    5% discount
Three-installment(3)	10% interest

The target-user must use the key in selecting or choosing the mode of payment. The first input data is the tuition fee, and the second input data is the mode of payment. Which displays or result to the total tuition fee.
*/
#include <stdio.h>

int main() {
    // declaration
    float tuitionFee, discount, interest, totalTuitionFee;
    int modeOfPayment;
    
    //input
    printf("Total Tuition Calculator\n");
    printf("Please enter tuition fee: ");
    scanf("%f", &tuitionFee);
    printf("Mode of Payments: \n");
    printf("(1)Cash \n");
    printf("(2)Two-Installments \n");
    printf("(3)Three-Installments \n");
    printf("Please enter mode of Payment: ");
    scanf("%d", &modeOfPayment);
    printf("------------------------------------------------\n");
    
    //Solution
    switch(modeOfPayment){
        case 1:
            printf("Breakdown: \n");
            printf("Tuition Fee: %f\n", tuitionFee);
            discount = tuitionFee * 0.10;
            printf("Discount: %f\n", discount);
            printf("Interest: 0\n");
            totalTuitionFee = tuitionFee - discount;
            printf("Total Tuion Fee: %f\n", totalTuitionFee);
            break;
        case 2:
            printf("Breakdown: \n");
            printf("Tuition Fee: %f\n", tuitionFee);
            discount = tuitionFee * 0.05;
            printf("Discount: %f\n", discount);
            printf("Interest: 0\n");
            totalTuitionFee = tuitionFee - discount;
            printf("Total Tuion Fee: %f\n", totalTuitionFee);
            break;
        case 3:
            printf("Breakdown: \n");
            printf("Tuition Fee: %f\n", tuitionFee);
            printf("Discount: 0\n");
            interest = tuitionFee * 0.10;
            printf("Interest: %f\n", interest);
            totalTuitionFee = tuitionFee + interest;
            printf("Total Tuion Fee: %f\n", totalTuitionFee);
            break;
        default:
            printf("Invalid Option! Re-run the program.\n");
            break;
    }
    
    return 0;
}