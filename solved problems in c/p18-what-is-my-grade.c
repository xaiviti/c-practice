/*
Problem: Write a program to assist a teacher in calculating student grades at the end of the semester. It accepts a numerical grade as input, then it will display the character grade as output, based on the given scale:
    Range			Grade
    90 and above	A
    80-89			B
    70-79			C
    60-69			D
    below 60		F
*/ 
#include <stdio.h>

int main() {
    // declaration
    int grade;
    
    //input
    printf("What is my grade? \n");
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    //assessment and results
    if(grade >= 90){
        printf("A \n");
    }else if(grade >= 80 && grade < 90){
        printf("B \n");
    }else if(grade >= 70 && grade < 80){
        printf("C \n");
    }else if(grade >= 60 && grade < 70){
        printf("D \n");
    }else{
        printf("F \n");
    }
    
    return 0;
}