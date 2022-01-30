/*
Problem: Create a program that demonstrates how to copy a data into the variable.
*/
#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char fn[10], ln[10];
    
    //input and process
    printf("STRCPY\n");
    //copy
    strcpy(fn, "Heidi");
    strcpy(ln, "Siapco");
    //puts - string output function
    puts(fn);
    puts(ln);
    
    return 0;
}