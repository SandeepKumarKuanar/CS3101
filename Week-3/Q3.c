/*

	Write a program to find the maximum and the second maximum of 
	three integers (taken as input from the terminal) using if-else.

*/

#include<stdio.h>


int maximumOfThem(int number1, int number2, int number3){
	if (number1 > number2){
		if (number1 > number3){
			return number1;
		}
	} if (number2 > number3){
		if (number2 > number3){
			return number2;
		}
	} if (number3 > number1){
		if (number3 > number2){
			return number3;
		}
	}
}

int minimumOfThem(int number1, int number2, int number3){
	if (number1 < number2){
		if (number1 < number3){
			return number1;
		}
	} if (number2 < number3){
		if (number2 < number3){
			return number2;
		}
	} if (number3 < number1){
		if (number3 < number2){
			return number3;
		}
	}
}



int main(){
	int num1, num2, num3;
	printf("Provide me number 1\n");
	scanf("%d", &num1);
	printf("Provide me number 2\n");
	scanf("%d", &num2);
	printf("Provide me number 3\n");
	scanf("%d", &num3);
	
	printf("Then %d shall be the maximum\n", maximumOfThem(num1, num2, num3));
	printf("Then %d shall be the minimum\n", minimumOfThem(num1, num2, num3));
	return 0;
}
