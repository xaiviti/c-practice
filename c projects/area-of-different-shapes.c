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
	int choice, measurementChoice;
	double areaCircle, radius, diameter;
	double areaSquare, side;
	double areaRectangle, length, width;
	double areaTriangle, side1, side2, side3, s;
	
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
			printf("----------------------------------------\n");
			printf("You have selected Circle\n");
			printf("----------------------------------------\n");
			printf("(1) Radius\n");
			printf("(2) Diameter\n");
			printf("Enter which measurement you have: \n");
			scanf("%lf", &measurementChoice);
			printf("----------------------------------------\n");
			switch(measurementChoice){
				case 1:
					printf("Enter measurement of radius: \n");
					scanf("%lf", &radius);
					areaCircle = (3.1416)*(radius)*(radius);
					printf("----------------------------------------\n");
					printf("Area of Circle is  %lf\n", areaCircle);
					break;
				case 2:
					printf("Enter measurement of diameter: \n");
					scanf("%lf", &diameter);
					areaCircle = ((3.1416)*(diameter)*(diameter))/4;
					printf("----------------------------------------\n");
					printf("Area of Circle is  %lf\n", areaCircle);
					break;
				default:
					printf("Invalid Selection!");
					break;
			}
			break;
		case 2:
			printf("----------------------------------------\n");
			printf("You have selected Square\n");
			printf("----------------------------------------\n");
			printf("Enter measurement of side: \n");
			scanf("%lf", &side);
			areaSquare = side*side;
			printf("----------------------------------------\n");
			printf("Area of Square is  %lf\n", areaSquare);
			break;
		case 3:
			printf("----------------------------------------\n");
			printf("You have selected Rectangle\n");
			printf("----------------------------------------\n");
			printf("Enter measurement of length: \n");
			scanf("%lf", &length);
			printf("Enter measurement of width: \n");
			scanf("%lf", &width);
			areaRectangle = length*width;
			printf("----------------------------------------\n");
			printf("Area of Rectangle is  %lf\n", areaRectangle);
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
			s = (side1+side2+side3) / 2;
			areaTriangle = sqrt(s*(s-side1)*(s-side2)*(s-side3));
			printf("----------------------------------------\n");
			printf("Area of Triangle is  %lf\n", areaTriangle);
			break;
		default:
			printf("Invalid, no selection!");
			break;
	}
}
