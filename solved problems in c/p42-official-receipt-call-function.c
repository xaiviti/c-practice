/*
Problem: Write a function that performs a printing task for a long line above the word:"OFFICIAL RECEIPT" and below it. Call or invoke this function from the main program two times.
*/
#include <stdio.h>
#include <math.h>

int main() {
    line();
    printf("OFFICIAL RECEIPT\n");
    line();
    
    
    return 0;
}

void line(){
    printf("--------------------------------------------------\n");
}