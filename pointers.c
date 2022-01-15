#include <stdio.h>

void square(int *input){
    *input *= *input;
}

void sizeExample(int ages[]){
    printf("memory size of ages = %lu\n", sizeof(ages));
}

int main(){
    //POINTERS - allows us change the value of variables inside a functions
    int a = 100;
    int *b = &a; // this is the pointer (b stores the address of a)
    
    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);
    
    a = 200;
    
    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);
    
    //Indirection operator
    *b = 300;
    
    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);
    
    //Change the value the pointer points to OR you can change the value of b itself
    int c = 6000;
    b = &c;
    
    a = 4000;
    
    printf("a  = %d\n", a);
    printf("*b  = %d\n", *b);
    
    int x = 5;
    square(&x);
    printf("%d\n", x);
    
    int size = 6;
    int ages[] = {2, 43, 63000, 23, 05, 53};
    
    printf("memory size of ages = %lu\n", sizeof(ages));
    
    sizeExample(ages);
    
    return 0;
}
