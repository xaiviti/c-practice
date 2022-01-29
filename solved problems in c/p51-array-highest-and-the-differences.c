/*
Problem: Write a program that determines the highest value among five input values from the keyboard and prints the difference of each value from the highest.
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int arr[5];
    int high=0; 
    
    // input
    printf("1D: Highest and their differences\n");
    
    for(int i=0; i<5; i++){
            printf("Enter #%d Value:", (i+1));
            scanf("%d", &arr[i]);
    }
    
    //output 
    printf("Output: \n");
    for(int k=0; k<5; k++){
        if(high<arr[k]){
            high = arr[k];
        }
    }
    printf("Highest is %d\n", high);
    
    for(int l=0; l<5; l++){
        if(arr[l]!=high){
            printf("Difference from highest to arr[%d] is %d\n", l, (high-arr[l]));
        }
    }
    
    
    return 0;
}
