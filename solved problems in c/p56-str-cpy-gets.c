/*
Problem: Create a program that demonstrates how to copy a string data coming from the keyboard input using the gets() function and prints them.
*/
#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char fn[10], ln[10], efn[10], eln[10];
    
    //input and process
    printf("STRCPY - GETS\n");
    printf("Enter your First Name: \n");
    gets(fn);//used gets instead of scanf
    printf("Enter your Last Name: \n");
    gets(ln);
    //copy
    strcpy(efn, fn);//copy the value from the gets
    strcpy(eln, ln);
    //puts - string output function
    puts(efn);
    puts(eln);
    
    //put the name straight
    printf("Name is %s %s ", efn, eln);
    
    return 0;
}