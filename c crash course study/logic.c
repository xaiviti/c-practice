#include<stdio.h>
#include<stdbool.h>

int main(){
    //if statements
    if(true){
        printf("This is true\n");
    }
    //if-else statements
    if(false){
        printf("This is true\n");
    }else{
        printf("It is not true\n");
    }
    //sample Problem
    printf("Sample age if, if-else statement: \n");
    int age = 17;
    printf("%d\n", age);
    if(age > 17){
        printf("%d is and adult age\n", age);
    }else{
        printf("%d is not an adult age\n", age);
    }
    
    //logical operators
    //NOT operator (!) - flip the reverse the value
    printf("Sample age not operator: \n");
    int age2 = 17;
    printf("%d\n", age2);
    if(!(age2 > 17)){
        printf("%d is an adult age\n", age2);
    }else{
        printf("%d is not an adult age\n", age2);
    }
    
    //AND operator (&&)
    printf("Sample age AND operator: \n");
    int age3 = 17;
    double money = 30000;
    printf("%d\n", age3);
    if(age3 > 17 && money > 25000){
        printf("this is true\n");
    }
    
    //OR operator (||)
    printf("Sample age OR operator: \n");
    int age4 = 17;
    double money1 = 30000;
    printf("%d\n", age4);
    if(age4 > 17 || money1 > 25000){
        printf("this is true\n");
    }
    //Warning on mixing AND and OR operator in the same expression
    //it will introduce an ambiguity and the compiler will give you a warning about it
    //check the logic table
    
    //if-else if statement
    printf("Sample if - else if statement: \n");
    int ag = 17;
    printf("%d\n", ag);
    if(ag < 150) printf("You might be alive\n");// one line if statement
    
    //switch statement
    printf("Sample switch statement: \n");
    int menuChoice = 2;
    
    switch(menuChoice){
        //evaluated into different cases
        case 0:
            printf("Case 0\n");
            break;// prevent on executing the other statements
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("default case\n");
            break;
    }
        // using multiple case
        /* //////// this covers case 0, 1, 2
        case 0:
        case 1:
        case 2:
            printf("Case 0,1,2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("default case\n");
            break;
        */
    //Conditional operator (?)
     printf("Sample Conditional Operator: \n");
     double balance = -5000;
     printf("Money values is %g, therefore, \n", balance);
     balance > 0 ? printf("You have money\n") : printf("No money\n");
     
     bool hasMoney;
     hasMoney = balance > 0 ? 1 : 0;
     
     printf(" Has money? 1 is yes 0 is no: %d\n", hasMoney);
     
    return 0;
}