/*
Problem: Write a program using two-dimensional array that loads and stores 6 values into an array variable. The values are the resulting computation from a simple equation. Then display the previously stored values.

int no[2][3];
A. loads the values
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        num[i][j] = (i*4)+(j+19);
    }
}
B. displays the previously loaded values
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        printf("%d ", num[i][j]);
    }
}
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int i, j;
    int arr[2][3];
    
    // input
    printf("2D: Store and Display\n");
    
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("i is %d and j is %d\n", i, j);
            printf("Enter a Number:");
            scanf("%d", &arr[i][j]);
        }
    }
    
    //output 
    printf("Output: \n");
    for(int k=0; k<2; k++){
        for(int l=0; l<3; l++){
            printf("%d ",arr[k][l]);
        }
    }
    
    
    return 0;
}
