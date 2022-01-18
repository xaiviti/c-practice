/*
Problem: The National Earthquake Information Center has the following criteria to determine the earthquake's damage. Here are the given ritcher scale criteria and their corresponding characterization. The ritcher scale serves as the input data and the characterization as output information.
Ritcher Numbers(n)	Characterization
N<5.0			    Little or no damage
5.0>=n<5.5		    Some damage
5.5>=n<6.5		    Serious damage
6.5>=n<7.5		    Disaster
higher			    Catastrophe
*/ 
#include <stdio.h>

int main() {
    // declaration
    float n;
    
    //input
    printf("The Ritcher Scale \n");
    printf("Please enter the id: ");
    scanf("%f", &n);
    //assessment and results
    if(n<5.0){
        printf("Little or no damage \n");
    }else if(5.0>=n && n<5.5){
        printf("Some damage \n");
    }else if(5.5>=n && n<6.5){
        printf("Serious damage \n");
    }else if(6.5>=n && n<7.5){
        printf("Disaster \n");
    }else{
        printf("Catastrophe \n");
    }
    
    
    return 0;
}