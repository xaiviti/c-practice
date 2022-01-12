#include <stdio.h> //include statements allows to use functions from a certain library

//main function will execute the program as we run it

int main(){
    //sample output
    printf("Hello World!\n");

    //variables
    int x = 50; //int means integer where x is the object or identifier, when we use x, we will get the value 50.
    int y;  //in this part y is the declaration
    y = 10; //this is the initialization by assigning a value on a declared variable

    printf("%s World!\n", "Hello"); // the s in the statement can take any string 
    printf("The value of x %d\n",x);

    //Expanding the concept into multivariables
    printf("X: %d, Y: %d\n", x, y);
    //So what is %s and %d, and how will you know what to use?
        //It is called conversion characters, you can check out the list for reference
        //s - is for strings
        //d - is for integer data

    //Getting user's input (makes the application more dynamic)
    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius);//will take 2 arguments (string, variable where to store)
    printf("You choose the value %d\n", radius);

    //Strings - sequence of characters encapsulated in double quotes, thgus, you should use a character array
    char name[20]; //character array of 20 characters; reserve one character for the null terminator \0
    scanf("%19s", name);
    printf("Your name: %s\n", name);//Print the name

    return 0; //return means that everything went OK
}