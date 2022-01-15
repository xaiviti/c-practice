#include<stdio.h>
#include<stdbool.h>

int main(){
    //Dynamic vs Statically type of programming
    //Dynamic - variables are not tied to a data type
    //Statically - you have to say what type a variable is you declared

    int a = 10;
    double b = 10.5; //64 bit number
    float c = 10.5; //32 bit number
    char d = 'a';
    char e[]= "char array";
    bool f = false; //must import stdbool.h

    int slices = 17;
    int people = 2;

    double slicePerPerson = (double) slices / people; //8.5000
    printf("%lf\n", slicePerPerson);

    double test1 = (25 / 2) * 2; //24.0
    double test2 = (25 / 2) * 2.0; //24.0

    double test3 = 25.0 / 2 * 2; //25.0
    double test4 = (double) 25 / 2 * 2.0; //25.0
    
    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);
    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);

    return 0;    
}