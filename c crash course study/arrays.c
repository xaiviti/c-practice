#include<stdio.h>

int main(){
    
    //ARRAYS
    int size = 8;
    int ages[] = {1, 4, 60, 43, 54, 3, 90, 21};
    
    //how to print an ARRAYS
    for(int i = 0; i < size; i++){
        printf("%d ", ages[i]);
    }
    //first element = index 0 
    // 0 to 9, where 9 is the 10th element
    
    printf("\n");
    ages[3] = 60;
    for(int i = 0; i < size; i++){
        printf("%d ", ages[i]);
    }
    
    return 0;
}