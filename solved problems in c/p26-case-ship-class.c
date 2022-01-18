/*
Problem: Write a program that determines the class of the Ship depending on its class ID (identifier). here are the criteria. The class ID serves as the input data and the shp class as the output information.
Class ID		Ship Class
B or b			Battleship
C or c			Cruiser
D or d			Destroyer
F or f			Frigate
*/ 
#include <stdio.h>

int main() {
    // declaration
    char id;
    
    //input
    printf("The Ship Class \n");
    printf("Please enter the id: ");
    scanf("%s", &id);
    //assessment and results
    switch(id){
        case 'B': case 'b':
            printf("Battleship \n");
            break;
        case 'C': case 'c':
            printf("Cruiser \n");
            break;
        case 'D': case 'd':
            printf("Destroyer \n");
            break;
        case 'F': case 'f':
            printf("Frigate \n");
            break;
        default:
            printf("code unavailable \n");
            break;
    }
    
    
    return 0;
}