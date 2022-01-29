/*
Problem: Write a program using one-dimensional array that loads or stores the 5 values into an array variable. The values are the resulting computation from a simple equation. Then display the stored values.

int no[5];
A. first loop stores 5 values
for(i=0; i<5; i++){
    no[i] = i + 10;
}
B. second loop displays the previously stored 5 values
for(i=0; i<5; i++){
    printf("%d ", no[i]);
}
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int e1, e2, e3, e4, e5;
    int no[5];
    
    // input
    printf("1D: Store and Display\n");
    printf("Enter 1st Number: ");
    scanf("%d", &e1);
    printf("Enter 2nd Number: ");
    scanf("%d", &e2);
    printf("Enter 3rd Number: ");
    scanf("%d", &e3);
    printf("Enter 4th Number: ");
    scanf("%d", &e4);
    printf("Enter 5th Number: ");
    scanf("%d", &e5);
    
    no[0] = e1;
    no[1] = e2;
    no[2] = e3;
    no[3] = e4;
    no[4] = e5;
    
    //output
    printf("Output: \n");
    for(int i=0; i<5; i++){
    printf("%d ", no[i]);
}
    
    return 0;
}
