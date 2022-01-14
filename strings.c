#include<stdio.h>
#include<string.h>

int main(){
    //STRINGS - like a character array 
    printf("What is your name? ");
    char name[20]; //preserve one character on the null terminator, or 1 character
    scanf("%19s", name);
    
    int letter = 0;
    while(name[letter] != '\0'){
        letter++;
    }
    printf("Size of name is %d\n", letter);
    printf("Size of name is %d\n", strlen(name));
    
    if(strcmp(name, "Heidi") == 0){
        printf("You get access!\n");
    }
    
    //copy variable
    char copy[20];
    strcpy(copy, name);
    printf("Copy of name is %s\n", copy);
    
    char lastName[] = " Siapco";
    strcat(copy, lastName);
    printf("Full Name is %s", copy);
    
    return 0;
}