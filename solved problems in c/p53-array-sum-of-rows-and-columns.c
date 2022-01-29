/*
Problem: Write a program using two-dimensional arrays that computes the sum of data in rows and sum of data in columns of the 3x3 array variable n[3][3].
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int arr[3][3];
    int sum; 
    
    // input
    printf("2D: Sum of Rows & Columns\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Value [%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    //output 
    printf("Output: \n");
    
    for(int k=0; k<3; k++){
        sum =0;
        for(int l=0; l<3; l++){
            sum = sum + arr[k][l];
        }
        printf("Sum for row %d is %d\n", k, sum);
    }
    
    for(int q=0; q<3; q++){
        sum =0;
        for(int w=0; w<3; w++){
            sum = sum + arr[w][q];
        }
        printf("Sum for column %d is %d\n", q, sum);
    }
    
    
    return 0;
}
