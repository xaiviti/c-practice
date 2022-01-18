/*
Problem: Write a program that determines if the input letter is a VOWEL or CONSONANT. The vowels are: A E I O U. Your program must be able to handle a capital or small input letter.
*/ 
#include <stdio.h>

int main() {
    // declaration
    char letter;
    
    //input
    printf("VOWEL OR CONSTONANT \n");
    printf("Please enter your letter: ");
    scanf("%s", &letter);
    //assessment and results
    switch(letter){
        case 'I': case 'i': case 'A': case 'a': case 'O': case 'o': case 'U': case 'u': case 'E': case 'e': 
            printf("VOWEL");
            break;
        default:
            printf("CONSONANT");
            break;
    }
    
    return 0;
}