#include<stdio.h>
#include<stdbool.h>

int main(){
    //Loops
        //three types of Loops: (while, for, do-while)
        //Parts of Loops: 1 initialization, 2 comparison, 3 update
        //while Loop
        //for Loop
        //do-while Loop
        
        
        //FOR LOOPS
        //int size = 10;
        int ages[] = {12, 43, 545, 3, 4, 54, 6, 7, 87, 12};
        int calculatedSize = sizeof(ages) / sizeof(ages[0]);
        
        for(int i = 0; i < calculatedSize; i++){
            printf("ages[i] = %d\n", ages[i]);
        }
        
        
        //NESTED FOR LOOPS
        for(int i = 0; i < 10; i++){
            for(int j = i; j >= 0; j--){
                printf("%d", j);
            }
            printf("\n");
        }
        
        //WHILE LOOPS
        int a = 0;
        while(a < 10){
            //code
            printf("%d",a);
            //increment/decre
            a++;
        }
        printf("\n");
        printf("\n");
        
        //DO WHILE LOOPS
        
        int input;
        do{
            printf("Choose a number between 0 and 9: ");
            scanf("%d", &input);
        } while (input < 0 || input > 9);
        
        
        
    return 0;
}