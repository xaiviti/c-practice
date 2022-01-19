/*
Problem: Write a program that accepts the input grade in percentile form and output its grade equivalent; based on the given range of percentile and grade equivalent table below:
Range		    Grade
98-100		    1.00
95-97		    1.25
92-94		    1.50
89-91		    1.75
85-88		    2.00
82-84		    2.25
80-81		    2.50
77-79		    2.75
75-76		    3.00
other grades	"Out of Range"
*/
#include <stdio.h>

int main() {
    // declaration
    int grade;
    
    //input
    printf("Grade Equivalent Calculator\n");
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    
    //Solution
    switch(grade){
        case 75: case 76:
            printf("3.00 \n");
            break;
        case 77: case 78: case 79:
            printf("2.75 \n");
            break;
        case 80: case 81:
            printf("2.50 \n");
            break;
        case 82: case 83: case 84:
            printf("2.25 \n");
            break;
        case 85: case 86: case 87: case 88:
            printf("2.00\n");
            break;
        case 89: case 90: case 91:
            printf("1.75 \n");
            break;
        case 92: case 93: case 94:
            printf("1.50 \n");
            break;
        case 95: case 96: case 97:
            printf("1.25 \n");
            break;
        case 98: case 99: case 100:
            printf("1.00 \n");
            break;
        default:
            printf("Out of Range\n");
            break;
    }
    
    return 0;
}