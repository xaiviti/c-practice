/*
Problem: Write a program that displays an equivalent color once an input letter match its first character. For example, b for Blue, r for Red, and so on. Here are the given criteria:
    Letters			Colors
    'B' or 'b'		Blue
    'R' or 'r'		Red
    'G' or 'g'		Green
    'Y' or 'y'		Yellow
other letters		"Unknown color"
*/ 
#include <stdio.h>

int main() {
    // declaration
    char letter;
    
    //input
    printf("What is the color? \n");
    printf("Please enter your letter: ");
    scanf("%c", &letter);
    printf("%c \n", letter);
    //assessment and results
    if((letter=='B') || (letter=='b')){
        printf("It is Blue \n");
    }else if((letter=='R')||(letter=='r')){
        printf("It is Red \n");
    }else if((letter=='G')||(letter=='g')){
        printf("It is Green \n");
    }else if((letter=='Y')||(letter=='y')){
        printf("It is Yellow \n");
    }else{
        printf("Unknown color \n");
    }
    
    return 0;
}