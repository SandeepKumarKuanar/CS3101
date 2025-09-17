/**/

#include<stdio.h>

int main(){
	float userIncome, taxII, C, taxI;
	printf("Kindly enter your annual income below:\n");
	scanf("%f", &userIncome);
	
	if(userIncome >= 0 && userIncome <= 250000.0){
		taxII += 0;
	}
	else if(userIncome > 250000.0 && userIncome <= 500000.0){
		taxII += (0.05 * (userIncome - 250000.0));
	}
	else if(userIncome > 500000.0 && userIncome <= 750000.0){
		taxII += (0.15 * (userIncome - 500000.0));
		taxII += 12500.0;
	}	
	else if(userIncome > 750000.0 && userIncome <= 1000000.0){
		taxII += (0.20 * (userIncome - 750000.0));
		taxII += 37500.0;
	}
	else if(userIncome > 1000000.0 && userIncome <= 1250000.0){
		taxII += (0.25 * (userIncome - 1000000.0));
		taxII += 75000.0;
	}
	else if(userIncome > 1250000.0 && userIncome <= 1500000.0){
		taxII += (0.25 * (userIncome - 1250000));
		taxII += 125000.0;
	}
	else if(userIncome > 1500000.0){
		taxII += (0.30 * (userIncome - 1500000.0));
		taxII += 187500.0;
	}
	
	// here Cess charged is given by "C"
	C += 0.04 * taxII;
	
	// total tax to be paid would be
	taxI = C + taxII;
	
	printf("This is your net tax that you have to pay for income %f\n", userIncome);
	printf("Your tax II is %f\n", taxII);
	printf("Your Cess would be %f\n", C);
	printf("Your net Tax I, which is %f + %f\n", C, taxII);
	printf("Net == %f\n", taxI);
	return 0;
}
