/*
Problem: Write a program that accepts the input magic number. If the input is right, the magic words will be displayed. The magic number is 143 and its corresponding magic words are: "I love you". If the input number is wrong, displays: "Sorry, better luck next time".
*/ 
#include <stdio.h>

int main() {
    // declaration
    int value;
    
    //input
    printf("MAGIC NUMBERS? \n");
    printf("What is the magic number: ");
    scanf("%d", &value);
    //assessment and results
    if(value == 143 ){
        printf("I love you \n");
    }else{
        printf("Sorry, better luck next time. \n");
    }
    
    return 0;
}