/*
Problem: Write a program that determines if the input number is POSITIVE or NEGATIVE. Consider 0 as positive(consider that it contains no negative sign).
*/ 
#include <stdio.h>

int main() {
    // declaration
    int value;
    
    //input
    printf("POSITIVE OR NEGATIVE? \n");
    printf("Please enter an integer: ");
    scanf("%d", &value);
    //assessment and results
    if(value >= 0 ){
        printf("POSITIVE \n");
    }else if(value < 0){
        printf("NEGATIVE \n");
    }else{
        printf("Sorry, you did not enter an integer. \n");
    }
    
    return 0;
}