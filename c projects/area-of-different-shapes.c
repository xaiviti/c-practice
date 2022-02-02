/*
	Area of different Shapes
	-	Circle
	-	Square
	-	Rectangle
	-	Triangle
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
	//declaration
	int choice;
	double areaCircle, radius, diameter, measurementChoice;
	double areaSquare, side;
	double areaRectangle, length, width;
	double areaTriangle, side1, side2, side3;
	
	//input 1
	printf("-----------------------AREA-----------------------\n");
	printf("(1) Circle\n");
	printf("(2) Square\n");
	printf("(3) Rectangle\n");
	printf("(4) Triange\n");
	printf("Enter your selected shape: ");
	scanf("%d", &choice);
	
	//input 2 and process
	switch(choice){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			printf("----------------------------------------\n");
			printf("You have selected Triangle\n");
			printf("----------------------------------------\n");
			printf("Enter measurement of first side: \n");
			scanf("%lf", &side1);
			printf("Enter measurement of second side: \n");
			scanf("%lf", &side2);
			printf("Enter measurement of third side: \n");
			scanf("%lf", &side3);
			areaTriangle = ;
			printf("----------------------------------------\n");
			printf("Area of Triangle is  \n");
			break;
		default:
			printf("Invalid, no selection!");
			break;
	}
}
