/*
Problem: Write a program that computes the average of three
input quizzes, then display the result
*/
#include <stdio.h>

int main(){
    //declaration
    float average, quiz1, quiz2, quiz3;
    
    //inputs
    printf("Finding the Average of 3 quiz. \n");
    printf("Score in first quiz: ");
    scanf("%f", &quiz1);
    printf("Score in second quiz:");
    scanf("%f", &quiz2);
    printf("Score in third quiz:");
    scanf("%f", &quiz3);
   
    
    //equation
    average = (quiz1+quiz2+quiz3)/3;
    
    //output
    printf("Average of quizzes %f, %f, %f is %f\n", quiz1, quiz2, quiz3, average);
    

    return 0;
}
