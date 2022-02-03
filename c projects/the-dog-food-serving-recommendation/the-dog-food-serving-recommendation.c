/*
Dog Food Serving Recommendations
*/

main(){
	//declaration
	int dogSize;
	double dogWeight, weight;
	
	//input
	printf("-------------DOG FOOD SERVING RECOMMENDATION-------------\n");
	printf("(1) Toy\n");
	printf("(2) Small\n");
	printf("(3) Medium\n");
	printf("(4) Large\n");
	printf("Select dog's size: ");
	scanf("%d", &dogSize);
	printf("Enter dog's weight(in pounds): ");
	scanf("%lf", &dogWeight);
	
	//process and output
	switch(dogSize){
		case 1:
			if(dogWeight<=3){
				printf("Use 1/3 cup of dog food.");
			}else if(3.1<=dogWeight<=6){
				printf("Use 1/2 cup of dog food.");
			}else{
				printf("It is not a toy size dog.");
			}
			break;
		case 2:
			if(dogWeight<=10){
				printf("Use 3/4 cup of dog food.");
			}else if(10.1<=dogWeight<=15){
				printf("Use 1 cup of dog food.");
			}else if(15.1<=dogWeight<=20){
				printf("Use 1 1/3 cup of dog food.");
			}else{
				printf("It is not a small size dog.");
			}
			break;
		case 3:
			if(dogWeight<=30){
				printf("Use 1 3/4 cup of dog food.");
			}else if(30.1<=dogWeight<=40){
				printf("Use 2 1/4 cup of dog food.");
			}else if(40.1<=dogWeight<=50){
				printf("Use 2 2/3 cup of dog food.");
			}else{
				printf("It is not a medium size dog.");
			}
			break;
		case 4:
			if(dogWeight<=60){
				printf("Use 3 cup of dog food.");
			}else if(60.1<=dogWeight<=70){
				printf("Use 3 1/2 cup of dog food.");
			}else if(70.1<=dogWeight<=80){
				printf("Use 3 3/4 cup of dog food.");
			}else if(80.1<=dogWeight<=90){
				printf("Use 4 1/4 cup of dog food.");
			}else if(90.1<=dogWeight<=100){
				printf("Use 4 1/2 cup of dog food.");
			}else{
				printf("It is an oversized.");
			}
			break;
		default:
			printf("Invalid input!\n");
			break;
	}
}
