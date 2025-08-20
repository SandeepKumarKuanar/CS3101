// Write a program in C	programming language to take as input two numbers and swap them using a third variable.

#include<stdio.h> 
int main(){
	float number1, number2, number3;
	printf("Give me a number, which would be labelled number1:\n");
	scanf("%f", &number1);
	printf("Give me another number, which would be labelled number2:\n");
	scanf("%f", &number2);
	
	printf("This is number1 = %f\n", number1);
	printf("This is number2 = %f\n", number2);
	printf("This is number3 = %f\n", number3);
	number3 = number1; 
	number1 = number2; 
	number2 = number3;
	printf("After swaping. . .\n");
	printf("This is number1 = %f\n", number1);
	printf("This is number2 = %f\n", number2);
	printf("This is number3 = %f\n", number3);
	return 0; 
}
