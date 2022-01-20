/*
Problem: Write a program which produces the given sequence of numbers:
5, 1, 4, 2, 3, 3, 2, 4, 1, 5
*/
#include <stdio.h>

int main() {
    // initiators
    int num=5;
    int j=4;
    int l=1; 
    //inputs
    printf("Alternate arrangement\n");
    //solution
    for(int i=1; i<=10; i++){
        printf("%d ", num);
        num = num - (j*l);
        j--;
        l = (-l);
    }
    
    return 0;
}