/*
Blood Compatability
*/

main(){
	//declaration
	int choice, sign, bloodType;
	
	
	//input
	printf("BLOOD COMPATABILITY\n");
	printf("------------------------------------\n");
	printf("(1) Will Donate\n");
	printf("(2) Will Receive\n");
	printf("Select if you will donate or receive: ");
	scanf("%d", &choice);
	printf("------------------------------------\n");
	printf("(1) A\n");
	printf("(2) B\n");
	printf("(3) O\n");
	printf("(4) AB\n");
	printf("Enter the Blood Type: ");
	scanf("%d", &bloodType);
	printf("------------------------------------\n");
	printf("(1) Positive\n");
	printf("(2) Negative\n");
	printf("------------------------------------\n");
	printf("Enter the Blood Type: ");
	scanf("%d", &sign);
	
	//process and output
	if(choice==1){
		if(sign==1){
			if(bloodType==1){
				printf("A+ can donate to A+, AB+");
			}else if(bloodType==2){
				printf("B+ can donate to B+, AB+");
			}else if(bloodType==3){
				printf("O+ can donate to O+, A+, B+, AB+");
			}else if(bloodType==4){
				printf("AB+ can donate to AB+");
			}else{
				printf("Invalid input!");
			}
		}else if(sign==2){
			if(bloodType==1){
				printf("A- can donate to A+, A-, AB+, AB-");
			}else if(bloodType==2){
				printf("B- can donate to B+, B-, AB+, AB-");
			}else if(bloodType==3){
				printf("O- can donate to EVERYONE");
			}else if(bloodType==4){
				printf("AB- can donate to AB+, AB-");
			}else{
				printf("Invalid input!");
			}
		}else{
			printf("Invalid input!");
		}
	}else if(choice==2){
		if(sign==1){
			if(bloodType==1){
				printf("A+ can receive to A+, A-, O+, O-");
			}else if(bloodType==2){
				printf("B+ can receive to B+, B-, O+, O-");
			}else if(bloodType==3){
				printf("O+ can receive to O+, O-");
			}else if(bloodType==4){
				printf("AB+ can receive to EVERYONE");
			}else{
				printf("Invalid input!");
			}
		}else if(sign==2){
			if(bloodType==1){
				printf("A- can receive to A-, O-");
			}else if(bloodType==2){
				printf("B- can receive to B-, O-");
			}else if(bloodType==3){
				printf("O- can receive to O-");
			}else if(bloodType==4){
				printf("AB- can receive to AB-, A-, B-, O-");
			}else{
				printf("Invalid input!");
			}
		}else{
			printf("Invalid input!");
		}
	}else{
		printf("Invalid input!");
	}
}
