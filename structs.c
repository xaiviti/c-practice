#include <stdio.h>

typedef struct rectangle{
    int length;
    int width;
} rectangle;

typedef struct position{
    int x;
    int y;
} position;

typedef struct buildingPlan{
    char owner[30];
    rectangle rectangle;
    position position;
} buildingPlan;

int main(){
    //STRUCTS - allows us to encapsulate numerous pieces of data 
                //or values inside of one variable
    //combine length and width on one data type - create struct
    rectangle myRectangle = {5,10};
    printf("The length is equal to %d, and Width is %d\n", myRectangle.length, myRectangle.width);
    
    buildingPlan myHouse = {"Heidi Siapco", {5,10}, {32,48}};
    
    printf("The house at %d %d (size %d %d) is owned by %s\n",
        myHouse.position.x,
        myHouse.position.y,
        myHouse.rectangle.length,
        myHouse.rectangle.width,
        myHouse.owner
    );

    
    
    //array of STRUCTS
    int size = 3;
    position path[] = {{0,1}, {1,2}, {3,4}};
    
    for(int i =0; i<3;i++){
        printf("%d %d\n", path[i].x, path[i].y);
    }
    
    buildingPlan *structPointer = &myHouse;
    printf("Position x: %d\n",structPointer->position.x);
    
    return 0;
}
