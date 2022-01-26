/*
Problem: Write a program that reverses the input number n. Formulate an equation to come up with an answer.
input: 1238
output: 8321
*/
#include <stdio.h>

int main() {
    // initiators
    int num;
    //inputs
    printf("Reverse the Input Number\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    //solution
    printf("Reversed number: ");
    while(num > 0){
        int mod = num % 10; 
        printf("%d",mod); 
        num = num / 10; 
    }
    
    
    return 0;
}