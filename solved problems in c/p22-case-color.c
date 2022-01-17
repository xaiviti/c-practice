/*
Problem: Write a program that displays an equivalent color once an input letter matches its first character. For example, b for Blue, r for Red, and so on. Here is the given criteria: (The letters serve as an input data, and the color as output information).
Letters		Colors
'B' or 'b'	Blue
'R' or 'r'	Red
'G' or 'g'	Green
'Y' or 'y'	Yellow
other letters	Unknown-Color
*/ 
#include <stdio.h>

int main() {
    // declaration
    char letter;
    
    //input
    printf("Case: Find the Color \n");
    printf("Please enter your letter: ");
    scanf("%s", &letter);
    //assessment and results
    switch(letter){
        case 'B': case 'b':
            printf("Blue");
            break;
        case 'R': case 'r':
            printf("Red");
            break;
        case 'G':case 'g':
            printf("Green");
            break;
        case 'Y':case 'y':
            printf("Yellow");
            break;
        default:
            printf("Unknown-Color");
            break;
    }
    
    return 0;
}