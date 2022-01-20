/*
Problem: Write a program which produces the given sequence nos. (in alternate arrangement):
1,5,2,4,3,3,4,2,5,1
*/
#include <stdio.h>

int main() {
    // initiators
    int num=1;
    int j=4;
    int l=-1; 
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