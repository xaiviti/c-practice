/*
Problem: Write a program using one-dimensional array that calculates the sum and average of the five input values typed from the keyboard and prints the calculated sum and average.
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int arr[5];
    int sum=0; 
    
    // input
    printf("1D: Highest and their differences\n");
    
    for(int i=0; i<5; i++){
            printf("Enter #%d Value:", (i+1));
            scanf("%d", &arr[i]);
    }
    
    //output 
    printf("Output: \n");
    sum =0;
    for(int k=0; k<5; k++){
        sum = sum + arr[k];
    }
    double average = sum / 5;
    printf("Sum is %d\n", sum);
    printf("Average is %lF\n", average);
    
    
    return 0;
}
