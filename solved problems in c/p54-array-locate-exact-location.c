/*
Problem: Write a program using one-dimensional array that searches a number if it is found on the list of the given 5 input numbers and locate its exact location in the list.
input: 5 4 8 2 6
number to be searched: 2
output: 2 found in location 4
*/
#include <stdio.h>
#include <math.h>

int main() {
    // declaration
    int arr[5];
    int num; 
    
    // input
    printf("1D: Exact Location\n");
    
    for(int i=0; i<5; i++){
        printf("#%d Value : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter Value to be searched: ");
    scanf("%d", &num);    
    
    //output 
    printf("Output: \n");
    for(int k=0; k<5; k++){
        if(num==arr[k]){
            printf("Location: %d\n", k);
        }
    }
    
    
    return 0;
}
