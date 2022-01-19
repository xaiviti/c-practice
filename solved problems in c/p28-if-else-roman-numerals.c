/*
Problem: Write a program that accepts an ordinary number and outputs its equivalent Roman numerals. The ordinary numbers and their equivalent Roman Numeral numbers are given below:
Ordinary Numbers	Roman Numerals
1			I
5			V
10			X
50			L
100			C
500			D
1000		M
note that the maximum input is 3000
*/
#include <stdio.h>

int main() {
    // declaration
    int ordinaryNumber;
    //char romanNumeral[];
    
    //input
    printf("Roman Numeral Converter \n");
    printf("Please enter an ordinary number(max 3000): ");
    scanf("%d", &ordinaryNumber);
    
    //Solution
    if(ordinaryNumber<3001 && ordinaryNumber>0){
        printf("%d\n", ordinaryNumber);
        printf("Roman Numeral Value: ");
        int thou = ordinaryNumber / 1000;
        int hund = (ordinaryNumber - (thou * 1000))/100;
        int tens = (ordinaryNumber-((thou * 1000)+(hund*100)))/10;
        int ones = ordinaryNumber-((thou*1000)+(hund*100)+(tens*10));
        for(int i=1; i<=thou; i++){
            printf("M");
        }
        if(hund==9){printf("CM");}
        else if(hund==4){printf("CD");}
        else if(hund==5){printf("D");}
        else if(hund>5 && hund<9){
            printf("D");
            hund = hund - 5;
            for(int i=1; i<=hund; i++){
            printf("C");
            }
        }
        else{
            for(int i=1; i<=hund; i++){
            printf("C");
            }
        }
        if(tens==9){printf("XC");}
        else if(tens==4){printf("XL");}
        else if(tens==5){printf("L");}
        else if(tens>5 && tens<9){
            printf("L");
            tens = tens - 5;
            for(int i=1; i<=tens; i++){
            printf("X");
            }
        }else{
            for(int i=1; i<=tens; i++){
            printf("X");
            }
        }
        if(ones==9){printf("IX");}
        else if(ones==4){printf("IV");}
        else if(ones==5){printf("V");}
        else if(ones>5 && ones<9){
            printf("V");
            ones = ones - 5;
            for(int i=1; i<=ones; i++){
            printf("I");
            }
        }else{
            for(int i=1; i<=ones; i++){
            printf("I");
            }
        }
    }else{
        printf("Out of Bounds\n");
    }
    
    return 0;
}