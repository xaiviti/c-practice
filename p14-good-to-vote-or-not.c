/*
Problem: Write a program that determines if the input age is qualified to vote or not. The qualifying ages is 18 years old and above.
*/ 
#include <stdio.h>

int main() {
    // declaration
    int age;
    
    //input
    printf("Are you qualified to vote? \n");
    printf("Enter your age: ");
    scanf("%d", &age);
    //assessment and results
    if(age > 17 ){
        printf("You are valid to vote. \n");
    }else{
        printf("Not valid to vote, underage. \n");
    }
    
    return 0;
}