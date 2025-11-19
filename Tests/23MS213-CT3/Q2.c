/*
Write a recursive function printHalfRev() to print the halves of the first n natural numbers, 
(n taken as input from the user and passed as an argument to printHalfRev()), in reverse order
(i.e. if n = 5, you print 2.5, 2, 1.5, 1, 0.5)
*/
#include<stdio.h>
int printHalfRev(float x){
	if(x == 1){
		printf(" %.2f ", 0.50);
		return 1;
	}else{
		float want = x / 2;
		printf(" %.2f ", want);
		return printHalfRev(x - 1);
	}
	
	
}

int main(){
	float ask_number;
	printf("Give a number for evaluation\n");
	scanf("%e", &ask_number);
	
	printHalfRev(ask_number);
	printf("\n");
	return 0;
}
