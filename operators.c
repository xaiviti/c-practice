#include<stdio.h>

int main(){

    /*
    // reference - https://www.tutorialspoint.com/cprogramming/c_operators.htm
    
    ///////// plus and minus (unary)
    +
    -
    ///////// arithmetic (binary)
    +
    -
    /
    *
    %
    ///////// increment and decrement operators
    ++
    --
    ///////// assignment operators
    =
    +=
    -=
    /=
    *=
    %=
    ////////// comparison operators
    ==
    !=
    <
    >
    <=
    >=
    ////////// logical operators
    &&
    ||
    !
    ///////// conditional operators
    ?:
    ///////// precedence and associatitivity
    Reference - https://en.cppreference.com/w/c/language/operator_precedence
    */
    
    printf("\nforce precendence with ()\n");
    int xx = 2 * 3 + 3; // will be the same as y due to precedence
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;
    
    int x2 = 2 * 3 / 3;// evaluated from left to right
    printf("x2 = %d\n", x2);
    
    printf("xx = %d\n", xx);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    printf("Modulus operator: \n");
    int c = 10 % 3;// left over part or remainder
    printf("10 % 3 = %d\n",c);
    
    printf("Urinary minus: \n");
    int a = 5;
    int b = -a;
    printf("b = %d\n", b);
    printf("a = %d\n", a);
    
    printf("post increment: \n");
    a = 5;
    b = 5;
    b = a++;// same as a = a + 1;
    printf("b = %d\n", b);//b gets assigned to the first
    printf("a = %d\n", a);//then a is incremented
    
    a = 5;
    b = 5;
    b = ++a;
    printf("pre increment: \n");
    printf("b = %d\n", b);// b gets assigned to the second
    printf("a = %d\n", a);// a is incremented first
    
    printf("Assignment operators: \n");
    a = 5;
    b = 5;
    
    b += a;\
    printf("b += a = %d\n", b); // 5 + 5
    a *= 30;
    printf("a += 30 = %d\n", a); // 5 + 30
    a %= 140;
    printf("a %= 140 = %d\n", a); // 150 % 140
    
    

    return 0;
}