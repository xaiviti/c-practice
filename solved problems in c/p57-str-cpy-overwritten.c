/*
Problem: Create a program that demonstrates how a value of string1 is overwritten by the value of string2.
*/
#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char str1[10], str2[10];
    
    //input and process
    printf("STRCPY - OVERWRITTEN:HELLO\n");
    printf("Enter 1st String: \n");
    gets(str1);//used gets instead of scanf
    //copy-override
    strcpy(str2, "Hello");
    strcpy(str1, str2);
    //puts - string output function
    puts(str1);
    puts(str2);
    
    return 0;
}