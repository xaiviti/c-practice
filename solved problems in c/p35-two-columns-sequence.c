/*
Problem: Write a program that calculates and produces these two columns sequence numbers:
Sequence nos.		Squared
1			        1
2			        4
3			        9
4			        16
5			        25
*/
#include <stdio.h>

int main() {
    // initiators
    int square;
    
    //inputs
    printf("Sequence in Column\n");
    //solution
    printf("Sequence nos.   Square\n");
    for(int i=1; i<=5; i++){
        square = i*i;
        printf("    %d              %d\n",i,square);
    }
    
    return 0;
}