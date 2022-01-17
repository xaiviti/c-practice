/*
Problem: Write a program to assist a teacher in calculating student's grade at the end of the semester. It accepts numerical grade as input data then it will display the equivalent character grade as output based on the given scale.
Range		Grade
90-100		'A'
80-89		'B'
70-79		'C'
60-69		'D'
50-59		'F'
others		'Out-Of-Range'
*/ 
#include <stdio.h>

int main() {
    // declaration
    int grade;
    
    //input
    printf("Case: Find the Grade \n");
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    //assessment and results
    switch(grade){
        case 90:case 91:case 92:case 93:case 94:case 95:case 96:case 97:case 98:case 99:case 100:
            printf("A");
            break;
        case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:
            printf("B");
            break;
        case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:
            printf("C");
            break;
        case 60:case 61:case 62:case 63:case 64:case 65:case 66:case 67:case 68:case 69:
            printf("D");
            break;
        case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 58:case 59:
            printf("F");
            break;
        default:
            printf("Out-of-range");
            break;
    }
    
    return 0;
}