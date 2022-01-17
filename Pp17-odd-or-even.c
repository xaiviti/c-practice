/*
Problem: Write a program that determines if the input number is ODD or even number.
*/ 
#include <stdio.h>

int main() {
    // declaration
    int value;
    
    //input
    printf("ODD OR EVEN? \n");
    printf("Please enter an integer: ");
    scanf("%d", &value);
    //assessment and results
    if(value%2 == 1){
        printf("ODD \n");
    }else{
        printf("EVEN \n");
    }
    
    return 0;
}