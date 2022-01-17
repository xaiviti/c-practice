/*
Problem: Write a program that displays the high school level of a student, based on its year-entry. For example, 1 means the student is a freshman and so on. Here are the given criteria:
Year-entry number	High-school Level
1			        Freshman
2			        Sophomore
3			        Junior
4			        Senior
*/ 
#include <stdio.h>

int main() {
    // declaration
    int year;
    
    //input
    printf("What is the High School Level? \n");
    printf("Please enter your year: ");
    scanf("%d", &year);
    //assessment and results
    switch(year){
        case 1:
            printf("Freshman");
            break;
        case 2:
            printf("Sophomore");
            break;
        case 3:
            printf("Junior");
            break;
        case 4:
            printf("Senior");
            break;
        default:
            printf("Not in High School");
            break;
    }
    
    return 0;
}