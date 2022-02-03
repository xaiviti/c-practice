/*
BMI Calculator
	- weight
	- height
*/

main(){
	//declaration
	double BMI, weight, height;
	
	//input
	printf("-----------------BMI CALCULATOR-----------------\n");
	printf("Enter your weight(in kilograms): ");
	scanf("%lf", &weight);
	printf("Enter your height(in meters): ");
	scanf("%lf", &height);
	
	//process and output
	printf("------------------------------------------------\n");
	BMI = (weight)/(height*height);
	printf("Your BMI is %lf.\n", &BMI);
	if(BMI<18.5){
		printf("You are Underweight. \n");
		printf("Risk of developing health problems is increased. \n");
	}else if(18.5<=BMI<=24.9){
		printf("You are Normal Weight.\n");
		printf("Risk of developing health problems is least. \n");
	}else if(25.0<=BMI<=29.9){
		printf("You are Overweight.\n");
		printf("Risk of developing health problems is increased. \n");
	}else if(30.0<=BMI<=34.9){
		printf("You have Obesity class I.\n");
		printf("Risk of developing health problems is high. \n");
	}else if(35.0<=BMI<=39.9){
		printf("You have Obesity class II.\n");
		printf("Risk of developing health problems is very high. \n");
	}else{
		printf("You have Obesity class III.\n");
		printf("Risk of developing health problems is extremely high. \n");
	}
	
}
