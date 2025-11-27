/*
Write a program in C to take three integers as input from the terminal and print their
average.
*/
#include<stdio.h>
int main(){
	int num1, num2, num3;
	float avg;
	printf("Give me your first number\n");
	scanf("%d", &num1);
	printf("Give me your second number\n");
	scanf("%d", &num2);
	printf("Give me your third number\n");
	scanf("%d", &num3);
	
	int sum = num1 + num2 + num3;
	avg = sum / 3;
	printf("This is the average of the 3 numbers that you gave me %f\n", avg);
	return 0;
}
