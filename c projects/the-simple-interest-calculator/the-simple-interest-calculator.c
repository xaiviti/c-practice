/*
Simple Interest Calculator
*/

main(){
	//declaration
	double simpleInterest, principalAmount, rate;
	double rateOfInterest, numberOfInterestPeriod;
	int months;
	
	//input and process
	printf("A Simple Interest Calculator\n");
	printf("----------------------------\n");
	printf("Enter the principal amount: ");
	scanf("%lf", &principalAmount);
	printf("Enter the rate of interest in percent: ");
	scanf("%lf", &rate);
	printf("Enter the number of interest period (in months): ");
	scanf("%d", &months);
	printf("----------------------------\n");
	numberOfInterestPeriod = months/12.0;
	rateOfInterest = rate/100;
	simpleInterest = (principalAmount)*(rateOfInterest)*(numberOfInterestPeriod);
	
	//output
	printf("Simple Interest is %lf", simpleInterest);
}
