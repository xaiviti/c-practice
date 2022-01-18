/*
Problem: Write a program that examines the value of a variable called temp. Then display the following messages, depending on the value assigned to temp.
Temperature		Message
Less than 0		ICE
Between 0 and 100	WATER
Exceeds 100		STEAM
*/ 
#include <stdio.h>

int main() {
    // declaration
    float temp;
    
    //input
    printf("Examine the Temperature \n");
    printf("Please enter the temperature: ");
    scanf("%f", &temp);
    //assessment and results
        if (temp<0){
            printf("ICE");
        }else if (temp>=0 && temp<=100){
            printf("WATER");
        }else{
            printf("STEAM");
        }
    
    
    return 0;
}