#include<stdio.h>

int main(){
    
    //MULTI DIMENSIONAL ARRAY
    int rows = 3;
    int const columns = 4;
    
    int studentGrades[][columns] = {
        {1, 3, 4, 6},
        {3, 2, 4, 5},
        {32, 2, 4, 9}
        
    };
    for(int i = 0; i < rows; i++){
        for(int k = 0; j < columns; j++){
            printf("%d", studentGrades[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}