/*
	A Spy Number is a special number in mathematics	where the sum of its digits equals the
	product of its digits. 
	E.g., 1124 is a Spy Number because 1 + 1 + 2 + 4 = 1 × 1 × 2 × 4. 
	Implement a function isSpy() in C that takes an integer as an argument and returns if it is a Spy number or not.
*/
#include<stdio.h>
int isSpy(int)

int isSpy(int input){
	
}


int main(){
	// setting up the asking stage
	int ask_integer;
	printf("Give me your prefered integer to be tested : ");
	scanf("%d", &ask_integer);
	
// calling the function
	int check = isSpy(ask_integer);
/*	if(check == 1){
		printf("The given number is a Spy Number\n");
	}else{
		printf("The given number is not a Spy Number\n");
	}
*/	
	printf("The integer : %d\n", ask_integer);
	return 0;
}

